#ifndef _RIPNG_H_
#define _RIPNG_H_

#include <stdbool.h>
#include <stdint.h>

#include <netinet/in.h>

#define RIPNG_ADDRESS_FAMILY                    0x01
#define RIPNG_TRANSPORT_PROTOCOL                17
#define RIPNG_TRANSPORT_PORT                    521

#define RIPNG_GROUP_ADDRESS                     "FF02::9"

#define RIPNG_ROUTE_CODE                        "R"
#define RIPNG_ROUTE_HELP                        "RIPng\n"

/* RIPng: Hop Count Metric */
#define RIPNG_METRIC_MINIMUM                    0
#define RIPNG_METRIC_MAXIMUM                    15
#define RIPNG_METRIC_INFINITY                   16

/* RIPng: Message Commands */
#define RIPNG_COMMAND_REQUEST                   1
#define RIPNG_COMMAND_RESPONSE                  2

/* RIPng: Route Types */
#define RIPNG_ROUTE_RTE                         0
#define RIPNG_ROUTE_STATIC                      1
#define RIPNG_ROUTE_INTERFACE                   2
#define RIPNG_ROUTE_DEFAULT                     3
#define RIPNG_ROUTE_SUMMARY                     4
#define RIPNG_ROUTE_REDISTRIBUTE                5

/* RIPng: Route Table Entry (RTE) */
struct rte
{
    struct in6_addr             _ipv6_prefix;
    uint16_t                    _route_tag;
    uint8_t                     _prefix_len;
    uint8_t                     _metric;
};

/* RIPng: Packet Format */
struct packet
{
    uint8_t                     _command;
    uint8_t                     _version;
    uint16_t                    _must_be_zero;
    struct rte                  _rte[1];
};

#endif /* _RIPNG_H_ */
