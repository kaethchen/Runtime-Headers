@interface NWStatisticsUDPSource : NWStatisticsSource {
    struct nstat_udp_descriptor { unsigned long long upid; unsigned long long eupid; unsigned long long start_timestamp; unsigned long long timestamp; struct activity_bitmap { unsigned long long start; unsigned long long bitmap[2]; } activity_bitmap; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } local; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } remote; unsigned int ifindex; unsigned int rcvbufsize; unsigned int rcvbufused; unsigned int traffic_class; unsigned int pid; char pname[64]; unsigned int epid; unsigned char uuid[16]; unsigned char euuid[16]; unsigned char vuuid[16]; unsigned char fuuid[16]; unsigned int persona_id; unsigned int uid; unsigned int ifnet_properties; unsigned char fallback_mode; unsigned char reserved[3]; } _descriptor;
    unsigned long long _eventFlags;
}

- (id)description;
- (int)handleDescriptor:(void *)a0 length:(unsigned long long)a1 events:(unsigned long long)a2;
- (id)_currentSnapshot;
- (id)initWithManager:(id)a0 local:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1 remote:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a2;

@end
