@interface IKGuidesLayer : CALayer {
    BOOL _isHorizontal;
}

+ (double)fadeDuration;
+ (id)addGuidesLayer:(id)a0;
+ (BOOL)registerLayerWithView:(id)a0;

- (void)changeColor:(id)a0;
- (void)ikMouseDown:(id)a0;
- (void)setOrientation:(BOOL)a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setup:(id)a0;
- (void)toggleOrientation:(struct CGPoint { double x0; double x1; })a0;

@end
