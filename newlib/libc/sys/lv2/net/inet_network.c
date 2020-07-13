#include <sys/netcalls.h>
#include <errno.h>

in_addr_t inet_network(const char* cp)
{
    if(__netcalls.inet_network_r)
        return __netcalls.inet_network_r(cp);

    errno = ENOSYS;
    return (in_addr_t) -1;
}