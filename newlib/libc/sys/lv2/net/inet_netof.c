#include <sys/netcalls.h>
#include <errno.h>

in_addr_t inet_netof(struct in_addr in)
{
    if(__netcalls.inet_netof_r)
        return __netcalls.inet_netof_r(in);

    errno = ENOSYS;
    return (in_addr_t) -1;
}