@class NSObject;
@protocol OS_os_log;

@interface _OSBatteryDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)predictor;
+ (id)behaviorDescription:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)historicalClassification;
- (void)logCompletion:(id)a0;
- (id)drainPerDayFromDate:(id)a0 forNumberOfDays:(int)a1;

@end
