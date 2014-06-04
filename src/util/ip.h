#ifndef __UTIL_IP_H__
#define __UTIL_IP_H__

#include <stdint.h>

int ip2int(char *str, uint32_t* ip);
int int2ip(uint32_t ip, char * str);

#endif
