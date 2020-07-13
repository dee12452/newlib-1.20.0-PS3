#include <sys/netcalls.h>
#include <errno.h>

const char * inet_ntop(int af, const void* src, char* dst, socklen_t size)
{
    if(__netcalls.inet_ntop_r)
        return __netcalls.inet_ntop_r(af, src, dst, size);

    errno = ENOSYS;
    return NULL;
}