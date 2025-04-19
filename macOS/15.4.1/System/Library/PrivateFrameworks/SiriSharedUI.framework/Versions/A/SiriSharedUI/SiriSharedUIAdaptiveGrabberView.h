@interface SiriSharedUIAdaptiveGrabberView : NSControl

@property (nonatomic) long long style;

+ (Class)layerClass;

- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsLayer;
- (void)setStyle:(long long)a0 animated:(BOOL)a1;
- (id)shapeLayer;
- (struct CGPath { } *)_pathForStyle:(long long)a0;
- (void)_setupWithStyle:(long long)a0 animated:(BOOL)a1;

@end
