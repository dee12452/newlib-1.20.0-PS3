#include <sys/netcalls.h>
#include <errno.h>

int poll(struct pollfd fds[], nfds_t nfds, int timeout)
{
    if(__netcalls.poll_r)
        return __netcalls.poll_r(fds, nfds, timeout);
    
    errno = ENOSYS;
    return -1;
}