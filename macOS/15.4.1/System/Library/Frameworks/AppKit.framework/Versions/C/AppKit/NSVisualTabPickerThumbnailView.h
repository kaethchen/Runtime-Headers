@class NSTextField, NSView, CALayer, NSVisualTabPickerButton;
@protocol NSVisualTabPickerThumbnailDataSource, NSVisualTabPickerThumbnailDelegate;

@interface NSVisualTabPickerThumbnailView : NSVisualTabPickerShadowTileView {
    NSTextField *_titleTextField;
    NSView *_thumbnailView;
    NSVisualTabPickerButton *_closeButton;
    CALayer *_exposeBorderLayer;
}

@property (weak, nonatomic) id<NSVisualTabPickerThumbnailDataSource> dataSource;
@property (weak, nonatomic) id<NSVisualTabPickerThumbnailDelegate> delegate;
@property (nonatomic, getter=isCloseButtonVisible) BOOL closeButtonVisible;
@property (nonatomic, getter=isExposeBorderVisible) BOOL exposeBorderVisible;

- (void).cxx_destruct;
- (void)_closeButtonPressed:(id)a0;
- (id)_createTitleTextField;
- (void)_getTitleOpacityAnimationDuration:(double *)a0 timeOffset:(double *)a1 gridAnimation:(long long)a2;
- (void)_selectThumbnail;
- (void)_setUpShadows;
- (void)_setUpSubviews;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)reloadData;
- (void)selectedTabDidChange;
- (void)startTitleOpacityAnimation:(long long)a0;
- (void)updateLayer;
- (void)willStartExitAnimation;

@end
