@class PLTimedDispatchGroupEnterSession, NSManagedObjectID, NSMutableDictionary, PLResult, NSObject, NSProgress, PLLazyObject, PLFileBackedLogger, NSISO8601DateFormatter;
@protocol PLSearchIndexingRebuildEngineDelegate, OS_dispatch_queue, OS_dispatch_group;

@interface PLSearchIndexingRebuildEngine : NSObject {
    NSMutableDictionary *_iteratorsBySearchEntity;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _lock_currentEntity;
    NSManagedObjectID *_lock_resumeObjectID;
    BOOL _lock_isRunning;
    BOOL _lock_isPausing;
    NSObject<OS_dispatch_group> *_lock_group;
    PLResult *_lock_result;
    PLTimedDispatchGroupEnterSession *_lock_donationInFlightDispatchGroupSession;
    NSProgress *_lock_donationProgress;
    unsigned long long _lock_nonBackgroundJobWaitingClients;
    PLLazyObject *_lazyCoreAnalyticsEventManager;
    double _coreAnalyticsRebuildToken;
    PLFileBackedLogger *_logger;
    NSISO8601DateFormatter *_loggingDateFormatter;
}

@property (readonly, weak, nonatomic) id<PLSearchIndexingRebuildEngineDelegate> delegate;

+ (BOOL)hasRebuildWorkToDoForLibrary:(id)a0 identifier:(long long)a1 sceneTaxonomyDigests:(id)a2;
+ (BOOL)requiresImmediateDropIndexForLibrary:(id)a0 reasons:(unsigned long long *)a1;

- (void).cxx_destruct;
- (void)_inq_rebuildAnalyticsPauseTimer;
- (id)_resumeObjectID;
- (void)_inq_rebuildAnalyticsStartTimer;
- (void)resumeSearchIndexRebuildIfNeededForLibrary:(id)a0 calledBy:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)_currentEntity;
- (void)_handleDonationFailureForRebuildWithManagedObjects:(id)a0 entity:(unsigned long long)a1 library:(id)a2;
- (BOOL)_inq_isValidForCoreAnalyticsCaptureWithRebuildReason:(unsigned long long)a0;
- (void)_inq_rebuildAnalyticsCompletedWithResult:(id)a0;
- (BOOL)_inq_rebuildAnalyticsEventIsValid;
- (void)_inq_rebuildAnalyticsSetupAndPublishWithLibrary:(id)a0 rebuildType:(unsigned long long)a1 rebuildInitiatedBy:(id)a2 rebuildReasons:(unsigned long long)a3 spotlightReasonForReindexingAllItems:(id)a4;
- (void)_inq_rebuildAnalyticsSetupDataWithRebuildType:(unsigned long long)a0 rebuildInitiatedBy:(id)a1 rebuildReasons:(unsigned long long)a2 mediaCount:(unsigned long long)a3 uptimeSinceLastRebuild:(double)a4 spotlightReasonForReindexingAllItems:(id)a5;
- (id)_iteratorForSearchEntity:(unsigned long long)a0 library:(id)a1 resumeObjectID:(id)a2;
- (void)_lock_startPrepareAndRebuildForLibrary:(id)a0 type:(unsigned long long)a1 calledBy:(id)a2 rebuildReasons:(unsigned long long)a3 spotlightReasonForReindexingAllItems:(id)a4;
- (void)_prepareForRebuildForLibrary:(id)a0 type:(unsigned long long)a1 sceneTaxonomyDigests:(id)a2 completion:(id /* block */)a3;
- (void)_rebuildAllRemainingEntitiesForLibrary:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_rebuildManagedObjectsFromIterator:(id)a0 ofEntity:(unsigned long long)a1 queue:(id)a2 library:(id)a3 completion:(id /* block */)a4;
- (unsigned long long)_rebuildTypeForLibrary:(id)a0 entityInProgress:(unsigned long long *)a1 resumeObjectID:(id *)a2 rebuildReasons:(unsigned long long *)a3;
- (void)_startRebuildForLibrary:(id)a0;
- (id)analyticsEventManager;
- (void)fetchRemainingWorkWithLibrary:(id)a0 completion:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 provider:(id)a1;
- (void)pauseSearchIndexRebuildWithSourceName:(id)a0;

@end
