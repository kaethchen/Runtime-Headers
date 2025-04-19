@class NSArray, NSMutableSet, _EDSearchableIndexPendingRemovals, NSMutableArray;

@interface EDSearchableIndexState : NSObject

@property (nonatomic) long long resumeCount;
@property (nonatomic) long long transaction;
@property (readonly, copy, nonatomic) NSMutableSet *removedIdentifiers;
@property (readonly, copy, nonatomic) NSMutableArray *preparingItems;
@property (readonly, copy, nonatomic) NSMutableArray *pendingItems;
@property (readonly, copy, nonatomic) NSMutableArray *preprocessingItems;
@property (readonly, copy, nonatomic) NSMutableArray *processingItems;
@property (readonly, copy, nonatomic) NSMutableSet *pendingDomainRemovals;
@property (retain, nonatomic) _EDSearchableIndexPendingRemovals *pendingIdentifierRemovals;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL needsRefresh;
@property (nonatomic) BOOL needsVerification;
@property (nonatomic) BOOL coalesceTimerFired;
@property (nonatomic) BOOL scheduledProcessing;
@property (nonatomic) BOOL scheduledRefresh;
@property (nonatomic) BOOL scheduledVerification;
@property (nonatomic) BOOL indexImmediately;
@property (nonatomic) BOOL clientStateFetched;
@property BOOL persistenceAvailable;
@property (readonly, nonatomic) unsigned long long countOfItemsInPendingQueues;
@property (readonly, copy, nonatomic) NSArray *pendingIdentifiers;
@property (readonly, nonatomic) BOOL needsToScheduleRefresh;
@property (readonly, nonatomic) BOOL needsToScheduleVerification;
@property (readonly, nonatomic) BOOL needsImmediateProcessing;
@property (readonly, nonatomic) BOOL queueContentsAllowsRefresh;

- (void).cxx_destruct;
- (long long)resume;
- (long long)suspend;
- (void)removeItemsForDomainIdentifier:(id)a0;
- (void)didCompleteBacklog;
- (void)didIndexItems:(id)a0;
- (void)didPrepareItems:(id)a0;
- (BOOL)didPreprocessItem:(id)a0;
- (void)failedToIndexItems:(id)a0;
- (long long)indexItem:(id)a0;
- (id)initWithPendingIdentifierRemovals:(id)a0;
- (id)prepareToIndexItems:(id)a0;
- (id)processBatchOfSize:(unsigned long long)a0;
- (void)removeIdentifiersFromPendingQueues:(id)a0 reasons:(id)a1;
- (id)removePendingDomainRemovals;
- (void)startReindex;

@end
