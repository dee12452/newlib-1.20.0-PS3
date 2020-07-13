#include <sys/netcalls.h>

struct __netcalls_t __netcalls = {
    NULL,           //  accept_r
    NULL,           //  bind_r
    NULL,           //  connect_r
    NULL,           //  getpeername_r
    NULL,           //  getsockname_r
    NULL,           //  getsockopt_r
    NULL,           //  listen_r
    NULL,           //  recv_r
    NULL,           //  recvfrom_r
    NULL,           //  recvmsg_r
    NULL,           //  send_r
    NULL,           //  sendto_r
    NULL,           //  sendmsg_r
    NULL,           //  setsockopt_r
    NULL,           //  shutdown_r
    NULL,           //  socket_r
    NULL,           //  socketpair_r
    NULL,           //  poll_r
    NULL,           //  select_r
    NULL,           //  gethostbyaddr_r
    NULL,           //  gethostbyname_r
    NULL,           //  getservbyport_r
    NULL,           //  inet_addr_r
    NULL,           //  inet_aton_r
    NULL,           //  inet_lnaof_r
    NULL,           //  inet_makeaddr_r
    NULL,           //  inet_netof_r
    NULL,           //  inet_network_r
    NULL,           //  inet_ntoa_r
    NULL,           //  inet_ntop_r
    NULL            //  inet_pton_r
}