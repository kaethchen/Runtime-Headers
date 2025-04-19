@interface AVVideoCompositionTimeWindow : NSObject <NSCopying>

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } durationBefore;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } durationAfter;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } durationBeforeWhenSeeking;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } durationAfterWhenSeeking;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDurationBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 durationAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithDurationBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 durationAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 durationBeforeWhenSeeking:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 durationAfterWhenSeeking:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;

@end
