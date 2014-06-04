#include "ip.h"

#include <arpa/inet.h> 

//
//
int ip2int(char* ipstr, uint32_t *ip){
    int ret;
    struct in_addr addr;

    ret = inet_pton(AF_INET, ipstr, (void *)&addr);
    if(ret <= 0){
        return -1;
    }
    *ip = *ip = ntohl(addr.s_addr);
    return 0;
}


int int2str(uint32_t ip, char *ipstr, size_t n){
    int ret;
    struct in_addr addr;

    addr.s_addr = htonl(ip); 
    if(inet_ntop(AF_INET, (void *)&addr, ipstr, n) == NULL){
        return -1;
    }
    return 0;
}
