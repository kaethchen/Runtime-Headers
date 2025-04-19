@class NSObject, IASThreadSafeEvent, NSLock, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface IASStreamFIFOQueue : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *fifoSemaphore;
@property (retain) NSLock *queueLock;
@property (retain) NSMutableArray *queue;
@property (retain) IASThreadSafeEvent *hasDataEvent;

- (void).cxx_destruct;
- (void)push:(id)a0;
- (id)pop;
- (id)initWithDepth:(unsigned long long)a0;

@end
