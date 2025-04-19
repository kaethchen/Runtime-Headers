@interface AVMetadataMotionToWakeObject : AVMetadataObject <NSCopying>

@property (readonly) unsigned long long detectedMotion;

+ (id)motionToWakeObjectWithDetectedMotion:(unsigned long long)a0 input:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initWithDetectedMotion:(unsigned long long)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sourceCaptureInput:(id)a2;

@end
