@class NSColor;

@interface PXGPath : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSColor *strokeColor;
@property (readonly, nonatomic) double lineWidth;
@property (readonly, copy, nonatomic) NSColor *fillColor;
@property (readonly, nonatomic) struct CGPath { } *CGPath;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) int drawingMode;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 CGPath:(struct CGPath { } *)a1 strokeColor:(id)a2 lineWidth:(double)a3 fillColor:(id)a4 drawingMode:(int)a5;

@end
