#include "outbound.h"

Outbound::Outbound(char* i, char* p, char* sip, char* sport, char* dip, char* dport, char* pol)
{
    this->interface = i;
    this->protocol = p;
    this->src_ip = sip;
    this->src_ip = sport;
    this->dst_ip = dip;
    this->dst_ip = dport;
    this->policy = pol;
}
