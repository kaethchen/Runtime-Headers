@class NSArray, AVPlayerInterstitialEvent, NSDate;

@interface AVPlayerItemSegment : NSObject {
    struct OpaqueFigPlaybackItemSegment { } *_figSegment;
}

@property (readonly, nonatomic) long long segmentType;
@property (readonly, nonatomic) struct { struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; } timeMapping;
@property (readonly) NSArray *loadedTimeRanges;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) AVPlayerInterstitialEvent *interstitialEvent;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (struct OpaqueFigPlaybackItemSegment { } *)_figSegment;
- (id)_initWithFigSegment:(struct OpaqueFigPlaybackItemSegment { } *)a0;

@end
