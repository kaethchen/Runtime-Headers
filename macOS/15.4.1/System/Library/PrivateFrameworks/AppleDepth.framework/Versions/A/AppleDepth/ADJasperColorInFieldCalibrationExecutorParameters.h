@class ADJasperColorInFieldCalibrationPipelineParameters;

@interface ADJasperColorInFieldCalibrationExecutorParameters : ADExecutorParameters

@property (nonatomic) BOOL reportTelemetry;
@property (readonly, retain, nonatomic) ADJasperColorInFieldCalibrationPipelineParameters *pipelineParameters;

- (id)init;
- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (id)initWithPipelineParameters:(id)a0;

@end
