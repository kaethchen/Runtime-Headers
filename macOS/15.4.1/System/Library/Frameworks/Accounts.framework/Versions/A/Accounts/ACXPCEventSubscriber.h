@class NSObject;
@protocol OS_dispatch_queue;

@interface ACXPCEventSubscriber : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;

+ (id)sharedSubscriber;

- (id)init;
- (void).cxx_destruct;
- (void)registerAccountChangeEventHandler:(id /* block */)a0;

@end
