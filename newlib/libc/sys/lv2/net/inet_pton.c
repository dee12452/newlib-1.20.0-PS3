#include <sys/netcalls.h>
#include <errno.h>

int inet_pton(int af, const char* src, void* dst)
{
    if(__netcalls.inet_pton_r)
        return __netcalls.inet_pton_r(af, src, dst);

    errno = ENOSYS;
    return -1;
}