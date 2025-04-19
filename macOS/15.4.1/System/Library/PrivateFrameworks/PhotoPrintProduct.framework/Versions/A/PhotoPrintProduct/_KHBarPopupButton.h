@class NSColor;

@interface _KHBarPopupButton : NSPopUpButton {
    NSColor *_tintColor;
}

@property (retain, nonatomic) NSColor *tintColor;

+ (Class)cellClass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pullsDown:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)setTintAdjustmentMode:(long long)a0;
- (long long)tintAdjustmentMode;
- (void)tintColorDidChange;

@end
