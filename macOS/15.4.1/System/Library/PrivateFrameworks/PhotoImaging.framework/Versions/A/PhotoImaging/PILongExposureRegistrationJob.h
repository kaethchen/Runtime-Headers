@class CIImage, VNImageHomographicAlignmentObservation;

@interface PILongExposureRegistrationJob : NURenderJob

@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } guideExtent;
@property (retain, nonatomic) CIImage *stillImage;
@property (retain, nonatomic) VNImageHomographicAlignmentObservation *observation;

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderScaleClampedToNativeScale;
- (id)registrationRequest;

@end
