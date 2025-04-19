@class IKNavigationImageLayer, IKNavigationRectLayer;

@interface IKNavigationLayer : CALayer {
    IKNavigationImageLayer *_navImage;
    IKNavigationRectLayer *_rectLayer;
}

+ (id)addNavigationLayer:(id)a0;
+ (BOOL)registerLayerWithView:(id)a0;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)adjustAndDisplay:(id)a0;
- (void)ikMouseDown:(id)a0;
- (void)setup:(id)a0;

@end
