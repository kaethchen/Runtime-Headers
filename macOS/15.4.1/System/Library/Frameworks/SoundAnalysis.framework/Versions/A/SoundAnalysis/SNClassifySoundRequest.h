@class SNTimeDurationConstraint, NSArray, NSString, _SNClassifySoundRequest;

@interface SNClassifySoundRequest : NSObject <NSCopying, NSSecureCoding, SNRequest> {
    _SNClassifySoundRequest *_impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property double overlapFactor;
@property struct { long long x0; int x1; unsigned int x2; long long x3; } windowDuration;
@property (readonly) SNTimeDurationConstraint *windowDurationConstraint;
@property (readonly, copy) NSArray *knownClassifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eagerlyAllocateModelsForRequest:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)impl;
- (id)initWithImpl:(id)a0;
- (void)setWindowDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })windowDuration;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)initWithClassifierIdentifier:(id)a0 error:(id *)a1;
- (id)knownClassifications;
- (double)overlapFactor;
- (void)setOverlapFactor:(double)a0;
- (id)windowDurationConstraint;

@end
