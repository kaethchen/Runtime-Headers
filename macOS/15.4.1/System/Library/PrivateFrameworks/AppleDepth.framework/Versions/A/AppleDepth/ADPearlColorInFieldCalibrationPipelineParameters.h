@interface ADPearlColorInFieldCalibrationPipelineParameters : ADPipelineParameters

@property (readonly, nonatomic) float colorCameraNominalEfl;
@property (readonly, nonatomic) float maxStdForValidResult;
@property (readonly, nonatomic) float coeffX;
@property (readonly, nonatomic) float coeffY;
@property (readonly, nonatomic) float coeffZ;
@property (nonatomic) unsigned int featuresVectorAggregationSize;

- (id)init;
- (float)getMaxStdForValidResultForFlow:(int)a0;
- (struct DefaultsForFlow { float x0; } *)getDefaultsForFlow:(int)a0;
- (id)initWithDeviceName:(id)a0;

@end
