@interface QCRegion : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    void *_region;
    void *_unused[4];
}

+ (void)initialize;
+ (id)emptyRegion;
+ (id)infiniteRegion;
+ (id)regionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)regionWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)regionWithCGSRegion:(struct CGSRegionObject { } *)a0;
+ (id)regionWithCIFilterShape:(id)a0;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (BOOL)isEmpty;
- (id)rotateByDegrees:(double)a0;
- (BOOL)containsRegion:(id)a0;
- (BOOL)intersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)subtractRegion:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)intersectsRegion:(id)a0;
- (BOOL)isInfinite;
- (BOOL)isRectangular;
- (id)subtractRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)insetByX:(double)a0 Y:(double)a1;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSRegionObject { } *)CGSRegion;
- (id)intersectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)unionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)scaleByX:(double)a0 Y:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CGRect;
- (id)CIFilterShape;
- (void *)enumerateRects:(void *)a0 outRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)initWithCGSRegion:(struct CGSRegionObject { } *)a0;
- (id)initWithCIFilterShape:(id)a0;
- (id)intersectWithRegion:(id)a0;
- (id)listRects;
- (id)offsetByX:(double)a0 Y:(double)a1;
- (id)pixelBufferRepresentation;
- (id)transformBy:(id)a0;
- (id)transformWith:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0;
- (id)unionWithRegion:(id)a0;

@end
