@interface IKCropLayer : CALayer {
    struct CGSize { double width; double height; } _selectionSize;
}

+ (double)fadeDuration;
+ (id)addCropLayer:(id)a0;
+ (BOOL)registerLayerWithView:(id)a0;

- (id)init;
- (void)drawInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropBounds;
- (void)ikMouseDown:(id)a0;
- (void)setCropSize:(struct CGSize { double x0; double x1; })a0;
- (void)setup:(id)a0;

@end
