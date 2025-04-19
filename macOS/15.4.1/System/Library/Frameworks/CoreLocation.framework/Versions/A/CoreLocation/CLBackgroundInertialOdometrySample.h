@class CLBIO_DeltaPosition, CLBIO_DeltaVelocity, NSDate, CLBIO_Quaternion;

@interface CLBackgroundInertialOdometrySample : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *cfAbsTimestamp;
@property (readonly, nonatomic) double machContinuousTimestamp_s;
@property (readonly, nonatomic) double sampleInterval_s;
@property (readonly, nonatomic) CLBIO_DeltaPosition *deltaPosition_m;
@property (readonly, nonatomic) CLBIO_DeltaVelocity *deltaVelocity_mps;
@property (readonly, nonatomic) CLBIO_Quaternion *quaternion;
@property (readonly, nonatomic) unsigned long long referenceFrameContinuity;
@property (readonly, nonatomic) unsigned long long sessionReferenceFrame;
@property (readonly, nonatomic) unsigned long long staticFlag;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(id)a0 machContinuousTimestamp:(double)a1 sampleInterval:(double)a2 deltaPosition:(id)a3 deltaVelocity:(id)a4 quaternion:(id)a5;
- (id)initWithTimestamp:(id)a0 machContinuousTimestamp:(double)a1 sampleInterval:(double)a2 deltaPosition:(id)a3 deltaVelocity:(id)a4 quaternion:(id)a5 referenceFrameContinuity:(unsigned long long)a6 referenceFrame:(unsigned long long)a7 staticFlag:(unsigned long long)a8;

@end
