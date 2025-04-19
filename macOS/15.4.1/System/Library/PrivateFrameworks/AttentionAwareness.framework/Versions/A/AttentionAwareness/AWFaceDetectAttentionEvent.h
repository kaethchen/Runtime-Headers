@class NSArray;

@interface AWFaceDetectAttentionEvent : AWAttentionEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isMetadataValid) BOOL metadataValid;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) unsigned long long faceState;
@property (readonly, nonatomic) unsigned long long metadataType;
@property (readonly, nonatomic) NSArray *motionData;
@property (readonly, nonatomic) unsigned long long motionResult;
@property (readonly, nonatomic) float attentionScore;
@property (readonly, nonatomic) float faceDetectionScore;
@property (readonly, nonatomic) unsigned long long personID;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceBounds;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)describeMotionData:(id)a0;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 faceMetadata:(struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; unsigned long long x6; unsigned long long x7; float x8[16]; unsigned long long x9; float x10; float x11; unsigned long long x12; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x13; } *)a2;
- (void)validateMask;

@end
