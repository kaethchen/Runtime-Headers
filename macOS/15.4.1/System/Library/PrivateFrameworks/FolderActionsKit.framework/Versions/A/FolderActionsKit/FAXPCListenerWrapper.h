@class NSXPCListener, FAXPCDelegate, NSXPCInterface;

@interface FAXPCListenerWrapper : NSObject

@property (retain) NSXPCListener *listener;
@property (retain) FAXPCDelegate *delegate;
@property (readonly, nonatomic) NSXPCInterface *exportedInterface;

+ (id)wrapperForMachService:(id)a0 exportedProtocol:(id)a1 exportedObject:(id)a2;

- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)suspend;

@end
