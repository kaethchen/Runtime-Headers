@interface AVMetadataHumanHandObject : AVMetadataObject <NSCopying>

@property (readonly) long long handID;
@property (readonly) BOOL hasConfidence;
@property (readonly) double confidence;
@property (readonly) BOOL hasChirality;
@property (readonly) unsigned long long chirality;

+ (id)humanHandObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2 type:(id)a3;
- (id)initWithType:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 optionalInfoDict:(id)a4 originalMetadataObject:(id)a5 sourceCaptureInput:(id)a6;

@end
