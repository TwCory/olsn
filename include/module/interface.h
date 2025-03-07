#ifndef __MODULE_INTERFACE_H__
#define __MODULE_INTERFACE_H__


#define IFCONFIG_AAA
#define IFCONFIG_ACCESS_EXPRESSION
#define IFCONFIG_ARP
#define IFCONFIG_BACKUP
#define IFCONFIG_BANDWIDTH
#define IFCONFIG_BFD
#define IFCONFIG_BGP_POLICY
#define IFCONFIG_BRIDGE_GROUP
#define IFCONFIG_CARP
#define IFCONFIG_CARRIER_DELAY
#define IFCONFIG_CDP
#define IFCONFIG_CLNS
#define IFCONFIG_CMNS
#define IFCONFIG_CRYPTO
#define IFCONFIG_DAMPENING
#define IFCONFIG_DECNET
#define IFCONFIG_DOMAIN
#define IFCONFIG_DOT1Q
#define IFCONFIG_DSPU
#define IFCONFIG_DUPLEX
#define IFCONFIG_EOU
#define IFCONFIG_FHRP
#define IFCONFIG_FLOW_SAMPLER
#define IFCONFIG_FRAS
#define IFCONFIG_HOLD_QUEUE
#define IFCONFIG_IP
#define IFCONFIG_IPHC_PROFILE
#define IFCONFIG_IPV6
#define IFCONFIG_ISIS
#define IFCONFIG_ISO_IGRP
#define IFCONFIG_KEEPALIVE
#define IFCONFIG_L2PROTOCOL
#define IFCONFIG_LAN_NAME
#define IFCONFIG_LAT
#define IFCONFIG_LISP
#define IFCONFIG_LLC2
#define IFCONFIG_LLDP
#define IFCONFIG_LOAD_INTERVAL
#define IFCONFIG_LOCADDR_PRIORITY
#define IFCONFIG_LOCATION
#define IFCONFIG_LOGGING
#define IFCONFIG_LOOPBACK
#define IFCONFIG_MAC_ADDRESS
#define IFCONFIG_MEDIA_PROXY
#define IFCONFIG_MEDIA_TYPE
#define IFCONFIG_METADATA
#define IFCONFIG_MOP
#define IFCONFIG_MPLS
#define IFCONFIG_MTU
#define IFCONFIG_NAT64
#define IFCONFIG_NETBIOS
#define IFCONFIG_NTP
#define IFCONFIG_ONEP
#define IFCONFIG_OSPFV3
#define IFCONFIG_PERFORMANCE
#define IFCONFIG_RATE_LIMIT
#define IFCONFIG_REDUNDANCY
#define IFCONFIG_RMON
#define IFCONFIG_ROUTING
#define IFCONFIG_SAP_PRIORITY
#define IFCONFIG_SERVICE
#define IFCONFIG_SERVICE_POLICY
#define IFCONFIG_SERVICE_ROUTING
#define IFCONFIG_SNA
#define IFCONFIG_SNAPSHOT
#define IFCONFIG_SNMP
#define IFCONFIG_SPEED
#define IFCONFIG_SRLG
#define IFCONFIG_TARP
#define IFCONFIG_TIMEOUT
#define IFCONFIG_TOPOLOGY
#define IFCONFIG_TRANSMIT_INTERFACE
#define IFCONFIG_TX_RING_LIMIT
#define IFCONFIG_USER_GROUP
#define IFCONFIG_VLAN_ID
#define IFCONFIG_VLAN_RANGE
#define IFCONFIG_VNET
#define IFCONFIG_VRF
#define IFCONFIG_VRRP


enum if_type {

    IF_TYPE_APPLETALK,
    IF_TYPE_ARCNET,
    IF_TYPE_ATM,
    IF_TYPE_ATM_GROUP,
    IF_TYPE_AUTO_TEMPLATE,
    IF_TYPE_AX25,

    IF_TYPE_BATMAN,
    IF_TYPE_BATMAN_ADVANCED,
    IF_TYPE_BDI,
    IF_TYPE_BLUETOOTH,
    IF_TYPE_BVI,

    IF_TYPE_CAN,
    IF_TYPE_CDMA,
    IF_TYPE_CTUNNEL,

    IF_TYPE_DIALER,
    IF_TYPE_DLCI,
    IF_TYPE_DOCSIS,
    IF_TYPE_DOT11,
    IF_TYPE_DOT11_1997,
    IF_TYPE_DOT11_A,
    IF_TYPE_DOT11_B,
    IF_TYPE_DOT11_G,
    IF_TYPE_DOT11_N,
    IF_TYPE_DOT11_AC,
    IF_TYPE_DOT11_AX,
    IF_TYPE_DOT11_BE,
    IF_TYPE_DSA,
    IF_TYPE_DSL,

    IF_TYPE_ERSPAN,
    IF_TYPE_ETHERNET,
    IF_TYPE_ETHERNET_10M,
    IF_TYPE_ETHERNET_100M,
    IF_TYPE_ETHERNET_1000M,
    IF_TYPE_ETHERNET_2500M,
    IF_TYPE_ETHERNET_5000M,
    IF_TYPE_ETHERNET_10G,
    IF_TYPE_ETHERNET_25G,
    IF_TYPE_ETHERNET_40G,
    IF_TYPE_ETHERNET_50G,
    IF_TYPE_ETHERNET_100G,
    IF_TYPE_ETHERNET_200G,
    IF_TYPE_ETHERNET_400G,
    IF_TYPE_ETHERNET_800G,
    IF_TYPE_ETHERNET_1600G,
    IF_TYPE_EXPERIMENTAL_ETHERNET,

    IF_TYPE_FDDI,
    IF_TYPE_FIBRE_CHANNEL,
    IF_TYPE_FRAME_RELAY,

    IF_TYPE_GMPLS,
    IF_TYPE_GSM,
    IF_TYPE_GTP,

    IF_TYPE_IFB,
    IF_TYPE_INFINIBAND,
    IF_TYPE_ISDN,
    IF_TYPE_ISDN_BRI,
    IF_TYPE_ISDN_PRI,

    IF_TYPE_LINK_AGGREGATION_GROUP,
    IF_TYPE_LISP,
    IF_TYPE_LONG_REACH_ETHERNET,
    IF_TYPE_LOOPBACK,
    IF_TYPE_LSP_VIF,

    IF_TYPE_MFR,
    IF_TYPE_MULTILINK,

    IF_TYPE_NEBULA,
    IF_TYPE_NETLINK_MONITOR,
    IF_TYPE_NFC,
    IF_TYPE_NULL,
    IF_TYPE_NVE,

    IF_TYPE_OMNIPATH,
    IF_TYPE_OPEN_VSWITCH,
    IF_TYPE_OPENCONNECT,
    IF_TYPE_OPENVPN,

    IF_TYPE_PARALLEL,
    IF_TYPE_PGM_VIF,
    IF_TYPE_PPTP,
    IF_TYPE_PSEUDOWIRE,

    IF_TYPE_SATELLITE,
    IF_TYPE_SERIAL,
    IF_TYPE_SOFTETHER,
    IF_TYPE_SONET,
    IF_TYPE_SSTP,
    IF_TYPE_STUNNEL,

    IF_TYPE_TAILSCALE,
    IF_TYPE_TOKEN_BUS,
    IF_TYPE_TOKEN_RING,
    IF_TYPE_TUNNEL,

    IF_TYPE_VCAN,
    IF_TYPE_VIRTUAL_ACCESS,
    IF_TYPE_VIRTUAL_ETHERNET,
    IF_TYPE_VIRTUAL_PPP,
    IF_TYPE_VIRTUAL_TEMPLATE,
    IF_TYPE_VIRTUAL_TOKEN_RING,
    IF_TYPE_VLAN,
    IF_TYPE_VXCAN,

    IF_TYPE_WIREGUARD,
    IF_TYPE_WPAN,

    IF_TYPE_X25,

    IF_TYPE_ZEROTIER,

};

/* Interfaces: Name Prefix */

#define IFPFX_APPLETALK                                 "AppleTalk"
#define IFPFX_ARCNET                                    "ARCNET"
#define IFPFX_ATM                                       "Async"
#define IFPFX_ATM_GROUP                                 "Group-Async"
#define IFPFX_AUTO_TEMPLATE                             "Auto-Template"
#define IFPFX_AX25                                      "Ax25"

#define IFPFX_BATMAN                                    "BATMAN"
#define IFPFX_BATMAN_ADVANCED                           "BATMAN-Advanced"

#define IFPFX_LISP                                      "LISP"
#define IFPFX_LOOPBACK                                  "Loopback"

#define IFPFX_NEBULA                                    "Nebula"
#define IFPFX_NETLINK_MONITOR                           "Netlink-Monitor"

#define IFPFX_TAILSCALE                                 "Tailscale"
#define IFPFX_TOKEN_BUS                                 "TokenBus"
#define IFPFX_TOKEN_RING                                "TokenRing"
#define IFPFX_TUNNEL                                    "Tunnel"

#define IFPFX_VCAN                                      "VCAN"
#define IFPFX_VIRTUAL_ACCESS                            "Virtual-Access"
#define IFPFX_VIRTUAL_ETHERNET                          "Virtual-Ethernet"
#define IFPFX_VIRTUAL_PPP                               "Virtual-PPP"
#define IFPFX_VIRTUAL_TEMPLATE                          "Virtual-Template"
#define IFPFX_VIRTUAL_TOKEN_RING                        "Virtual-TokenRing"
#define IFPFX_VLAN                                      "VLAN"
#define IFPFX_VXCAN                                     "VxCAN"

#define IFPFX_X25                                       "X25Link"

#define IFPFX_ZEROTIER                                  "ZeroTier"

/* Interfaces: Help Information */

#define IFHELP_LOOPBACK                                 "Loopback Virtual Interface\n"

#define IFHELP_TUNNEL                                   "Tunnel Interface\n"

struct if_type_data {

    enum if_type type;
    enum if_type parent_type;

    unsigned int flags;

    char *prefix;
    char *help;

    bool cap_bridge;
    bool cap_create_delete;
    bool cap_link_agg;
    bool cap_subif;

};

struct interface {

    enum if_type type;

    char name_kernel;
    char prefix;

    unsigned int port_id;
    unsigned int slot_id;
    unsigned int stack_id;
    unsigned int subif_id;

    unsigned int conf;

};


#endif /* __MODULE_INTERFACE_H__ */
