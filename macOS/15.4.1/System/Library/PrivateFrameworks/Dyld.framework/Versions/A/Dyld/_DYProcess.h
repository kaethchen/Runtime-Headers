@class OS_dispatch_queue;

@interface _DYProcess : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, retain) OS_dispatch_queue *queue;

+ (id)processForCurrentTask;

- (id)init;
- (void).cxx_destruct;
- (id)registerForEvent:(unsigned int)a0 error:(id *)a1 handler:(id /* block */)a2;
- (id)getCurrentSnapshotAndReturnError:(id *)a0;
- (id)initWithTask:(unsigned int)a0 queue:(id)a1 error:(id *)a2;
- (id)registerChangeNotificationsWithError:(id *)a0 handler:(id /* block */)a1;
- (void)unregisterForEvent:(id)a0;

@end
