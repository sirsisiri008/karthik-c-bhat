/******************************************************************************
 * Copyright (C) 2018-2021 aitos.io
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#include "boatconfig.h"
#include "boatiotsdk.h"
#include "boatlog.h"
#include "SimpleStorage.h"

/**
 * macro used to select wallet type:
 * - USE_ONETIME_WALLET          : create a one-time wallet
 * - USE_CREATE_PERSIST_WALLET   : create a persist wallet
 * - USE_LOAD_PERSIST_WALLET     : load a persist wallet
 * 
 * macro used to select private key format:
 * - USE_PRIKEY_FORMAT_INTERNAL_GENERATION       : key is internal generated
 * - USE_PRIKEY_FORMAT_EXTERNAL_INJECTION_PKCS   : key is pkcs format via external injection
 * - USE_PRIKEY_FORMAT_EXTERNAL_INJECTION_NATIVE : key is native format via external injection
 */

/**
 * test node url
 */
const BCHAR * demoUrl = "127.0.0.1:22000";
/**
 * transfer recipient address
 */
const BCHAR *demo_recipient_address = "0x1932c48b2bf8102ba33b4a6b545c32236e342f34";

const BCHAR *native_demoKey = "0x880771e3c738852af5dd1f1115441adf2d3ae982cb1453b8ea20e6e9c37fad";
                               
BoatQuorumWallet *g_quorum_wallet_ptr;

__BOATSTATIC BOAT_RESULT Quorumereum_createOnetimeWallet()
{
    BSINT32 index;
    BoatQuorumWalletConfig wallet_config = {0};
    BUINT8 binFormatKey[32]           = {0};

    (void)binFormatKey; //avoid warning

     //BoatLog(BOAT_LOG_NORMAL, ">>>>>>>>>> wallet format: external injection[native].");
    wallet_config.prikeyCtx_config.prikey_genMode = BOAT_WALLET_PRIKEY_GENMODE_EXTERNAL_INJECTION;
    wallet_config.prikeyCtx_config.prikey_format  = BOAT_WALLET_PRIKEY_FORMAT_NATIVE;
    wallet_config.prikeyCtx_config.prikey_type    = BOAT_WALLET_PRIKEY_TYPE_SECP256K1;
    UtilityHexToBin(binFormatKey, 32, native_demoKey, TRIMBIN_TRIM_NO, BOAT_FALSE);
    wallet_config.prikeyCtx_config.prikey_content.field_ptr = binFormatKey;
    wallet_config.prikeyCtx_config.prikey_content.field_len = 32;

    wallet_config.chain_id             = 1;
    wallet_config.eip155_compatibility = BOAT_FALSE;
    strncpy(wallet_config.node_url_str, demoUrl, BOAT_QUORUM_NODE_URL_MAX_LEN - 1);

    /* create Quorumereum wallet */
    index = BoatWalletCreate(BOAT_PROTOCOL_QUORUM, NULL, &wallet_config, sizeof(BoatQuorumWalletConfig));
    if (index < 0)
    {
        //BoatLog(BOAT_LOG_CRITICAL, "create one-time wallet failed.");
        return BOAT_ERROR_WALLET_CREATE_FAIL;
    }
    g_quorum_wallet_ptr = BoatGetWalletByIndex(index);
    
    return BOAT_SUCCESS;
}

BOAT_RESULT quorum_call_ReadStore(BoatQuorumWallet *wallet_ptr)
{
    BCHAR *result_str;
    BUINT32 index;
    BoatQuorumTx tx_ctx;
    BOAT_RESULT result;

    printf("quorum_call_ReadStore start\n");
    
    /* Set Contract Address */
    result = BoatQuorumTxInit(wallet_ptr, &tx_ctx, BOAT_TRUE, "0x0",
                           "0x24A22",
                           (BCHAR *)demo_recipient_address);

    if (result != BOAT_SUCCESS)
    {
        BoatLog(BOAT_LOG_NORMAL, "BoatQuorumTxInit fails.");
        return BOAT_ERROR_WALLET_INIT_FAIL;
    }
    char set_data[32] = {0};
    set_data[0]= 9;
    result_str = SimpleStorage_set(&tx_ctx, set_data);
    if(result_str == NULL)
    {
        BoatLog(BOAT_LOG_NORMAL, "SimpleStorage_set failed: %s.", result_str);
        //return BOAT_ERROR;
    }
    
    result_str = SimpleStorage_get(&tx_ctx);
    if (result_str == NULL)
    {
        BoatLog(BOAT_LOG_NORMAL, "SimpleStorage_get %s.", result_str);
        return BOAT_ERROR;
    }
    BoatLog(BOAT_LOG_NORMAL, "getName returns: %s", result_str);

    return BOAT_SUCCESS;
}

int main(int argc, char *argv[])
{
    BOAT_RESULT result = BOAT_SUCCESS;
    boat_try_declare;
    /* step-1: Boat SDK initialization */
    BoatIotSdkInit();

    result = Quorumereum_createOnetimeWallet();

    if (result != BOAT_SUCCESS)
    {
        BoatLog(BOAT_LOG_CRITICAL, "QuorumWalletPrepare_create failed: %d.", result);
        return -1;
       
    }
    
    /* step-3: execute 'Quorum_call_ReadStore' */
    result = quorum_call_ReadStore(g_quorum_wallet_ptr);
    if (result != BOAT_SUCCESS)
    {
        BoatLog(BOAT_LOG_NORMAL, "Quorum readStore access Failed: %d.", result);
    }
    else
    {
        BoatLog(BOAT_LOG_NORMAL, "Quorum readStore access Passed.");
    }

    /* step-4: Boat SDK Deinitialization */
    BoatIotSdkDeInit();
    
    return result;
}
