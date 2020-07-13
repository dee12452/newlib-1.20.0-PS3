#include <sys/netcalls.h>
#include <errno.h>

struct in_addr inet_makeaddr(in_addr_t net, in_addr_t lna)
{
    if(__netcalls.inet_makeaddr_r)
        return __netcalls.inet_makeaddr_r(net, lna);

    errno = ENOSYS;
    struct in_addr err;
    err.s_addr = -1;
    return err;
}