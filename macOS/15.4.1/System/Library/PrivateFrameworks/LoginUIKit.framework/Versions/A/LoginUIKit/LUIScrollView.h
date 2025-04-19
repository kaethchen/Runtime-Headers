@class NSImageView;

@interface LUIScrollView : NSScrollView {
    NSImageView *_leftShadowImageView;
    NSImageView *_rightShadowImageView;
    BOOL _leftShadowVisible;
    BOOL _rightShadowVisible;
}

@property BOOL drawsLeftVerticalShadow;
@property BOOL drawsRightVerticalShadow;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setScrollerStyle:(long long)a0;
- (void)_addLeftVerticalShadow;
- (void)_addRightVerticalShadow;
- (void)_layoutVerticalShadows;
- (void)_removeLeftVerticalShadow;
- (void)_removeRightVerticalShadow;

@end
