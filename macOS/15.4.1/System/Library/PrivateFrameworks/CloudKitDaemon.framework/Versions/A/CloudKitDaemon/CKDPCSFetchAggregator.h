@class CKCoalescer, NSOperationQueue, CKDContainer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CKDPCSFetchAggregator : NSObject

@property (weak, nonatomic) CKDContainer *container;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *opQueue;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSMutableArray *queuedFetches;
@property (retain, nonatomic) NSMutableArray *runningFetches;
@property (retain, nonatomic) CKCoalescer *fetchCoalescer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic) BOOL skipQueuedFetchCycleDetection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (id)initWithContainer:(id)a0;
- (void)_lockedFetchesAreReady;
- (id)_lockedGetQueuedFetchForOperation:(id)a0 ofClass:(Class)a1;
- (void)_lockedRescheduleFetchTimer;
- (void)_lockedTearDownFetchTimer;
- (BOOL)fetchRequestForExistingOperation:(id)a0 isDependentOnOperation:(id)a1;
- (void)requestFetchOfRecordWithID:(id)a0 forOperation:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)requestFetchOfShareWithID:(id)a0 forOperation:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)requestFetchOfZoneWithID:(id)a0 forOperation:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
