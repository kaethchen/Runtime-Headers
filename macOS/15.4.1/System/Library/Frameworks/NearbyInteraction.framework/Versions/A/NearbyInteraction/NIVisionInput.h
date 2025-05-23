@interface NIVisionInput : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double timestamp;
@property (readonly) struct { void /* unknown type, empty encoding */ columns[4]; } devicePose;
@property (readonly) long long trackingState;
@property (readonly) double lightEstimate;
@property (readonly) BOOL majorRelocalization;
@property (readonly) BOOL minorRelocalization;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0 devicePose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 trackingState:(long long)a2 lightEstimate:(double)a3 majorRelocalization:(BOOL)a4 minorRelocalization:(BOOL)a5;
- (void)overrideTimestamp:(double)a0;

@end
