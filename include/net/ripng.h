#ifndef _RIPNG_H_
#define _RIPNG_H_

#include <stdbool.h>
#include <stdint.h>

#include <netinet/in.h>

#define RIPNG_ADDRESS_FAMILY                            0x01
#define RIPNG_TRANSPORT_PROTOCOL                        17
#define RIPNG_TRANSPORT_PORT                            521

#define RIPNG_GROUP_ADDRESS                             "FF02::9"

#define RIPNG_TABLE_CODE                                "R"
#define RIPNG_TABLE_HELP                                "RIP\n"
#define RIPNG_TABLE_DISTANCE                            120

/* RIPng: Hop Count Metric */
#define RIPNG_METRIC_MINIMUM                            0
#define RIPNG_METRIC_MAXIMUM                            15
#define RIPNG_METRIC_INFINITY                           16
#define RIPNG_METRIC_NEXTHOP                            0xFF

/* RIPng: Message Commands */
#define RIPNG_COMMAND_REQUEST                           1
#define RIPNG_COMMAND_RESPONSE                          2

/* RIPng: Route Types */
#define RIPNG_ROUTE_RTE                                 0
#define RIPNG_ROUTE_STATIC                              1
#define RIPNG_ROUTE_INTERFACE                           2
#define RIPNG_ROUTE_DEFAULT                             3
#define RIPNG_ROUTE_SUMMARY                             4
#define RIPNG_ROUTE_REDISTRIBUTE                        5

/* RIPng: Equal-Cost Multipath Load Balancing */
#define RIPNG_ECMP_MINIMUM                              1
#define RIPNG_ECMP_MAXIMUM                              32
#define RIPNG_ECMP_DEFAULT                              1

/* RIPng: Timers */
#define RIPNG_TIMER_UPDATE                              30
#define RIPNG_TIMER_ROUTE_TIMEOUT                       180
#define RIPNG_TIMER_ROUTE_HOLDDOWN                      0
#define RIPNG_TIMER_ROUTE_GARBAGE                       120

/* RIPng: Interface Send/Receive Options */
#define RIPNG_INTERFACE_SEND_UNSPEC                     0
#define RIPNG_INTERFACE_SEND_OFF                        1
#define RIPNG_INTERFACE_RECEIVE_UNSPEC                  0
#define RIPNG_INTERFACE_RECEIVE_OFF                     1

/* RIPng: Default Information Handling */
#define RIPNG_DEFAULT_ROUTE_ORIGINATE_UNSPEC            0
#define RIPNG_DEFAULT_ROUTE_ORIGINATE_OFF               1
#define RIPNG_DEFAULT_ROUTE_ORIGINATE                   2

#define RIPNG_DEFAULT_ROUTE_ACCEPT_UNSPEC               0
#define RIPNG_DEFAULT_ROUTE_ACCEPT_OFF                  1
#define RIPNG_DEFAULT_ROUTE_ACCEPT                      2

/* RIPng: Split Horizon */
#define RIPNG_SPLIT_HORIZON_DISABLE                     0
#define RIPNG_SPLIT_HORIZON_ENABLE                      1
#define RIPNG_SPLIT_HORIZON_POISON_REVERSE              2

/* RIPng: VRF Operations */
#define RIPNG_VRF_MODE_DISABLE                          0
#define RIPNG_VRF_MODE_ENABLE                           1


/* RIPng: Route Table Entry (RTE) */
struct ripng_rte
{
    struct in6_addr             _ipv6_prefix;
    uint16_t                    _route_tag;
    uint8_t                     _prefix_len;
    uint8_t                     _metric;
};

/* RIPng: Packet Format */
struct ripng_packet
{
    uint8_t                     _command;
    uint8_t                     _version;
    uint16_t                    _must_be_zero;
    struct ripng_rte            _rte[1];
};

/* RIPng: Protocol Instance */
struct ripng
{
    char                        _name[32];
    char                        _vrf[32];
    bool                        _active;
    int                         _socket;
    uint8_t                     _command;
    uint8_t                     _version;

    uint8_t                     _distance;
    uint8_t                     _maximum_paths;

    bool                        _poison_reverse;
    bool                        _split_horizon;

    uint16_t                    _timer_update;
    uint16_t                    _timer_timeout;
    uint16_t                    _timer_holddown;
    uint16_t                    _timer_garbage;
};

/* RIPng: Interface Parameters */
struct ripng_interface
{
    struct ripng                *ripng;

    bool                        _enable;
    bool                        _active;

    bool                        _default_route_originate;
    bool                        _default_route_only;

};

#endif /* _RIPNG_H_ */
