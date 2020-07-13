#ifndef __NETCALLS_H__
#define __NETCALLS_H__

#include <sys/socket.h>
#include <sys/poll.h>
#include <sys/select.h>
#include <netdb.h>
#include <arpa/inet.h>

struct __netcalls_t {
    int (*accept_r)(int socket, struct sockaddr* address, socklen_t* address_len);
    int (*bind_r)(int socket, const struct sockaddr* address, socklen_t address_len);
    int (*connect_r)(int socket, const struct sockaddr* address, socklen_t address_len);
    int (*getpeername_r)(int socket, struct sockaddr* address, socklen_t* address_len);
    int (*getsockname_r)(int socket, struct sockaddr* address, socklen_t* address_len);
    int (*getsockopt_r)(int socket, int level, int option_name, void* option_value,socklen_t* option_len);
    int (*listen_r)(int socket, int backlog);
    ssize_t (*recv_r)(int socket, void* buffer, size_t length, int flags);
    ssize_t (*recvfrom_r)(int socket, void* buffer, size_t length, int flags,struct sockaddr* from, socklen_t* fromlen);
    ssize_t (*recvmsg_r)(int socket, struct msghdr* message, int flags);
    ssize_t (*send_r)(int socket, const void* message, size_t length, int flags);
    ssize_t (*sendto_r)(int socket, const void* message, size_t length, int flags,const struct sockaddr* dest_addr, socklen_t dest_len);
    ssize_t (*sendmsg_r)(int socket, const struct msghdr* message, int flags);
    int (*setsockopt_r)(int socket, int level, int option_name, const void* option_value,socklen_t option_len);
    int (*shutdown_r)(int socket, int how);
    int (*socket_r)(int domain, int type, int protocol);
    int (*socketpair_r)(int domain, int type, int protocol, int socket_vector[2]);
    int (*poll_r)(struct pollfd fds[], nfds_t nfds, int timeout);
    int (*select_r)(int nfds, fd_set *readfds, fd_set *writefds, fd_set *errorfds, struct timeval *timeout);

    struct hostent * (*gethostbyaddr_r)(const char *addr, socklen_t len, int type);
    struct hostent * (*gethostbyname_r)(const char *name);
    struct servent * (*getservbyport_r)(int port, const char *proto);

    in_addr_t (*inet_addr_r)(const char* cp);
    int (*inet_aton_r)(const char* cp, struct in_addr* inp);
    in_addr_t (*inet_lnaof_r)(struct in_addr in);
    struct in_addr (*inet_makeaddr_r)(in_addr_t net, in_addr_t lna);
    in_addr_t (*inet_netof_r)(struct in_addr in);
    in_addr_t (*inet_network_r)(const char* cp);
    char * (*inet_ntoa_r)(struct in_addr in);
    const char * (*inet_ntop_r)(int af, const void* src, char* dst, socklen_t size);
    int (*inet_pton_r)(int af, const char* src, void* dst);
};

extern struct __netcalls_t __netcalls;

#endif