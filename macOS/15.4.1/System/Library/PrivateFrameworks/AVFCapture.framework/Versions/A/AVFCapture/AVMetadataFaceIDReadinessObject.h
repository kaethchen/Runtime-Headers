@interface AVMetadataFaceIDReadinessObject : AVMetadataObject <NSCopying> {
    BOOL _ready;
    long long _coachingStatus;
    long long _userEngagementStatus;
}

@property (readonly, getter=isReady) BOOL ready;
@property (readonly) long long coachingStatus;
@property (readonly) long long userEngagementStatus;

+ (id)faceIDReadinessObjectWithReady:(BOOL)a0 coachingStatus:(long long)a1 userEngagementStatus:(long long)a2 input:(id)a3 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initWithReady:(BOOL)a0 coachingStatus:(long long)a1 userEngagementStatus:(long long)a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 sourceCaptureInput:(id)a4;

@end
