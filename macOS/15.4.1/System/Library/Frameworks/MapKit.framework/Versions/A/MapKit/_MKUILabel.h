@class NSString, NSAttributedString, NSFont;

@interface _MKUILabel : NSTextField {
    double _cachedBaselineOffsetFromBottom;
    BOOL _haveCachedBaselineOffsetFromBottom;
    NSFont *_font;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL collapsesWhenEmpty;
@property (copy, nonatomic) id /* block */ _mapkit_themeColorProvider;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;

+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingAlignment;
+ (id)keyPathsForValuesAffectingAttributedText;
+ (id)keyPathsForValuesAffectingText;

- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFont:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateFontSize;
- (void)infoCardThemeChanged;

@end
