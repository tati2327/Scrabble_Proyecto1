//
// Created by tati2327 on 17/03/19.
//

#ifndef SCRABBLE_SOCKETADDR_IN_H
#define SCRABBLE_SOCKETADDR_IN_H

//#include <netinet/in.h>
#include <sys/types.h>

struct in_addr {
    unsigned long s_addr;
};

struct sockAddr_in{

    short   sin_family; /* must be AF_INET */
    u_short sin_port;
    struct  in_addr sin_addr;
    char    sin_zero[8]; /* Not used, must be zero */
};

#endif //SCRABBLE_SOCKETADDR_IN_H
