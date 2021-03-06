/*
 *  Template MIB group interface - ip.h
 *
 */

#ifndef _MIBGROUP_IP_H
#define _MIBGROUP_IP_H

#ifdef linux
struct ip_mib
{
 	unsigned long	IpForwarding;
 	unsigned long	IpDefaultTTL;
 	unsigned long	IpInReceives;
 	unsigned long	IpInHdrErrors;
 	unsigned long	IpInAddrErrors;
 	unsigned long	IpForwDatagrams;
 	unsigned long	IpInUnknownProtos;
 	unsigned long	IpInDiscards;
 	unsigned long	IpInDelivers;
 	unsigned long	IpOutRequests;
 	unsigned long	IpOutDiscards;
 	unsigned long	IpOutNoRoutes;
 	unsigned long	IpReasmTimeout;
 	unsigned long	IpReasmReqds;
 	unsigned long	IpReasmOKs;
 	unsigned long	IpReasmFails;
 	unsigned long	IpFragOKs;
 	unsigned long	IpFragFails;
 	unsigned long	IpFragCreates;
};
#endif

config_require(mibII/interfaces mibII/at mibII/var_route mibII/route_write)
config_arch_require(solaris2, kernel_sunos5)

#include "var_route.h"
#include "route_write.h"

extern void	init_ip (void);
extern FindVarMethod var_ip;
extern FindVarMethod var_ipAddrEntry;

#include "at.h"		/* for var_atEntry() */


#define IPFORWARDING	0
#define IPDEFAULTTTL	1
#define IPINRECEIVES	2
#define IPINHDRERRORS	3
#define IPINADDRERRORS	4
#define IPFORWDATAGRAMS 5
#define IPINUNKNOWNPROTOS 6
#define IPINDISCARDS	7
#define IPINDELIVERS	8
#define IPOUTREQUESTS	9
#define IPOUTDISCARDS	10
#define IPOUTNOROUTES	11
#define IPREASMTIMEOUT	12
#define IPREASMREQDS	13
#define IPREASMOKS	14
#define IPREASMFAILS	15
#define IPFRAGOKS	16
#define IPFRAGFAILS	17
#define IPFRAGCREATES	18
#define IPROUTEDISCARDS	19

#define IPADADDR	1
#define IPADIFINDEX	2
#define IPADNETMASK	3
#define IPADBCASTADDR	4
#define IPADREASMMAX	5

#define IPROUTEDEST	0
#define IPROUTEIFINDEX	1
#define IPROUTEMETRIC1	2
#define IPROUTEMETRIC2	3
#define IPROUTEMETRIC3	4
#define IPROUTEMETRIC4	5
#define IPROUTENEXTHOP	6
#define IPROUTETYPE	7
#define IPROUTEPROTO	8
#define IPROUTEAGE	9
#define IPROUTEMASK	10
#define IPROUTEMETRIC5	11
#define IPROUTEINFO	12

#define IPMEDIAIFINDEX		0
#define IPMEDIAPHYSADDRESS	1
#define IPMEDIANETADDRESS	2
#define IPMEDIATYPE		3

#endif /* _MIBGROUP_IP_H */
