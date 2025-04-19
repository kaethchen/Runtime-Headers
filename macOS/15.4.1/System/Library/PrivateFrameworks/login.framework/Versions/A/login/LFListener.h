@class NSXPCListener, NSString, NSXPCListenerEndpoint, NSXPCInterface;
@protocol NSXPCListenerDelegate;

@interface LFListener : NSObject

@property (retain) NSString *serviceName;
@property (retain) NSXPCListener *listener;
@property (retain) id messageHandler;
@property (retain) NSXPCInterface *interface;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (retain) id<NSXPCListenerDelegate> listenerDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (id)initAnonymousListener;

@end
