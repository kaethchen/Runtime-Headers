@class NSNumber, NSDictionary, NSArray;

@interface APOnDeviceAttributionConfig : APConfiguration

@property (retain, nonatomic) NSNumber *maximumTokenLifetime;
@property (retain, nonatomic) NSNumber *appOpenDelayInSeconds;
@property (retain, nonatomic) NSNumber *impressionLookback;
@property (retain, nonatomic) NSNumber *interactionLookback;
@property (retain, nonatomic) NSDictionary *allProperties;
@property (readonly, nonatomic) NSArray *installSignals;
@property (readonly, nonatomic) NSArray *signingBackoffSchedule;
@property (readonly, nonatomic) NSNumber *signingHoldTransactionLimit;
@property (readonly, nonatomic) NSArray *uploadBackoffSchedule;
@property (readonly, nonatomic) NSNumber *uploadHoldTransactionLimit;
@property (readonly, nonatomic) NSNumber *cacheSizeLimit;
@property (readonly, nonatomic) NSArray *incorporateJourneyMetrics;

+ (id)path;

- (void).cxx_destruct;

@end
