@interface SNGenerateShazamSignatureRequest : NSObject <SNRequest, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } windowDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } strideDuration;
@property (nonatomic) double ringBufferDuration;
@property (nonatomic, readonly) long long hash;

+ (struct SNShazamMixingOptions { unsigned short x0; float x1; unsigned short x2; float x3; float x4; })shazamChannelsMixingInfo;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)getRingBufferDuration;
- (id)initWithWindowDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 strideDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 ringBufferDuration:(double)a2;

@end
