/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: hwbcs_network.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "hwbcs_network.pb-c.h"
void   common__hwbcs_networks__init
                     (Common__HwbcsNetworks         *message)
{
  static const Common__HwbcsNetworks init_value = COMMON__HWBCS_NETWORKS__INIT;
  *message = init_value;
}
size_t common__hwbcs_networks__get_packed_size
                     (const Common__HwbcsNetworks *message)
{
  assert(message->base.descriptor == &common__hwbcs_networks__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__hwbcs_networks__pack
                     (const Common__HwbcsNetworks *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__hwbcs_networks__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__hwbcs_networks__pack_to_buffer
                     (const Common__HwbcsNetworks *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__hwbcs_networks__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__HwbcsNetworks *
       common__hwbcs_networks__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__HwbcsNetworks *)
     protobuf_c_message_unpack (&common__hwbcs_networks__descriptor,
                                allocator, len, data);
}
void   common__hwbcs_networks__free_unpacked
                     (Common__HwbcsNetworks *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__hwbcs_networks__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   common__hwbcs_network_data__init
                     (Common__HwbcsNetworkData         *message)
{
  static const Common__HwbcsNetworkData init_value = COMMON__HWBCS_NETWORK_DATA__INIT;
  *message = init_value;
}
size_t common__hwbcs_network_data__get_packed_size
                     (const Common__HwbcsNetworkData *message)
{
  assert(message->base.descriptor == &common__hwbcs_network_data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__hwbcs_network_data__pack
                     (const Common__HwbcsNetworkData *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__hwbcs_network_data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__hwbcs_network_data__pack_to_buffer
                     (const Common__HwbcsNetworkData *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__hwbcs_network_data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__HwbcsNetworkData *
       common__hwbcs_network_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__HwbcsNetworkData *)
     protobuf_c_message_unpack (&common__hwbcs_network_data__descriptor,
                                allocator, len, data);
}
void   common__hwbcs_network_data__free_unpacked
                     (Common__HwbcsNetworkData *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__hwbcs_network_data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   common__hwbcs_nodes_cfg__init
                     (Common__HwbcsNodesCfg         *message)
{
  static const Common__HwbcsNodesCfg init_value = COMMON__HWBCS_NODES_CFG__INIT;
  *message = init_value;
}
size_t common__hwbcs_nodes_cfg__get_packed_size
                     (const Common__HwbcsNodesCfg *message)
{
  assert(message->base.descriptor == &common__hwbcs_nodes_cfg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__hwbcs_nodes_cfg__pack
                     (const Common__HwbcsNodesCfg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__hwbcs_nodes_cfg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__hwbcs_nodes_cfg__pack_to_buffer
                     (const Common__HwbcsNodesCfg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__hwbcs_nodes_cfg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__HwbcsNodesCfg *
       common__hwbcs_nodes_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__HwbcsNodesCfg *)
     protobuf_c_message_unpack (&common__hwbcs_nodes_cfg__descriptor,
                                allocator, len, data);
}
void   common__hwbcs_nodes_cfg__free_unpacked
                     (Common__HwbcsNodesCfg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__hwbcs_nodes_cfg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   common__hwbcs_node_layout_cfg__init
                     (Common__HwbcsNodeLayoutCfg         *message)
{
  static const Common__HwbcsNodeLayoutCfg init_value = COMMON__HWBCS_NODE_LAYOUT_CFG__INIT;
  *message = init_value;
}
size_t common__hwbcs_node_layout_cfg__get_packed_size
                     (const Common__HwbcsNodeLayoutCfg *message)
{
  assert(message->base.descriptor == &common__hwbcs_node_layout_cfg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__hwbcs_node_layout_cfg__pack
                     (const Common__HwbcsNodeLayoutCfg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__hwbcs_node_layout_cfg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__hwbcs_node_layout_cfg__pack_to_buffer
                     (const Common__HwbcsNodeLayoutCfg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__hwbcs_node_layout_cfg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__HwbcsNodeLayoutCfg *
       common__hwbcs_node_layout_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__HwbcsNodeLayoutCfg *)
     protobuf_c_message_unpack (&common__hwbcs_node_layout_cfg__descriptor,
                                allocator, len, data);
}
void   common__hwbcs_node_layout_cfg__free_unpacked
                     (Common__HwbcsNodeLayoutCfg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__hwbcs_node_layout_cfg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   common__hwbcs_node_group_cfg__init
                     (Common__HwbcsNodeGroupCfg         *message)
{
  static const Common__HwbcsNodeGroupCfg init_value = COMMON__HWBCS_NODE_GROUP_CFG__INIT;
  *message = init_value;
}
size_t common__hwbcs_node_group_cfg__get_packed_size
                     (const Common__HwbcsNodeGroupCfg *message)
{
  assert(message->base.descriptor == &common__hwbcs_node_group_cfg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__hwbcs_node_group_cfg__pack
                     (const Common__HwbcsNodeGroupCfg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__hwbcs_node_group_cfg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__hwbcs_node_group_cfg__pack_to_buffer
                     (const Common__HwbcsNodeGroupCfg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__hwbcs_node_group_cfg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__HwbcsNodeGroupCfg *
       common__hwbcs_node_group_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__HwbcsNodeGroupCfg *)
     protobuf_c_message_unpack (&common__hwbcs_node_group_cfg__descriptor,
                                allocator, len, data);
}
void   common__hwbcs_node_group_cfg__free_unpacked
                     (Common__HwbcsNodeGroupCfg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__hwbcs_node_group_cfg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   common__hwbcs_node_info__init
                     (Common__HwbcsNodeInfo         *message)
{
  static const Common__HwbcsNodeInfo init_value = COMMON__HWBCS_NODE_INFO__INIT;
  *message = init_value;
}
size_t common__hwbcs_node_info__get_packed_size
                     (const Common__HwbcsNodeInfo *message)
{
  assert(message->base.descriptor == &common__hwbcs_node_info__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t common__hwbcs_node_info__pack
                     (const Common__HwbcsNodeInfo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &common__hwbcs_node_info__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t common__hwbcs_node_info__pack_to_buffer
                     (const Common__HwbcsNodeInfo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &common__hwbcs_node_info__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Common__HwbcsNodeInfo *
       common__hwbcs_node_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Common__HwbcsNodeInfo *)
     protobuf_c_message_unpack (&common__hwbcs_node_info__descriptor,
                                allocator, len, data);
}
void   common__hwbcs_node_info__free_unpacked
                     (Common__HwbcsNodeInfo *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &common__hwbcs_node_info__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor common__hwbcs_networks__field_descriptors[2] =
{
  {
    "networkNum",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNetworks, networknum),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "networks",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNetworks, networks),
    &common__hwbcs_network_data__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__hwbcs_networks__field_indices_by_name[] = {
  0,   /* field[0] = networkNum */
  1,   /* field[1] = networks */
};
static const ProtobufCIntRange common__hwbcs_networks__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor common__hwbcs_networks__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.hwbcsNetworks",
  "HwbcsNetworks",
  "Common__HwbcsNetworks",
  "common",
  sizeof(Common__HwbcsNetworks),
  2,
  common__hwbcs_networks__field_descriptors,
  common__hwbcs_networks__field_indices_by_name,
  1,  common__hwbcs_networks__number_ranges,
  (ProtobufCMessageInit) common__hwbcs_networks__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor common__hwbcs_network_data__field_descriptors[7] =
{
  {
    "index",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNetworkData, index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "accountCertContent",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNetworkData, accountcertcontent),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "accountClientTlsPrikey",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNetworkData, accountclienttlsprikey),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "accountClientTlsCert",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNetworkData, accountclienttlscert),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tlsClientCertContent",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNetworkData, tlsclientcertcontent),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "layoutCfg",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Common__HwbcsNetworkData, n_layoutcfg),
    offsetof(Common__HwbcsNetworkData, layoutcfg),
    &common__hwbcs_node_layout_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "orderCfg",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNetworkData, ordercfg),
    &common__hwbcs_node_group_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__hwbcs_network_data__field_indices_by_name[] = {
  1,   /* field[1] = accountCertContent */
  3,   /* field[3] = accountClientTlsCert */
  2,   /* field[2] = accountClientTlsPrikey */
  0,   /* field[0] = index */
  5,   /* field[5] = layoutCfg */
  6,   /* field[6] = orderCfg */
  4,   /* field[4] = tlsClientCertContent */
};
static const ProtobufCIntRange common__hwbcs_network_data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor common__hwbcs_network_data__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.hwbcsNetworkData",
  "HwbcsNetworkData",
  "Common__HwbcsNetworkData",
  "common",
  sizeof(Common__HwbcsNetworkData),
  7,
  common__hwbcs_network_data__field_descriptors,
  common__hwbcs_network_data__field_indices_by_name,
  1,  common__hwbcs_network_data__number_ranges,
  (ProtobufCMessageInit) common__hwbcs_network_data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor common__hwbcs_nodes_cfg__field_descriptors[2] =
{
  {
    "layoutCfg",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Common__HwbcsNodesCfg, n_layoutcfg),
    offsetof(Common__HwbcsNodesCfg, layoutcfg),
    &common__hwbcs_node_layout_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "orderCfg",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNodesCfg, ordercfg),
    &common__hwbcs_node_group_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__hwbcs_nodes_cfg__field_indices_by_name[] = {
  0,   /* field[0] = layoutCfg */
  1,   /* field[1] = orderCfg */
};
static const ProtobufCIntRange common__hwbcs_nodes_cfg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor common__hwbcs_nodes_cfg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.hwbcsNodesCfg",
  "HwbcsNodesCfg",
  "Common__HwbcsNodesCfg",
  "common",
  sizeof(Common__HwbcsNodesCfg),
  2,
  common__hwbcs_nodes_cfg__field_descriptors,
  common__hwbcs_nodes_cfg__field_indices_by_name,
  1,  common__hwbcs_nodes_cfg__number_ranges,
  (ProtobufCMessageInit) common__hwbcs_nodes_cfg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor common__hwbcs_node_layout_cfg__field_descriptors[1] =
{
  {
    "groupCfg",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Common__HwbcsNodeLayoutCfg, n_groupcfg),
    offsetof(Common__HwbcsNodeLayoutCfg, groupcfg),
    &common__hwbcs_node_group_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__hwbcs_node_layout_cfg__field_indices_by_name[] = {
  0,   /* field[0] = groupCfg */
};
static const ProtobufCIntRange common__hwbcs_node_layout_cfg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor common__hwbcs_node_layout_cfg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.hwbcsNodeLayoutCfg",
  "HwbcsNodeLayoutCfg",
  "Common__HwbcsNodeLayoutCfg",
  "common",
  sizeof(Common__HwbcsNodeLayoutCfg),
  1,
  common__hwbcs_node_layout_cfg__field_descriptors,
  common__hwbcs_node_layout_cfg__field_indices_by_name,
  1,  common__hwbcs_node_layout_cfg__number_ranges,
  (ProtobufCMessageInit) common__hwbcs_node_layout_cfg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor common__hwbcs_node_group_cfg__field_descriptors[3] =
{
  {
    "quantities",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNodeGroupCfg, quantities),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "endorser",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Common__HwbcsNodeGroupCfg, n_endorser),
    offsetof(Common__HwbcsNodeGroupCfg, endorser),
    &common__hwbcs_node_info__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tlsOrgCertContent",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNodeGroupCfg, tlsorgcertcontent),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__hwbcs_node_group_cfg__field_indices_by_name[] = {
  1,   /* field[1] = endorser */
  0,   /* field[0] = quantities */
  2,   /* field[2] = tlsOrgCertContent */
};
static const ProtobufCIntRange common__hwbcs_node_group_cfg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor common__hwbcs_node_group_cfg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.hwbcsNodeGroupCfg",
  "HwbcsNodeGroupCfg",
  "Common__HwbcsNodeGroupCfg",
  "common",
  sizeof(Common__HwbcsNodeGroupCfg),
  3,
  common__hwbcs_node_group_cfg__field_descriptors,
  common__hwbcs_node_group_cfg__field_indices_by_name,
  1,  common__hwbcs_node_group_cfg__number_ranges,
  (ProtobufCMessageInit) common__hwbcs_node_group_cfg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor common__hwbcs_node_info__field_descriptors[2] =
{
  {
    "nodeUrl",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNodeInfo, nodeurl),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hostName",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Common__HwbcsNodeInfo, hostname),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned common__hwbcs_node_info__field_indices_by_name[] = {
  1,   /* field[1] = hostName */
  0,   /* field[0] = nodeUrl */
};
static const ProtobufCIntRange common__hwbcs_node_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor common__hwbcs_node_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "common.hwbcsNodeInfo",
  "HwbcsNodeInfo",
  "Common__HwbcsNodeInfo",
  "common",
  sizeof(Common__HwbcsNodeInfo),
  2,
  common__hwbcs_node_info__field_descriptors,
  common__hwbcs_node_info__field_indices_by_name,
  1,  common__hwbcs_node_info__number_ranges,
  (ProtobufCMessageInit) common__hwbcs_node_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
