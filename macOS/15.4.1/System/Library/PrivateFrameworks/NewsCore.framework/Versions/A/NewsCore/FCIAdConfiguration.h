@class NSArray, NSDictionary, NTPBIAdConfig;

@interface FCIAdConfiguration : NSObject {
    NTPBIAdConfig *_pbConfig;
    NSDictionary *_configDict;
}

@property (readonly, nonatomic, getter=areSegmentsEnabled) BOOL segmentsEnabled;
@property (readonly, nonatomic) double segmentsThreshold;
@property (readonly, nonatomic) long long segmentsSubmissionFrequency;
@property (readonly, nonatomic) long long segmentsHistoryWindowInterval;
@property (readonly, nonatomic) long long segmentsMinimumArticleCount;
@property (readonly, nonatomic) long long segmentsMinimumEventCount;
@property (readonly, nonatomic) double segmentsMinRelativeRate;
@property (readonly, nonatomic) NSArray *iAdSegmentIDs;
@property (readonly, nonatomic) NSDictionary *adStatusConditionsByType;
@property (readonly, nonatomic) double feedNumberOfViewportsBetweenAds;
@property (readonly, nonatomic) double articleNumberOfViewportsBetweenAds;
@property (readonly, nonatomic, getter=isPreRequestPolicyValidationEnabled) BOOL preRequestPolicyValidationEnabled;
@property (readonly, nonatomic, getter=isRecipeCardTopAdPlacementEnabled) BOOL recipeCardUseTopAdPlacement;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;
- (id)initWithPBIAdConfig:(id)a0;

@end
