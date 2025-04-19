@class NSDate, NSString, NSError, FPDExtension, NSObject, FPDSharedSystemScheduler, FPDDomainIndexerState, FPDDomain;
@protocol OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue, FPDDomainIndexerDelegate;

@interface FPDDomainIndexer : NSObject <FPDSharedSystemSchedulerWatcher> {
    NSString *_providerDomainID;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_group> *_stableGroup;
    BOOL _isIndexing;
    BOOL _enabled;
    BOOL _invalidated;
    BOOL _isStarted;
    BOOL _clearNeedsIndexing;
    unsigned long long _batchIndexedCount;
    unsigned long long _batchIndexedCountSinceLastIndexing;
    unsigned long long _consecutiveBatchErrorCount;
    NSDate *_lastIndexingStartDate;
    NSError *_lastError;
    NSString *_spotlightDomainIdentifier;
    BOOL _registeredWithScheduler;
}

@property (class, readonly, nonatomic) FPDSharedSystemScheduler *indexingScheduler;

@property (weak, nonatomic) FPDExtension *extension;
@property (retain, nonatomic) FPDDomainIndexerState *state;
@property (readonly, nonatomic) BOOL needsAuthentication;
@property (readonly, nonatomic) BOOL learnNeedsAuthenticationFromBatchError;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (weak, nonatomic) id<FPDDomainIndexerDelegate> delegate;
@property (nonatomic) unsigned long long maxRetryDelayInSec;
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) FPDDomain *domain;
@property (readonly, nonatomic) NSString *watcherLabel;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)_cancelTimer;
- (void)dumpStateTo:(id)a0;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (void)setIndexingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)needsIndexing;
- (void)__indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)a0;
- (void)_handleOneBatchCompletionWithError:(id)a0 hasMoreChanges:(BOOL)a1;
- (void)_indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)a0;
- (void)_signalChangesWithCompletionHandler:(id /* block */)a0;
- (void)_unregisterFromScheduler;
- (void)clearNeedsAuth;
- (void)dropIndexForReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)dumpStateTo:(id)a0 withName:(id)a1;
- (id)initWithExtension:(id)a0 domain:(id)a1 enabled:(BOOL)a2;
- (id)localSpotlightIndexer;
- (void)setNeedsAuth;
- (void)sharedSchedulerCanRun:(id)a0;
- (void)sharedSchedulerIsDeferred:(id)a0;
- (void)signalChangesWithCompletionHandler:(id /* block */)a0;
- (void)signalNeedsReindexFromScratchWithDropReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)signalNeedsReindexItemsWithIdentifiers:(id)a0 indexReason:(long long)a1 completionHandler:(id /* block */)a2;

@end
