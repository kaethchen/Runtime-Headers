@class NSString;

@interface SSUDPSocketAddress : SSAddress

@property (copy) NSString *remoteIPPort;

- (void)dealloc;
- (id)displayString;
- (id)initWithUDPSocket:(int)a0;

@end
