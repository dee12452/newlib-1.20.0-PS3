#include <sys/netcalls.h>
#include <errno.h>

int inet_aton(const char* cp, struct in_addr* inp)
{
    if(__netcalls.inet_aton_r)
        return __netcalls.inet_aton_r(cp, inp);

    errno = ENOSYS;
    return -1;
}