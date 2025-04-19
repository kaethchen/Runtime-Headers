@class NSString, NSColor;

@interface CombinedTabGroupButtonCell : NSPopUpButtonCell

@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *symbolImageName;
@property (copy, nonatomic) NSColor *color;
@property (nonatomic) BOOL shouldInvertColors;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)drawBezelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)_textColor;
- (id)_paragraphStyle;
- (id)_attributedMainTitle;
- (id)_attributedSubtitle;
- (id)_buttonBorderColor;
- (void)_updateAttributedTitleIfNeeded;

@end
