@class NSImageView, CAShapeLayer;

@interface PXPeoplePickerSelectionView : NSView {
    NSImageView *_checkmarkForegroundView;
    NSImageView *_checkmarkBackgroundView;
    CAShapeLayer *_overlay;
}

@property (nonatomic) BOOL usesBadgeSelection;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
