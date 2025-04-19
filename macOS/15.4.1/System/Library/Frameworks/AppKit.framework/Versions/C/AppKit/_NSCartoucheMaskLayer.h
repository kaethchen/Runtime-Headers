@class CALayer;

@interface _NSCartoucheMaskLayer : CALayer {
    CALayer *_roundRectLayer;
    CALayer *_cartoucheLayer;
    CALayer *_hackLinePreventionLayer;
}

- (id)initWithRadius:(float)a0 image:(id)a1 scaleFactor:(float)a2;
- (void)layout:(double)a0 side:(unsigned long long)a1 cartoucheSize:(struct CGSize { double x0; double x1; })a2 radius:(double)a3;

@end
