@class PLTimedDispatchGroupEnterSession, PLResult, NSProgress, NSObject;
@protocol PLSearchIndexingIncrementalUpdateEngineDelegate, OS_dispatch_queue, OS_dispatch_group;

@interface PLSearchIndexingIncrementalUpdateEngine : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_isRunning;
    BOOL _lock_isPausing;
    NSObject<OS_dispatch_group> *_lock_group;
    PLResult *_lock_result;
    PLTimedDispatchGroupEnterSession *_lock_donationInFlightDispatchGroupSession;
    NSProgress *_lock_donationProgress;
}

@property (readonly, weak, nonatomic) id<PLSearchIndexingIncrementalUpdateEngineDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)pause;
- (void)_donateBatch:(id)a0 library:(id)a1 completion:(id /* block */)a2;
- (void)_handleDonationCompleteWithResult:(id)a0 batch:(id)a1 library:(id)a2;
- (id)_inPerformBlock_batchFromType:(short)a0 flags:(long long)a1 library:(id)a2;
- (void)_lock_runSingleLoopOfProcessingIncrementalUpdatesWithLibrary:(id)a0;
- (void)_processIncrementalUpdatesWithLibrary:(id)a0 completion:(id /* block */)a1;
- (void)fetchRemainingWorkWithLibrary:(id)a0 completion:(id /* block */)a1;
- (void)processBatchOfJobsWithType:(short)a0 flags:(long long)a1 library:(id)a2 progress:(id)a3 completion:(id /* block */)a4;
- (void)processJobObjectIDs:(id)a0 entity:(unsigned long long)a1 library:(id)a2 completion:(id /* block */)a3;
- (void)resumeWithLibrary:(id)a0 completion:(id /* block */)a1;

@end
