#pragma once
#ifndef OUTBOUND_H
#define OUTBOUND_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Outbound
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
    Outbound(char* i, char* p, char* sip, char* sport, char* dip, char* dport, char* pol);
};

#endif // OUTBOUND_H
