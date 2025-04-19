@class NSArray, NSString, WBSFrequentlyVisitedSitesBannedURLStore, WBSHistory;

@interface WBSFrequentlyVisitedSitesController : NSObject {
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    WBSHistory *_history;
    double _timeOfLastFrequentlyVisitedSitesComputation;
}

@property (readonly, nonatomic) NSArray *frequentlyVisitedSites;
@property (readonly, nonatomic) NSString *profileIdentifier;

+ (id)descriptionOfFrequentlyVisitedSiteFromHistoryItem:(id)a0;
+ (id)newRadarProblemURLWithInformationForProblematicFrequentlyVisitedSite:(id)a0 informationForOtherFrequentlyVisitedSites:(id)a1 inProfile:(id)a2;
+ (float)scoreForHistoryItem:(id)a0 atTime:(double)a1 withMinimumVisitCount:(unsigned long long)a2;
+ (id)descriptionOfFrequentlyVisitedSiteWithVisitCount:(int)a0 visitCountScore:(int)a1 lastVisitedDate:(id)a2 score:(double)a3;
+ (float)scoreWithHistoryItemForVisitScoring:(id)a0 historyItemForURLScoring:(id)a1 atTime:(double)a2 withMinimumVisitCount:(unsigned long long)a3;

- (void).cxx_destruct;
- (void)sendAnalyticsIfNecessaryForURLNavigation:(id)a0;
- (id)_canonicalizedFavoritesURLStringSet;
- (id)_computeFrequentlyVisitedSiteCandidates;
- (void)_frequentlyVisitedSitesDidLoadHistory;
- (id)_historyItemForFrequentlyVisitedItem:(id)a0;
- (double)_minimumTimeIntervalBetweenFrequentlyVisitedSiteComputations;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (void)_saveFrequentlyVisitedSites:(id)a0 completionHandler:(id /* block */)a1;
- (float)_scoreForHistoryItem:(id)a0;
- (void)_updateFrequentlyVisitedSitesWithCandidates:(id)a0;
- (void)clearFrequentlyVisitedSites;
- (id)initWithHistory:(id)a0 bannedURLStore:(id)a1 profileIdentifier:(id)a2;
- (BOOL)recomputeFrequentlyVisitedSitesIfNecessary;

@end
