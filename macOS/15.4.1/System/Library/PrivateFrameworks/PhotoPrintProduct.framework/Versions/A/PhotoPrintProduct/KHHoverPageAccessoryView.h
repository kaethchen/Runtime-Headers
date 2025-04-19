@class UXView, NSTrackingArea, NSVisualEffectView, NSButton;

@interface KHHoverPageAccessoryView : UXView {
    UXView *_contentView;
    NSVisualEffectView *_visualEffectView;
    NSTrackingArea *_trackingArea;
}

@property (retain, nonatomic) NSButton *pageArrowButton;
@property (nonatomic) BOOL forceAlwaysShowing;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void)_hideContentViewIfNecessary;

@end
