@class NSBox, NSImageView;
@protocol NSVisualTabPickerNewTabViewDelegate;

@interface NSVisualTabPickerNewTabView : NSVisualTabPickerShadowTileView {
    NSBox *_contentView;
    NSImageView *_imageView;
}

@property (weak, nonatomic) id<NSVisualTabPickerNewTabViewDelegate> delegate;

- (void).cxx_destruct;
- (void)_setUpSubviews;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)animateSidebarImage:(id)a0 width:(double)a1 gridAnimation:(long long)a2;
- (void)animateToolbarImage:(id)a0 height:(double)a1 gridAnimation:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseDown:(id)a0;

@end
