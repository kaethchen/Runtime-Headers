@class AVFrameRateRangeInternal_Tundra;

@interface AVFrameRateRange_Tundra : NSObject {
    AVFrameRateRangeInternal_Tundra *_internal;
}

@property (readonly) double minFrameRate;
@property (readonly) double maxFrameRate;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } maxFrameDuration;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } minFrameDuration;

+ (void)initialize;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })frameDurationForFrameRate:(double)a0;
+ (id)frameRateRangeWithMinRate:(double)a0 maxRate:(double)a1 maxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 minDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (double)frameRateForFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)includesFrameRate:(double)a0;
- (id)initWithMinRate:(double)a0 maxRate:(double)a1 maxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 minDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;

@end
