@class NSFont;

@interface SiriUIContentLabel : NSTextField

@property (nonatomic) BOOL willAppearDirectlyOverUltraDarkBackground;
@property (retain, nonatomic) NSFont *superScriptFont;

+ (id)label;
+ (id)labelWithLightWeightRegularFont;
+ (id)labelWithLightWeightSubtextFont;
+ (id)labelWithBodyFont;
+ (id)labelWithHeaderFont;
+ (id)labelWithMediumWeightRegularFont;
+ (id)labelWithMediumWeightSubtextFont;
+ (id)labelWithSubtitleFont;
+ (id)labelWithThinWeightRegularFont;
+ (id)labelWithThinWeightSubtextFont;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setStringValue:(id)a0;
- (void)commonInit;
- (id)fontSmoothingBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAttributedStringValue:(id)a0;
- (BOOL)shouldSetFontSmoothingBackgroundColor;

@end
