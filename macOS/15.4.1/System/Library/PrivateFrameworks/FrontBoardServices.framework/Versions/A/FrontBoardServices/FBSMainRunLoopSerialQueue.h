@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FBSMainRunLoopSerialQueue : FBSSerialQueue {
    NSArray *_modes;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFRunLoopSource { } *_source;
    NSMutableArray *_queue_blocks;
    BOOL _main_callingOut;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)assertBarrierOnQueue;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (void)performAsync:(id /* block */)a0;
- (void)performAsync:(id /* block */)a0 withHandoff:(id)a1;

@end
