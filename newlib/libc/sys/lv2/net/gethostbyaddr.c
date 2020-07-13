#include <sys/netcalls.h>
#include <errno.h>

struct hostent * gethostbyaddr(const char *addr, socklen_t len, int type)
{
    if(__netcalls.gethostbyaddr_r)
        return __netcalls.gethostbyaddr_r(addr, len, type);
    
    errno = ENOSYS;
    return NULL;
}