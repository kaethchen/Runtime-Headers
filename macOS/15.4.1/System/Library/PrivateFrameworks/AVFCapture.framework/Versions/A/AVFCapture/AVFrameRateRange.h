@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject {
    AVFrameRateRangeInternal *_internal;
}

@property (readonly) double minFrameRate;
@property (readonly) double maxFrameRate;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } maxFrameDuration;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } minFrameDuration;

+ (void)initialize;
+ (id)frameRateRangeWithMinRate:(int)a0 maxFrameRate:(int)a1;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)includesFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)includesFrameRate:(double)a0;
- (id)initWithMinFrameRate:(int)a0 maxFrameRate:(int)a1;

@end
