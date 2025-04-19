@class NSOrderedSet, NSString, NSMutableOrderedSet, NSObject, MSPCountedOrderedSet;
@protocol MSPSharedTripCapabilityFetchingQueueDelegate, OS_dispatch_queue;

@interface MSPSharedTripCapabilityFetchingQueue : NSObject {
    struct os_unfair_lock_s { unsigned int x0; } *_lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MSPCountedOrderedSet *_requestedHandles;
    NSMutableOrderedSet *_inflightHandles;
}

@property (weak, nonatomic) id<MSPSharedTripCapabilityFetchingQueueDelegate> delegate;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSOrderedSet *requestedHandles;
@property (readonly, nonatomic) NSOrderedSet *inflightHandles;
@property (readonly, nonatomic) NSOrderedSet *pendingHandles;
@property (readonly, copy, nonatomic) NSString *label;

- (id)description;
- (void).cxx_destruct;
- (id)_pendingHandles;
- (BOOL)containsHandle:(id)a0;
- (void)_markHandleInflight:(id)a0;
- (void)_markHandlesInflight:(id)a0;
- (void)_processPendingHandles;
- (void)_updateRequestedHandlesWithAdditions:(id)a0 subtractions:(id)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1 label:(id)a2;
- (void)markHandleInflight:(id)a0;
- (void)markHandlesInflight:(id)a0;
- (void)updateRequestedHandlesWithAdditions:(id)a0 subtractions:(id)a1;

@end
