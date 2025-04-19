@interface _VZGDBDebugStubConfiguration : _VZDebugStubConfiguration

@property unsigned short port;
@property BOOL listensOnAllNetworkInterfaces;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithPort:(unsigned short)a0;
- (id)makeDebugStubForVirtualMachine:(id)a0;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)makeDebugStubForCoprocessor;

@end
