@class NSString;

@interface ATXNotificationResolutionByPercentage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) double percentageForOneMinuteDuration;
@property (readonly, nonatomic) double percentageForTwoMinutesDuration;
@property (readonly, nonatomic) double percentageForFiveMinutesDuration;
@property (readonly, nonatomic) double percentageForTenMinutesDuration;
@property (readonly, nonatomic) double percentageForTwentyMinutesDuration;
@property (readonly, nonatomic) double percentageForThirtyMinutesDuration;
@property (readonly, nonatomic) double percentageForSixtyMinutesDuration;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 percentageForOneMinuteDuration:(double)a1 percentageForTwoMinutesDuration:(double)a2 percentageForFiveMinutesDuration:(double)a3 percentageForTenMinutesDuration:(double)a4 percentageForTwentyMinutesDuration:(double)a5 percentageForThirtyMinutesDuration:(double)a6 percentageForSixtyMinutesDuration:(double)a7;

@end
