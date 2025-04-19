@class OS_dispatch_queue;

@interface AAAnalyticsActor : NSObject

@property (class, nonatomic, readonly) OS_dispatch_queue *underlyingQueue;

- (id)init;

@end
