@interface LUITextField : NSTextField

+ (void)initialize;
+ (Class)cellClass;

- (void)setDelegate:(id)a0;
- (id)designatedFocusRingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (void)setPlaceholderString:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (id)_placeholderTextColor;
- (id)_textColor;
- (void)setShouldSmoothFonts:(BOOL)a0;
- (BOOL)shouldSmoothFonts;

@end
