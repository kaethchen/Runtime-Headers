@class NTPBScoreProfileDebug, NSArray, NTPBCoefficients, NTPBScoringCohort, NTPBScoreProfile;

@interface FCFeedPersonalizedItemScoreProfile : NSObject

@property (nonatomic) BOOL isEvergreen;
@property (nonatomic) BOOL isCoread;
@property (nonatomic) double featureCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) double rawUserFeedbackScore;
@property (nonatomic) double rawPersonalizationScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double conversionMultiplier;
@property (nonatomic) double dampenedStaticMultiplier;
@property (nonatomic) double staticMultiplier;
@property (nonatomic) double qualitativeMultiplier;
@property (nonatomic) double embeddingScore;
@property (nonatomic) double tabiScore;
@property (nonatomic) double publisherDampener;
@property (nonatomic) double publisherFavorability;
@property (readonly, nonatomic) double sortingScore;
@property (nonatomic) BOOL hasShadowScores;
@property (nonatomic) float shadowAgedPersonalizationScore;
@property (nonatomic) float shadowTabiScore;
@property (nonatomic) unsigned long long scoringVersion;
@property (nonatomic) double multiplier;
@property (nonatomic) double serverScoreDemocratizationFactor;
@property (nonatomic) double nicheContentMultiplier;
@property (nonatomic) double contentTriggerDampener;
@property (retain, nonatomic) NSArray *cohortMemberships;
@property (retain, nonatomic) NTPBCoefficients *coefficients;
@property (retain, nonatomic) NTPBScoringCohort *globalCohort;
@property (retain, nonatomic) NTPBScoreProfile *pbScoreProfile;
@property (retain, nonatomic) NTPBScoreProfileDebug *debugFields;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithPBScoreProfile:(id)a0;

@end
