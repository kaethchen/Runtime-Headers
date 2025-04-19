@class NSObject, NSXPCInterface;
@protocol OS_dispatch_queue, LACConcurrentIdleUIXPCHandling, LACConcurrentIdleUIHandling;

@interface LACConcurrentIdleUIListenerProvider : NSObject <LACConcurrentIdleUIListenerProviding, NSXPCListenerDelegate>

@property (class, retain, nonatomic) NSXPCInterface *interface;

@property (readonly, weak, nonatomic) id<LACConcurrentIdleUIXPCHandling, LACConcurrentIdleUIHandling> handler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;

+ (id)idleUIXPCInterface;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)anonymousListenerWithIdentifier:(id)a0;
- (id)initWithHandler:(id)a0 replyQueue:(id)a1;

@end
