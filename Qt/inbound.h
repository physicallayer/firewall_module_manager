#pragma once
#ifndef INBOUND_H
#define INBOUND_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Inbound
{
private:
    char* interface;
    char* protocol;
    char* src_ip;
    char* src_port;
    char* dst_ip;
    char* dst_port;
    char* policy;

public:
    Inbound(char* i, char* p, char* sip, char* sport, char* dip, char* dport, char* pol);
};

#endif // INBOUND_H
