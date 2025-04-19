@class NSDate;

@interface RTAuthorizedLocationQueryMetrics : NSObject

@property float daemonResponseLatencyMs;
@property BOOL responseValue;
@property float userTimeOffsetHours;
@property int loiFamiliarityRank;
@property int numFamiliarLois;
@property float visitDwellMinutes;
@property float normalizedDistanceToCentroid;
@property int rejectionReasonCode;
@property BOOL isHistoricallyALowDiversityLocation;
@property int technologyAvailability;
@property int locationAgeMinutes;
@property int historicalRejectionReasonCode;
@property float historicalRejectionSpeedMps;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

- (id)init;
- (void).cxx_destruct;
- (void)startTimer;
- (void)endTimer;
- (void)setMotionSpeedLimitRejectionCodeFromLookbackHours:(double)a0;

@end
