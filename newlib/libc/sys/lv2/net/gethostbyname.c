#include <sys/netcalls.h>
#include <errno.h>

struct hostent * gethostbyname(const char *name)
{
    if(__netcalls.gethostbyname_r)
        return __netcalls.gethostbyname_r(name);
    
    errno = ENOSYS;
    return NULL;
}