@class NSString, ADStreamSync, ADPearlColorInFieldCalibrationExecutor, ADPearlColorInFieldCalibrationResult, ADPearlColorInFieldCalibrationInterSessionData;

@interface ADPearlColorInfieldCalibrationFlow : ADFlow <ADFlowColorConsumer, ADFlowPearlConsumer> {
    ADStreamSync *_streamSync;
    ADPearlColorInFieldCalibrationInterSessionData *_intersessionData;
    NSString *_transformKey;
}

@property (readonly, retain, nonatomic) ADPearlColorInFieldCalibrationExecutor *executor;
@property (readonly, retain, nonatomic) ADPearlColorInFieldCalibrationResult *lastExecutionResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleMatch:(id)a0;
- (id)initWithExecutor:(id)a0 andIntersessionData:(id)a1;
- (void)pushColor:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 metadata:(id)a3 timestamp:(double)a4;
- (void)pushPearlDepth:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 depthCalibration:(id)a2 irToDepthTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 timestamp:(double)a4;

@end
