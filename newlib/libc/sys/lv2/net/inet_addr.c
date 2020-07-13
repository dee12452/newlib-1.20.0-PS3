#include <sys/netcalls.h>
#include <errno.h>

in_addr_t inet_addr(const char* cp)
{
    if(__netcalls.inet_addr_r)
        return __netcalls.inet_addr_r(cp);

    errno = ENOSYS;
    return (in_addr_t) -1;
}