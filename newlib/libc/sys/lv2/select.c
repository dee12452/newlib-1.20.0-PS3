#include <sys/netcalls.h>
#include <errno.h>

int select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *errorfds, struct timeval *timeout)
{
    if(__netcalls.select_r)
        return __netcalls.select_r(nfds, readfds, writefds, errorfds, timeout);
    
    errno = ENOSYS;
    return -1;
}