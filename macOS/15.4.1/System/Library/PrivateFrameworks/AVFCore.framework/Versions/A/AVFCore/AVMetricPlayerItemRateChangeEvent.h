@class AVAssetVariant;

@interface AVMetricPlayerItemRateChangeEvent : AVMetricEvent {
    double _rate;
    double _previousRate;
    AVAssetVariant *_variant;
}

@property (readonly) double rate;
@property (readonly) double previousRate;
@property (readonly) AVAssetVariant *variant;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescriptionForAttr;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 variant:(id)a3 rate:(double)a4 previousRate:(double)a5;

@end
