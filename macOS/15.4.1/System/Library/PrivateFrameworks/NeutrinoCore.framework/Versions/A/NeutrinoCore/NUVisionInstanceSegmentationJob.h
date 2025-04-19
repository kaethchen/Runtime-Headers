@class NSArray, VNGenerateImageSegmentationRequest, _NUVisionInstanceSegmentationResult;

@interface NUVisionInstanceSegmentationJob : NUVisionBasedRenderJob

@property (retain, nonatomic) VNGenerateImageSegmentationRequest *visionRequest;
@property (retain, nonatomic) _NUVisionInstanceSegmentationResult *visionResult;
@property (readonly, nonatomic) NSArray *targetSamplePoints;
@property (readonly, nonatomic, getter=isUsingTargetSamplePoints) BOOL usingTargetSamplePoints;

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (id)_calculateInstancePropertiesForObservation:(id)a0 context:(id)a1 observationOrientation:(long long)a2 observationScale:(struct CGSize { double x0; double x1; })a3;
- (struct { long long x0; long long x1; })idealModelSize;
- (BOOL)prepare:(out id *)a0;
- (BOOL)runMainRequest:(id)a0 onImage:(id)a1 orientation:(long long)a2 scale:(struct CGSize { double x0; double x1; })a3 renderer:(id)a4 error:(out id *)a5;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
