@class CALayer;

@interface MKBlurBackingLayer : CALayer {
    CALayer *_backdropLayer;
    struct CGColor { } *_fallbackColor;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)updateAppearance;
- (void)accessibilityDisplayOptionsDidChange:(id)a0;

@end
