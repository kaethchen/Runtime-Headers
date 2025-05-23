@interface CACGPathCodingSegment : NSObject <NSSecureCoding> {
    int _type;
    struct CGPoint { double x; double y; } _points[3];
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addToCGPath:(struct CGPath { } *)a0;
- (id)initWithCGPathElement:(const struct CGPathElement { int x0; struct CGPoint *x1; } *)a0;

@end
