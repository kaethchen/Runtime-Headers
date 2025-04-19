@class NSObject;
@protocol ABWorkQueueDelegate, CNScheduler;

@interface ABWorkQueue : NSOperationQueue

@property (readonly, nonatomic) id<CNScheduler> delegateScheduler;
@property (retain) NSObject<ABWorkQueueDelegate> *delegate;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)operationCountDidChange:(unsigned long long)a0;

@end
