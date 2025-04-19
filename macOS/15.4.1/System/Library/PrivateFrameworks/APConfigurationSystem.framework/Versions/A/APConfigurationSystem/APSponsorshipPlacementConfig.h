@class NSNumber;

@interface APSponsorshipPlacementConfig : APConfiguration

@property (readonly, nonatomic) NSNumber *sendTimeSpentMetric;
@property (readonly, nonatomic) NSNumber *timeSpentMetricTTL;
@property (readonly, nonatomic) NSNumber *isPersistenceEnabled;
@property (readonly, nonatomic) NSNumber *isUniversalLinkInNewsSupported;

+ (id)path;

@end
