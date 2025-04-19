@class NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface AXFMarshal : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *_group;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_syncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_widthQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *_width;
@property (retain, nonatomic) NSMutableArray *_results;

- (id)init;
- (void).cxx_destruct;
- (void)addExecutionBlock:(id /* block */)a0;
- (void)notify:(id /* block */)a0;
- (id)waitForResults:(long long)a0;

@end
