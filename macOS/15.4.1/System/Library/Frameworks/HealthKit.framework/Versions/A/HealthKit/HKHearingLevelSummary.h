@class HKHearingLevelMetrics;

@interface HKHearingLevelSummary : NSObject

@property (readonly, copy, nonatomic) HKHearingLevelMetrics *overallMetrics;
@property (readonly, copy, nonatomic) HKHearingLevelMetrics *leftEarMetrics;
@property (readonly, copy, nonatomic) HKHearingLevelMetrics *rightEarMetrics;

+ (id)summaryForAudiogramSample:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLeftEarMetrics:(id)a0 rightEarMetrics:(id)a1;

@end
