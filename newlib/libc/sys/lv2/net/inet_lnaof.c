#include <sys/netcalls.h>
#include <errno.h>

in_addr_t inet_lnaof(struct in_addr in)
{
    if(__netcalls.inet_lnaof_r)
        return __netcalls.inet_lnaof_r(in);

    errno = ENOSYS;
    return (in_addr_t) -1;
}