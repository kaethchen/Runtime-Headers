@class LPTextView, NSRegularExpression, NSImageView, LPQuotedTextViewStyle, NSAttributedString, NSTextView;

@interface LPQuoteView : LPComponentView <LPTextStyleable, LPContentInsettable> {
    NSTextView *_textView;
    BOOL _didLimitNumberOfCharacters;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPQuotedTextViewStyle *_style;
    NSAttributedString *_attributedString;
    LPTextView *_characterLimitIndicatorView;
    NSImageView *_quoteIndicatorView;
    double _ascender;
    double _descender;
}

@property (readonly, retain, nonatomic) NSAttributedString *attributedString;
@property (readonly, retain, nonatomic) LPQuotedTextViewStyle *style;
@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;

- (void).cxx_destruct;
- (double)ascender;
- (double)descender;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsets;
- (void)tintColorDidChange;
- (id)_createTextView;
- (double)lastLineDescent;
- (void)_buildSubviewsIfNeeded;
- (void)applyAttributedString:(id)a0;
- (long long)computedNumberOfLines;
- (long long)computedNumberOfLinesWithFont:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)effectiveAttributedString;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsetsWithoutQuoteIndicator;
- (long long)effectiveMaximumNumberOfLines;
- (double)firstLineLeading;
- (id)initWithHost:(id)a0 text:(id)a1 style:(id)a2;
- (void)layoutComponentView;
- (void)updateEffectiveFontForSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateExclusionRects;

@end
