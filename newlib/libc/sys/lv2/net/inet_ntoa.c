#include <sys/netcalls.h>
#include <errno.h>

char * inet_ntoa(struct in_addr in)
{
    if(__netcalls.inet_ntoa_r)
        return __netcalls.inet_ntoa_r(in);

    errno = ENOSYS;
    return NULL;
}