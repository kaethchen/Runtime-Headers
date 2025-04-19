@class ADExecutorParameters, NSString, NSMutableDictionary, NSDate;
@protocol ADEspressoRunnerProtocol;

@interface ADExecutor : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _inputRoi;
    unsigned int _inputOrientation;
    unsigned long long _engineType;
    id<ADEspressoRunnerProtocol> _espressoRunner;
    unsigned long long _rotationPreference;
    long long _rotationConstant;
    NSDate *_currFrameStartTime;
    unsigned long long _framesStarted;
    unsigned long long _framesCompleted;
    double _totalFrameTime;
    NSMutableDictionary *_ownedInferenceBuffers;
}

@property (retain, nonatomic) ADExecutorParameters *executorParameters;
@property (readonly, copy, nonatomic) NSString *networkVersionString;
@property (readonly, nonatomic) unsigned long long layout;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)allocateIOBufferForEspressoDescriptor:(id)a0;
- (long long)convertIntrinsicsFrom:(struct __CVBuffer { } *)a0 cropBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 to:(struct __CVBuffer { } *)a2;
- (void)deallocInferenceBuffers;
- (BOOL)doesSupportBufferCopyPolicy:(unsigned long long)a0;
- (void)frameExecutionEnd;
- (void)frameExecutionStart;
- (id)getIntermediateWithName:(id)a0;
- (id)getIntermediates;
- (struct __CVBuffer { } *)inferencePixelBufferForDescriptor:(id)a0 inputUserBuffer:(struct __CVBuffer { } *)a1;
- (struct __CVBuffer { } *)inferencePixelBufferForDescriptor:(id)a0 outputUserBuffer:(struct __CVBuffer **)a1;
- (long long)numberOfExecutionSteps;
- (long long)preAllocateInferencePixelBufferForDescriptor:(id)a0;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 descriptorForROI:(id)a2 exifOrientation:(unsigned int)a3 rotationPreference:(unsigned long long)a4 inferenceDescriptor:(id)a5;
- (long long)setInferencePixelBuffer:(struct __CVBuffer { } *)a0 forEspressoDescriptor:(id)a1;
- (long long)solveRotationPreference:(unsigned long long)a0;

@end
