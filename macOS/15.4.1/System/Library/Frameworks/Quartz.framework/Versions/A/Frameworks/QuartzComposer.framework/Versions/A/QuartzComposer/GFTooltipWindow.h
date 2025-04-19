@interface GFTooltipWindow : NSPanel

+ (id)sharedWindow;

- (id)init;
- (void)setContentView:(id)a0;
- (void)hide;
- (void)showAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
