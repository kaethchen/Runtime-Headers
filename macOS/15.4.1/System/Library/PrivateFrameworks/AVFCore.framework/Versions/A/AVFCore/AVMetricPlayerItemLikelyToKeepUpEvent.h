@class AVAssetVariant, NSArray;

@interface AVMetricPlayerItemLikelyToKeepUpEvent : AVMetricEvent {
    AVAssetVariant *_variant;
    double _timeTaken;
    NSArray *_loadedTimeRanges;
}

@property (readonly) AVAssetVariant *variant;
@property (readonly) double timeTaken;
@property (readonly) NSArray *loadedTimeRanges;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescriptionForAttr;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 variant:(id)a3 timeTaken:(double)a4 loadedTimeRanges:(id)a5;

@end
