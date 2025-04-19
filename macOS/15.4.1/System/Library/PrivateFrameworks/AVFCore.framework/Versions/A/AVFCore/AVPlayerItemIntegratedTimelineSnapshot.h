@class NSArray, AVPlayerItemSegment, NSDate;

@interface AVPlayerItemIntegratedTimelineSnapshot : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentTime;
    NSDate *_currentDate;
    AVPlayerItemSegment *_currentSegment;
    NSArray *_segments;
}

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) AVPlayerItemSegment *currentSegment;
@property (readonly) NSArray *segments;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly) NSDate *currentDate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSegments:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 currentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 currentDate:(id)a3 currentSegment:(id)a4;
- (void)mapTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toSegment:(id *)a1 atSegmentOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;

@end
