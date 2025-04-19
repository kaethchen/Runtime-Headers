@class NSView, _NSCartoucheMaskLayer, NSVisualEffectView, CALayer, NSImage;

@interface NSTouchBarCustomizationPaletteLabelPopoverView : NSView {
    NSVisualEffectView *_backdrop;
    _NSCartoucheMaskLayer *_backdropMask;
    CALayer *_shadows;
    CALayer *_primaryShadow;
    _NSCartoucheMaskLayer *_primaryShadowShadow;
    _NSCartoucheMaskLayer *_primaryShadowMask;
    CALayer *_rimShadow;
    _NSCartoucheMaskLayer *_rimShadowShadow;
    _NSCartoucheMaskLayer *_rimShadowMask;
    NSImage *_cartoucheImage;
    struct CGSize { double width; double height; } _cartouchSize;
    unsigned long long _cartoucheSide;
    float _radius;
    NSView *_contentView;
    double _center;
}

@property (retain) NSView *contentView;
@property double minHeight;
@property double edgeInset;
@property double center;

- (void)dealloc;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
