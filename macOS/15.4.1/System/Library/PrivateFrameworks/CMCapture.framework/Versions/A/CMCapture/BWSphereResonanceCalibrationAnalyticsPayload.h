@class NSString;

@interface BWSphereResonanceCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) long long magneticFieldMagnitude;
@property (copy, nonatomic) NSString *portType;
@property (nonatomic) unsigned int calibrationStatus;
@property (nonatomic) int sphereXAxisResonantFrequency;
@property (nonatomic) int sphereYAxisResonantFrequency;
@property (nonatomic) int deltaSphereXAxisResonantFrequency;
@property (nonatomic) int deltaSphereYAxisResonantFrequency;
@property (nonatomic) int sphereXAxisDampingCoefficient;
@property (nonatomic) int sphereYAxisDampingCoefficient;
@property (nonatomic) int deltaSphereXAxisDampingCoefficient;
@property (nonatomic) int deltaSphereYAxisDampingCoefficient;
@property (nonatomic) int sphereXAxisLoopGain;
@property (nonatomic) int sphereYAxisLoopGain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
