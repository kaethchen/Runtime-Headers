@class NSArray, CALayer;

@interface GEOWorldImageLayer : CALayer {
    double rotation;
    NSArray *slices;
    CALayer *reentrantSlice;
}

@property (readonly) struct CGSize { double width; double height; } imageSize;
@property double rotation;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } zoomFrame;

+ (struct CGContext { } *)_copyContextToHostOverlappingImage:(struct CGImage { } *)a0;
+ (struct CGImage { } *)_copyOverlappingWorldImageWithImage:(struct CGImage { } *)a0;
+ (id)worldImageLayerWithImage:(struct CGImage { } *)a0;

- (void)dealloc;
- (id)initWithImage:(struct CGImage { } *)a0;
- (void)setMinificationFilter:(id)a0;
- (void)_applyRotation;
- (void)_initSlicesWithImage:(struct CGImage { } *)a0;
- (struct CGPoint { double x0; double x1; })imagePointFromCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
