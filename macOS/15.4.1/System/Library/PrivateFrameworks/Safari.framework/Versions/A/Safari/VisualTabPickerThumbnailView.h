@class NSImageView, NSTextField, NSView, VisualTabPickerMuteButton, RolloverImageButton, NSStackView, NSLayoutConstraint;
@protocol VisualTabPickerThumbnailDataSource, VisualTabPickerThumbnailDelegate;

@interface VisualTabPickerThumbnailView : VisualTabPickerShadowTileView {
    NSTextField *_titleTextField;
    NSImageView *_siteIconImageView;
    NSStackView *_headerContentStackView;
    BOOL _reloadDataOnLayout;
    NSView *_thumbnailView;
    RolloverImageButton *_closeButton;
    VisualTabPickerMuteButton *_muteButton;
    NSLayoutConstraint *_muteButtonWidthConstraint;
    NSLayoutConstraint *_muteButtonHeightConstraint;
}

@property (nonatomic, getter=isMuteButtonVisible) BOOL muteButtonVisible;
@property (nonatomic) long long muteButtonState;
@property (weak, nonatomic) id<VisualTabPickerThumbnailDataSource> dataSource;
@property (weak, nonatomic) id<VisualTabPickerThumbnailDelegate> delegate;
@property (nonatomic, getter=isCloseButtonVisible) BOOL closeButtonVisible;
@property (nonatomic) BOOL visibleToUser;
@property (readonly, nonatomic) NSView *lowResolutionThumbnailView;

- (void).cxx_destruct;
- (void)layout;
- (void)_closeButtonPressed:(id)a0;
- (id)_createTitleTextField;
- (void)_getTitleOpacityAnimationDuration:(double *)a0 timeOffset:(double *)a1 gridAnimation:(long long)a2;
- (void)_reloadData;
- (double)_scaleFactor;
- (void)_selectThumbnail;
- (void)_setUpShadows;
- (void)_setUpSubviews;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (void)reloadData;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startTitleOpacityAnimation:(long long)a0;
- (void)updateLayer;
- (void)_updateLayout;
- (void)updateIcon;
- (void)_createCloseButton;
- (void)_createMuteButtonIfNecessary;
- (void)_muteButtonPressed:(id)a0;
- (void)_setCloseButtonVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateCloseButtonImages;
- (void)resetScaleFactor;
- (void)tearDownCloseButton;
- (void)updateMuteButtonStateAndVisibility;

@end
