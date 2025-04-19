@class NSString, NSMeasurement, NSDateInterval;

@interface HAWristTemperatureSession : NSObject

@property (readonly, nonatomic) NSDateInterval *sessionInterval;
@property (readonly, nonatomic) NSString *algorithmVersion;
@property (readonly, nonatomic) float a0CorrectionCoefficient;
@property (readonly, nonatomic) float c0CorrectionCoefficient;
@property (readonly, nonatomic) NSMeasurement *meanQuiescentPower;
@property (readonly, nonatomic) NSMeasurement *stdDevQuiescentPower;
@property (readonly, nonatomic, getter=isPublishable) BOOL publishable;

- (void)dealloc;

@end
