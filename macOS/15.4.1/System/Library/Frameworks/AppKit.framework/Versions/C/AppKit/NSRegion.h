@interface NSRegion : NSObject <NSCopying, NSMutableCopying> {
    void /* unknown type, empty encoding */ _region;
}

@property (class, nonatomic, readonly) NSRegion *emptyRegion;
@property (class, nonatomic, readonly) NSRegion *infiniteRegion;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) struct CGSRegionObject { } *CGRegion;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) BOOL isInfinite;
@property (nonatomic, readonly) BOOL isRectangular;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(void *)a0;
- (void).cxx_destruct;
- (void)addClip;
- (void)applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)containsRegion:(id)a0;
- (void)enumerateRects:(id /* block */)a0;
- (void)getRects:(const struct CGRect **)a0 count:(long long *)a1;
- (id)initWithRegion:(id)a0;
- (BOOL)intersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)subtractRegion:(id)a0;
- (void)addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addRegion:(id)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fill;
- (id)initWithBitmapImageRep:(id)a0 atX:(long long)a1 y:(long long)a2 flip:(BOOL)a3;
- (id)initWithCGRegion:(struct CGSRegionObject { } *)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithRects:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(long long)a1;
- (void)intersectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)intersectRegion:(id)a0;
- (BOOL)intersectsRegion:(id)a0;
- (void)setEmpty;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRegion:(id)a0;
- (void)stroke;
- (void)subtractRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)translateX:(double)a0 y:(double)a1;
- (void)xorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)xorRegion:(id)a0;

@end
