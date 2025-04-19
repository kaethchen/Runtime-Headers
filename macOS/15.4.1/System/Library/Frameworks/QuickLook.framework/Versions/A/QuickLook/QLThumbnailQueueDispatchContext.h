@class NSObject;
@protocol OS_dispatch_queue;

@interface QLThumbnailQueueDispatchContext : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ completion;

- (void).cxx_destruct;

@end
