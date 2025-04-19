@interface FI_IActionButtonCell : FI_TButtonCell

@property (readonly, nonatomic) BOOL inRollOverState;

- (id)init;
- (void)setHighlighted:(BOOL)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)isOpaque;
- (BOOL)isSelected;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)initCommon;
- (id)imageForActionButtonState:(int)a0;
- (void)updateActionButtonImage;

@end
