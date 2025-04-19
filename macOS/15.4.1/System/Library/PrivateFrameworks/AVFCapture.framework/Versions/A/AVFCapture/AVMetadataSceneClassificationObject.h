@class NSDictionary;

@interface AVMetadataSceneClassificationObject : AVMetadataObject <NSCopying>

@property (readonly) NSDictionary *confidences;
@property (readonly) float appCodeSceneConfidence;
@property (readonly) float otherCodeSceneConfidence;
@property (readonly) float qrSceneConfidence;
@property (readonly) float brightStageSceneConfidence;
@property (readonly) float documentSceneConfidence;
@property (readonly) float foodSceneConfidence;
@property (readonly) float indoorSceneConfidence;
@property (readonly) float outdoorSceneConfidence;
@property (readonly) float lynxGiftCardSceneConfidence;
@property (readonly) float standardGiftCardSceneConfidence;
@property (readonly) float sunsetSceneConfidence;
@property (readonly) float textSceneConfidence;
@property (readonly) float waterBodySceneConfidence;

+ (id)sceneClassificationObjectWithConfidences:(id)a0 input:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (float)_confidenceForKey:(id)a0;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initSceneClassificationObjectWithConfidences:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sourceCaptureInput:(id)a2;

@end
