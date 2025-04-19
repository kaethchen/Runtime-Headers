@interface AXVScrollMenuSuggestedEventPayload : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { int x; int y; } delta;
@property (nonatomic) double acceleration;
@property (nonatomic) struct CGPoint { double x; double y; } point;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDelta:(struct { int x0; int x1; })a0 acceleration:(double)a1 point:(struct CGPoint { double x0; double x1; })a2;

@end
