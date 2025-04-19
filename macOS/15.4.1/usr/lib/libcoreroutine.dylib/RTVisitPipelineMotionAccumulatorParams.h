@interface RTVisitPipelineMotionAccumulatorParams : NSObject

@property (nonatomic) double maxTimeToTrim;
@property (nonatomic) double motionLookWindowOutsideVisit;
@property (nonatomic) double minMotionDurationAtHighConfidence;
@property (nonatomic) double minMotionDurationAtMediumConfidence;
@property (nonatomic) double maxAllowedGapBetweenActiveMotionStates;

+ (double)loadParameterFromDefaults:(id)a0 parameterName:(id)a1 defaultValue:(double)a2;

- (id)init;
- (id)initWithDefaultsManager:(id)a0;

@end
