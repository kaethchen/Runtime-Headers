@class NSArray, NSDictionary, NSString, NSSet, NSDate, NSPredicate;

@interface _CDInteractionsStatisticsConfig : NSObject {
    double _anchorTimeStamp;
    BOOL _isWeekEndShare;
    NSDictionary *_scenesBasedFeatures;
    NSDictionary *_scenesMinimumNumberOfTags;
}

@property (retain, nonatomic) NSArray *statsToCompute;
@property (readonly, nonatomic) NSDictionary *defaultValues;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSSet *peopleInPhotoIdentifiers;
@property (retain, nonatomic) NSSet *scenesInPhotoIdentifiers;
@property (retain, nonatomic) NSString *topDomainURL;
@property (nonatomic) BOOL isFallbackFetch;
@property (readonly, nonatomic) BOOL shouldUseSuggestionEngaged;
@property (retain, nonatomic) NSArray *featureNamesToSortWith;
@property (readonly, nonatomic) double maxComputationTime;
@property (readonly, nonatomic) NSDate *anchorDate;
@property (readonly, nonatomic) NSDate *leftBoundDate;
@property (readonly, nonatomic) NSDate *rightBoundDate;
@property (nonatomic) int fetchBatchSize;
@property (nonatomic) unsigned long long fetchLimit;
@property (retain, nonatomic) NSDictionary *appToAppExtMapping;
@property (readonly, nonatomic) NSPredicate *sharingInteractionPredicate;
@property (readonly, nonatomic) NSPredicate *communicationInteractionPredicate;

- (void).cxx_destruct;
- (id)topLevelScenesFromSceneNetTags:(id)a0;
- (id)_shareSheetCommunicationInteractionsSelectionPredicateWithStartDate:(id)a0 endDate:(id)a1;
- (id)_shareSheetSharingInteractionsSelectionPredicateWithStartDate:(id)a0 endDate:(id)a1;
- (void)computeStatsForInteractionRecord:(id)a0 inInteractionsStatistics:(id)a1 chunkIndex:(int)a2;
- (id)initWithAnchorDate:(id)a0 leftBoundDate:(id)a1 rightBoundDate:(id)a2 fetchLimit:(unsigned long long)a3 maxComputationTime:(double)a4 featureNamesToSortWith:(id)a5 shouldUseSuggestionEngaged:(BOOL)a6 statsDefaultValues:(id)a7;
- (id)initWithAnchorDate:(id)a0 leftBoundDate:(id)a1 rightBoundDate:(id)a2 fetchLimit:(unsigned long long)a3 maxComputationTime:(double)a4 featureNamesToSortWith:(id)a5 shouldUseSuggestionEngaged:(BOOL)a6 statsDefaultValues:(id)a7 scenesBasedFeatures:(id)a8 scenesMinimumNumberOfTags:(id)a9;
- (id)scenesBasedFeaturesNames;
- (BOOL)shouldContinue;

@end
