@class NSXPCListenerEndpoint;

@interface LNAppConnectionListener : LNConnectionListener

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

+ (id)sharedListener;

- (void)handleAppleEvent:(id)a0 withReplyEvent:(id)a1;

@end
