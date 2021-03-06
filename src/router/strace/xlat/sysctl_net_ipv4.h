/* Generated by ./xlat/gen.sh from ./xlat/sysctl_net_ipv4.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sysctl_net_ipv4 in mpers mode

# else

static const struct xlat_data sysctl_net_ipv4_xdata[] = {
 XLAT(NET_IPV4_FORWARD),
 XLAT(NET_IPV4_DYNADDR),
 XLAT(NET_IPV4_CONF),
 XLAT(NET_IPV4_NEIGH),
 XLAT(NET_IPV4_ROUTE),
 XLAT(NET_IPV4_FIB_HASH),
 XLAT(NET_IPV4_NETFILTER),
 XLAT(NET_IPV4_TCP_TIMESTAMPS),
 XLAT(NET_IPV4_TCP_WINDOW_SCALING),
 XLAT(NET_IPV4_TCP_SACK),
 XLAT(NET_IPV4_TCP_RETRANS_COLLAPSE),
 XLAT(NET_IPV4_DEFAULT_TTL),
 XLAT(NET_IPV4_AUTOCONFIG),
 XLAT(NET_IPV4_NO_PMTU_DISC),
 XLAT(NET_IPV4_TCP_SYN_RETRIES),
 XLAT(NET_IPV4_IPFRAG_HIGH_THRESH),
 XLAT(NET_IPV4_IPFRAG_LOW_THRESH),
 XLAT(NET_IPV4_IPFRAG_TIME),
 XLAT(NET_IPV4_TCP_MAX_KA_PROBES),
 XLAT(NET_IPV4_TCP_KEEPALIVE_TIME),
 XLAT(NET_IPV4_TCP_KEEPALIVE_PROBES),
 XLAT(NET_IPV4_TCP_RETRIES1),
 XLAT(NET_IPV4_TCP_RETRIES2),
 XLAT(NET_IPV4_TCP_FIN_TIMEOUT),
 XLAT(NET_IPV4_IP_MASQ_DEBUG),
 XLAT(NET_TCP_SYNCOOKIES),
 XLAT(NET_TCP_STDURG),
 XLAT(NET_TCP_RFC1337),
 XLAT(NET_TCP_SYN_TAILDROP),
 XLAT(NET_TCP_MAX_SYN_BACKLOG),
 XLAT(NET_IPV4_LOCAL_PORT_RANGE),
 XLAT(NET_IPV4_ICMP_ECHO_IGNORE_ALL),
 XLAT(NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS),
 XLAT(NET_IPV4_ICMP_SOURCEQUENCH_RATE),
 XLAT(NET_IPV4_ICMP_DESTUNREACH_RATE),
 XLAT(NET_IPV4_ICMP_TIMEEXCEED_RATE),
 XLAT(NET_IPV4_ICMP_PARAMPROB_RATE),
 XLAT(NET_IPV4_ICMP_ECHOREPLY_RATE),
 XLAT(NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES),
 XLAT(NET_IPV4_IGMP_MAX_MEMBERSHIPS),
 XLAT(NET_TCP_TW_RECYCLE),
 XLAT(NET_IPV4_ALWAYS_DEFRAG),
 XLAT(NET_IPV4_TCP_KEEPALIVE_INTVL),
 XLAT(NET_IPV4_INET_PEER_THRESHOLD),
 XLAT(NET_IPV4_INET_PEER_MINTTL),
 XLAT(NET_IPV4_INET_PEER_MAXTTL),
 XLAT(NET_IPV4_INET_PEER_GC_MINTIME),
 XLAT(NET_IPV4_INET_PEER_GC_MAXTIME),
 XLAT(NET_TCP_ORPHAN_RETRIES),
 XLAT(NET_TCP_ABORT_ON_OVERFLOW),
 XLAT(NET_TCP_SYNACK_RETRIES),
 XLAT(NET_TCP_MAX_ORPHANS),
 XLAT(NET_TCP_MAX_TW_BUCKETS),
 XLAT(NET_TCP_FACK),
 XLAT(NET_TCP_REORDERING),
 XLAT(NET_TCP_ECN),
 XLAT(NET_TCP_DSACK),
 XLAT(NET_TCP_MEM),
 XLAT(NET_TCP_WMEM),
 XLAT(NET_TCP_RMEM),
 XLAT(NET_TCP_APP_WIN),
 XLAT(NET_TCP_ADV_WIN_SCALE),
 XLAT(NET_IPV4_NONLOCAL_BIND),
 XLAT(NET_IPV4_ICMP_RATELIMIT),
 XLAT(NET_IPV4_ICMP_RATEMASK),
 XLAT(NET_TCP_TW_REUSE),
 XLAT(NET_TCP_FRTO),
 XLAT(NET_TCP_LOW_LATENCY),
 XLAT(NET_IPV4_IPFRAG_SECRET_INTERVAL),
#if defined(NET_IPV4_IGMP_MAX_MSF) || (defined(HAVE_DECL_NET_IPV4_IGMP_MAX_MSF) && HAVE_DECL_NET_IPV4_IGMP_MAX_MSF)
  XLAT(NET_IPV4_IGMP_MAX_MSF),
#endif
#if defined(NET_TCP_NO_METRICS_SAVE) || (defined(HAVE_DECL_NET_TCP_NO_METRICS_SAVE) && HAVE_DECL_NET_TCP_NO_METRICS_SAVE)
  XLAT(NET_TCP_NO_METRICS_SAVE),
#endif
#if defined(NET_TCP_DEFAULT_WIN_SCALE) || (defined(HAVE_DECL_NET_TCP_DEFAULT_WIN_SCALE) && HAVE_DECL_NET_TCP_DEFAULT_WIN_SCALE)
  XLAT(NET_TCP_DEFAULT_WIN_SCALE),
#endif
#if defined(NET_TCP_MODERATE_RCVBUF) || (defined(HAVE_DECL_NET_TCP_MODERATE_RCVBUF) && HAVE_DECL_NET_TCP_MODERATE_RCVBUF)
  XLAT(NET_TCP_MODERATE_RCVBUF),
#endif
#if defined(NET_TCP_TSO_WIN_DIVISOR) || (defined(HAVE_DECL_NET_TCP_TSO_WIN_DIVISOR) && HAVE_DECL_NET_TCP_TSO_WIN_DIVISOR)
  XLAT(NET_TCP_TSO_WIN_DIVISOR),
#endif
#if defined(NET_TCP_BIC_BETA) || (defined(HAVE_DECL_NET_TCP_BIC_BETA) && HAVE_DECL_NET_TCP_BIC_BETA)
  XLAT(NET_TCP_BIC_BETA),
#endif
#if defined(NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR) || (defined(HAVE_DECL_NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR) && HAVE_DECL_NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR)
  XLAT(NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR),
#endif
#if defined(NET_TCP_CONG_CONTROL) || (defined(HAVE_DECL_NET_TCP_CONG_CONTROL) && HAVE_DECL_NET_TCP_CONG_CONTROL)
  XLAT(NET_TCP_CONG_CONTROL),
#endif
#if defined(NET_TCP_ABC) || (defined(HAVE_DECL_NET_TCP_ABC) && HAVE_DECL_NET_TCP_ABC)
  XLAT(NET_TCP_ABC),
#endif
#if defined(NET_IPV4_IPFRAG_MAX_DIST) || (defined(HAVE_DECL_NET_IPV4_IPFRAG_MAX_DIST) && HAVE_DECL_NET_IPV4_IPFRAG_MAX_DIST)
  XLAT(NET_IPV4_IPFRAG_MAX_DIST),
#endif
#if defined(NET_TCP_MTU_PROBING) || (defined(HAVE_DECL_NET_TCP_MTU_PROBING) && HAVE_DECL_NET_TCP_MTU_PROBING)
  XLAT(NET_TCP_MTU_PROBING),
#endif
#if defined(NET_TCP_BASE_MSS) || (defined(HAVE_DECL_NET_TCP_BASE_MSS) && HAVE_DECL_NET_TCP_BASE_MSS)
  XLAT(NET_TCP_BASE_MSS),
#endif
#if defined(NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS) || (defined(HAVE_DECL_NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS) && HAVE_DECL_NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS)
  XLAT(NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS),
#endif
#if defined(NET_TCP_DMA_COPYBREAK) || (defined(HAVE_DECL_NET_TCP_DMA_COPYBREAK) && HAVE_DECL_NET_TCP_DMA_COPYBREAK)
  XLAT(NET_TCP_DMA_COPYBREAK),
#endif
#if defined(NET_TCP_SLOW_START_AFTER_IDLE) || (defined(HAVE_DECL_NET_TCP_SLOW_START_AFTER_IDLE) && HAVE_DECL_NET_TCP_SLOW_START_AFTER_IDLE)
  XLAT(NET_TCP_SLOW_START_AFTER_IDLE),
#endif
#if defined(NET_CIPSOV4_CACHE_ENABLE) || (defined(HAVE_DECL_NET_CIPSOV4_CACHE_ENABLE) && HAVE_DECL_NET_CIPSOV4_CACHE_ENABLE)
  XLAT(NET_CIPSOV4_CACHE_ENABLE),
#endif
#if defined(NET_CIPSOV4_CACHE_BUCKET_SIZE) || (defined(HAVE_DECL_NET_CIPSOV4_CACHE_BUCKET_SIZE) && HAVE_DECL_NET_CIPSOV4_CACHE_BUCKET_SIZE)
  XLAT(NET_CIPSOV4_CACHE_BUCKET_SIZE),
#endif
#if defined(NET_CIPSOV4_RBM_OPTFMT) || (defined(HAVE_DECL_NET_CIPSOV4_RBM_OPTFMT) && HAVE_DECL_NET_CIPSOV4_RBM_OPTFMT)
  XLAT(NET_CIPSOV4_RBM_OPTFMT),
#endif
#if defined(NET_CIPSOV4_RBM_STRICTVALID) || (defined(HAVE_DECL_NET_CIPSOV4_RBM_STRICTVALID) && HAVE_DECL_NET_CIPSOV4_RBM_STRICTVALID)
  XLAT(NET_CIPSOV4_RBM_STRICTVALID),
#endif
#if defined(NET_TCP_AVAIL_CONG_CONTROL) || (defined(HAVE_DECL_NET_TCP_AVAIL_CONG_CONTROL) && HAVE_DECL_NET_TCP_AVAIL_CONG_CONTROL)
  XLAT(NET_TCP_AVAIL_CONG_CONTROL),
#endif
#if defined(NET_TCP_ALLOWED_CONG_CONTROL) || (defined(HAVE_DECL_NET_TCP_ALLOWED_CONG_CONTROL) && HAVE_DECL_NET_TCP_ALLOWED_CONG_CONTROL)
  XLAT(NET_TCP_ALLOWED_CONG_CONTROL),
#endif
#if defined(NET_TCP_MAX_SSTHRESH) || (defined(HAVE_DECL_NET_TCP_MAX_SSTHRESH) && HAVE_DECL_NET_TCP_MAX_SSTHRESH)
  XLAT(NET_TCP_MAX_SSTHRESH),
#endif
#if defined(NET_TCP_FRTO_RESPONSE) || (defined(HAVE_DECL_NET_TCP_FRTO_RESPONSE) && HAVE_DECL_NET_TCP_FRTO_RESPONSE)
  XLAT(NET_TCP_FRTO_RESPONSE),
#endif
};
static
const struct xlat sysctl_net_ipv4[1] = { {
 .data = sysctl_net_ipv4_xdata,
 .size = ARRAY_SIZE(sysctl_net_ipv4_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
