@class SNTimeDurationConstraint;

@interface SNCreateFeaturePrintRequest : NSObject <SNRequest, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) SNTimeDurationConstraint *windowDurationConstraint;
@property (nonatomic) long long featurePrintType;
@property (nonatomic) float overlapFactor;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } windowDuration;
@property (nonatomic, readonly) long long hash;

+ (id)eagerlyAllocateModelsForRequest:(id)a0 error:(id *)a1;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeaturePrintType:(long long)a0;
- (id)initWithFeaturePrintType:(long long)a0 version:(long long)a1 error:(id *)a2;

@end
