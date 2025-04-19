@interface SiriSharedUIContentLabel : NSTextField

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
+ (id)labelWithLightWeightFontSize:(double)a0;
+ (id)labelWithThinWeightFontSize:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;
- (void)setNumberOfLines:(long long)a0;

@end
