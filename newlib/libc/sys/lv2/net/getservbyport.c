#include <sys/netcalls.h>
#include <errno.h>

struct servent * getservbyport(int port, const char *proto)
{
    if(__netcalls.getservbyport_r)
        return __netcalls.getservbyport_r(port, proto);

    errno = ENOSYS;
    return NULL;
}