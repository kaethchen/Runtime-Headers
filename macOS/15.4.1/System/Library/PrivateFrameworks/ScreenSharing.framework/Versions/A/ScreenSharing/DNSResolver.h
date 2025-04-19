@interface DNSResolver : NSObject

+ (void)initialize;
+ (id)sharedResolver;

- (void)resolveAddress:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a0 observer:(id)a1 userInfo:(id)a2;
- (void)resolveCore:(struct __CFHost { } *)a0 withObserver:(id)a1 withUserInfo:(id)a2 withHostInfoType:(int)a3;
- (void)resolveHostname:(id)a0 observer:(id)a1 userInfo:(id)a2;

@end
