#include <pcap.h>
#include "headers.h"
#include <list>

#define LIST_SIZE 10;

struct packet
{
	struct ethernet_hdr eth;
	struct ip_hdr ip;
};


int main(int argc, char* argv[])
{
	int i = 0 ;
	bool flag = false;
	list<packet> list(11);
	list<packet>::iterator iter;
	struct packet tmp;

	struct pcap_pkthdr* header;
	const u_char* packet;
	char *dev;
	char errbuf[PCAP_ERRBUF_SIZE];
	pcap_t* handle = pcap_open_live(dev, BUFSIZ, 1, 1000, errbuf);

	if(!handle)
	{
		fprintf(stderr, "[-] couldn't open device %s: %s\n", dev, errbuf);
		return -1;
	}

	while(true)
	{
		res = pcap_next_ex(handle, &header, &packet);
		if(res == 0)
			continue;
		if(res == -1 || res == -2)
			break;

		struct ethernet_hdr* eth = (struct ethernet_hdr*)malloc(14);
		eth = (struct ethernet_hdr*)packet;

		if(eth -> ether_type == 0x0080)
		{
			struct ip_hdr ip = (struct ip_hdr*)malloc(20);
			ip = (struct ip_hdr*)(packet + 14);

			if(ip -> protocol == 0x06 || ip -> protocol == 0x11)
			{
				flag = true;
				memcpy(tmp.eth, eth, 14);
				memcpy(tmp.ip, ip, 20);
				if(list.size() == 10)
					list.erase(list.begin());
				list.push_back(tmp);
			}
		}

		if(flag)
		{
			int count = 0;
			for(iter = list.begin(); iter != list.end(); iter++)
			{
				if(tmp.ip.S_ip == *iter -> ip -> S_ip)
					count ++;
			}
			if(count > 4)//can change value;
			{
				//input rule;
			}



		}
	}

	return 0;
}