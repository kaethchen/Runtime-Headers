@class NSTimer, NSArray, WBSCoalescedAsynchronousWriter, NSMutableDictionary, History, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TopSitesController : NSObject {
    unsigned long long _initializationLevel;
    NSMutableArray *_blocksToPerformWhenInitialized;
    WBSCoalescedAsynchronousWriter *_saveToDiskWriter;
    NSTimer *_recomputeTimer;
    BOOL _didComputeFrequentlyVisitedSites;
    NSMutableArray *_displayedSites;
    NSMutableSet *_bannedURLStrings;
    NSMutableSet *_pinnedURLStrings;
    NSArray *_frequentlyVisitedNonBannedSites;
    NSArray *_demoSites;
    NSMutableArray *_undisplayedPinnedSites;
    NSMutableDictionary *_sitesByURL;
    NSMutableDictionary *_sitesByCanonicalURL;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}

@property (class, readonly, nonatomic) TopSitesController *defaultProfileTopSitesController;

@property (readonly, nonatomic) History *history;
@property (readonly, copy, nonatomic) NSArray *topSites;
@property (readonly, copy, nonatomic) NSArray *frequentlyVisitedNonBannedSites;
@property (readonly, nonatomic, getter=isWarmingUp) BOOL warmingUp;

+ (id)_dictionaryRepresentationForFrequentlyVisitedSites:(id)a0;
+ (id)_dictionaryRepresentationForTopSites:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)reset;
- (void)warmUp;
- (id)_dictionaryRepresentation;
- (id)initWithHistory:(id)a0;
- (void)_saveToDiskSoon;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)_historyWasCleared:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)cancelPendingWriteSynchronously;
- (id)_findNewTopSite;
- (void)_warmUpIfNeeded;
- (BOOL)_loadBannedURLStringsFromArray:(id)a0;
- (id)_URLOfTopSitesFile;
- (void)_appendExistingTopSitesTo:(id)a0 numberOfTopSitesToCompute:(unsigned long long)a1 updatingCandidateHostNames:(id)a2;
- (void)_appendHomePageAndBuiltInBookmarksToSites:(id)a0 andCandidateHostNames:(id)a1 numberOfSitesToCompute:(unsigned long long)a2;
- (void)_buildDisplayedSitesInTopSites:(id)a0 preserveExistingRanks:(BOOL)a1;
- (BOOL)_candidate:(id)a0 isViableComputedTopSiteGivenDisplayedSiteURLStrings:(id)a1 updatingCandidateHostNames:(id)a2;
- (BOOL)_candidateURLString:(id)a0 isViableComputedTopSiteGivenBannedURLStrings:(id)a1 pinnedURLStrings:(id)a2 updatingCandidateHostNames:(id)a3;
- (BOOL)_candidateURLString:(id)a0 isViableDisplayedTopSiteGivenBannedURLStrings:(id)a1 pinnedURLStrings:(id)a2;
- (BOOL)_candidateURLStringIsViableComputedTopSite:(id)a0 updatingCandidateHostNames:(id)a1;
- (id)_computeTopSiteCandidates;
- (void)_computeTopSiteCandidatesWithCompletionHandler:(id /* block */)a0;
- (id)_computeTopSitesWithPaddingBehavior:(unsigned long long)a0;
- (void)_historyItemsWereLoaded:(id)a0;
- (void)_loadDemoSitesFromArray:(id)a0;
- (BOOL)_loadDisplayedSitesFromArray:(id)a0;
- (void)_loadFromDictionaryRepresentation:(id)a0;
- (void)_loadFromDiskWithCompletionHandler:(id /* block */)a0;
- (void)_performBlockOnceInitialized:(id /* block */)a0;
- (void)_performDisplayedSitesUpdateInBlock:(id /* block */)a0;
- (void)_rebuildDisplayedSitesExcludingSite:(id)a0;
- (void)_recomputeSitesWithPaddingBehavior:(unsigned long long)a0;
- (void)_removeBannedURLStringsAndRecomputeTopSitesAfterDelay:(id)a0;
- (void)_replaceBannedSite:(id)a0;
- (BOOL)_shouldRecomputeFrequentlyVisitedAfterRemovingIndividualHistoryItems:(id)a0;
- (void)_snapshotCacheWillPurge:(id)a0;
- (void)_updateFrequentlyVisitedNonBannedSites;
- (void)_updateFrequentlyVisitedNonBannedSitesWithCompletionHandler:(id /* block */)a0;
- (void)_updateURLMaps;
- (void)ban:(id)a0;
- (BOOL)isSiteBannedWithURL:(id)a0;
- (void)openNewRadarProblemForFrequentlyVisitedSite:(id)a0;
- (void)recomputeSites;
- (void)removeAllBannedURLStringsAndRecomputeTopSitesAfterDelay;
- (void)removeURLStringIfNotPinned:(id)a0;
- (id)topSiteForURLString:(id)a0;
- (void)updateTitleOfTopSiteWithURLString:(id)a0 newTitle:(id)a1;

@end
