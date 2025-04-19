@class _PASCFBurstTrie;

@interface ATXGlobalAppScorePredictor : NSObject {
    _PASCFBurstTrie *_index;
    _PASCFBurstTrie *_signalsTrie;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)globalPopularitiesForBundleIds:(id)a0 atTimeOfDayIndex:(int)a1 atDayOfWeekIndex:(int)a2 atLocationIndex:(int)a3;
- (id)globalPopularityForBundleIdsGivenTimeDayAndLocation:(id)a0 context:(id)a1;

@end
