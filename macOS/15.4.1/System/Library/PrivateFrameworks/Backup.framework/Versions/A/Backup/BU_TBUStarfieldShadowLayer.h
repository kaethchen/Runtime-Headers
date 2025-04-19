@class __end_cap_, __end_;

@interface BU_TBUStarfieldShadowLayer : CALayer {
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> { struct CGImage *fRef; } _shadowImage;
    struct vector<CALayer *, std::allocator<CALayer *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<CALayer *__strong *, std::allocator<CALayer *>> { id *__value_; } x1; } _layers;
}

@property (nonatomic) struct CGImage { } *shadowImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowContentBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shadowImageBounds;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPart:(int)a0;
- (int)horizontalPosition:(int)a0;
- (void)setShadowimageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayers;
- (int)verticalPosition:(int)a0;

@end
