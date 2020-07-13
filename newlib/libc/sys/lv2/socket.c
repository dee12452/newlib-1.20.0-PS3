#include <sys/netcalls.h>
#include <errno.h>

int accept(int socket, struct sockaddr* address, socklen_t* address_len)
{
    if(__netcalls.accept_r)
        return __netcalls.accept_r(socket, address, address_len);
    
    errno = ENOSYS;
    return -1;
}

int bind(int socket, const struct sockaddr* address, socklen_t address_len)
{
    if(__netcalls.bind_r)
        return __netcalls.bind_r(socket, address, address_len);
    
    errno = ENOSYS;
    return -1;
}

int connect(int socket, const struct sockaddr* address, socklen_t address_len)
{
    if(__netcalls.connect_r)
        return __netcalls.connect_r(socket, address, address_len);
    
    errno = ENOSYS;
    return -1;
}

int getpeername(int socket, struct sockaddr* address, socklen_t* address_len)
{
    if(__netcalls.getpeername_r)
        return __netcalls.getpeername_r(socket, address, address_len);
    
    errno = ENOSYS;
    return -1;
}

int getsockname(int socket, struct sockaddr* address, socklen_t* address_len)
{
    if(__netcalls.getsockname_r)
        return __netcalls.getsockname_r(socket, address, address_len);
    
    errno = ENOSYS;
    return -1;
}

int getsockopt(int socket, int level, int option_name, void* option_value,socklen_t* option_len)
{
    if(__netcalls.getsockopt_r)
        return __netcalls.getsockopt_r(socket, level, option_name, option_value, option_len);
    
    errno = ENOSYS;
    return -1;
}

int listen(int socket, int backlog)
{
    if(__netcalls.listen_r)
        return __netcalls.listen_r(socket, backlog);
    
    errno = ENOSYS;
    return -1;
}

ssize_t recv(int socket, void* buffer, size_t length, int flags)
{
    if(__netcalls.recv_r)
        return __netcalls.recv_r(socket, buffer, length, flags);
    
    errno = ENOSYS;
    return (ssize_t) -1;
}

ssize_t recvfrom(int socket, void* buffer, size_t length, int flags,struct sockaddr* from, socklen_t* fromlen)
{
    if(__netcalls.recvfrom_r)
        return __netcalls.recvfrom_r(socket, buffer, length, flags, from, fromlen);
    
    errno = ENOSYS;
    return (ssize_t) -1;
}

ssize_t recvmsg(int socket, struct msghdr* message, int flags)
{
    if(__netcalls.recvmsg_r)
        return __netcalls.recvmsg_r(socket, message, flags);
    
    errno = ENOSYS;
    return (ssize_t) -1;
}

ssize_t send(int socket, const void* message, size_t length, int flags)
{
    if(__netcalls.send_r)
        return __netcalls.send_r(socket, message, length, flags);
    
    errno = ENOSYS;
    return (ssize_t) -1;
}

ssize_t sendto(int socket, const void* message, size_t length, int flags,const struct sockaddr* dest_addr, socklen_t dest_len)
{
    if(__netcalls.sendto_r)
        return __netcalls.sendto_r(socket, message, length, flags, dest_addr, dest_len);
    
    errno = ENOSYS;
    return (ssize_t) -1;
}

ssize_t sendmsg(int socket, const struct msghdr* message, int flags)
{
    if(__netcalls.sendmsg_r)
        return __netcalls.sendmsg_r(socket, message, flags);
    
    errno = ENOSYS;
    return (ssize_t) -1;
}

int setsockopt(int socket, int level, int option_name, const void* option_value,socklen_t option_len)
{
    if(__netcalls.setsockopt_r)
        return __netcalls.setsockopt_r(socket, level, option_name, option_value, option_len);
    
    errno = ENOSYS;
    return -1;
}

int shutdown(int socket, int how)
{
    if(__netcalls.shutdown_r)
        return __netcalls.shutdown_r(socket, how);
    
    errno = ENOSYS;
    return -1;
}

int socket(int domain, int type, int protocol)
{
    if(__netcalls.socket_r)
        return __netcalls.socket_r(domain, type, protocol);
    
    errno = ENOSYS;
    return -1;
}

int socketpair(int domain, int type, int protocol, int socket_vector[2])
{
    if(__netcalls.socketpair_r)
        return __netcalls.socketpair_r(domain, type, protocol, socket_vector);
    
    errno = ENOSYS;
    return -1;
}