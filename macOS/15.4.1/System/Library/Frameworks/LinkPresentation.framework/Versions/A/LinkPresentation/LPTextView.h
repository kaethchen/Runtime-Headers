@class NSTextField, NSRegularExpression, NSString, NSAttributedString, LPTextViewStyle;

@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable, LPSubtitleButtonContainer> {
    NSTextField *_textView;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPTextViewStyle *_style;
    NSAttributedString *_attributedString;
    double _ascender;
    double _descender;
}

@property (readonly, retain, nonatomic) NSAttributedString *attributedString;
@property (readonly, retain, nonatomic) LPTextViewStyle *style;
@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributedString:(id)a0 resolvedAgainstStyle:(id)a1 withEmphasizedTextExpression:(id)a2 tintColor:(id)a3 lineBreakMode:(unsigned long long)a4 usesVibrancy:(BOOL)a5 forLTR:(BOOL)a6 withFont:(id)a7 userInterfaceStyle:(long long)a8;
+ (id)attributedStringHidingNonColoredRanges:(id)a0;

- (void).cxx_destruct;
- (double)ascender;
- (double)descender;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsets;
- (void)tintColorDidChange;
- (id)subtitleButton;
- (double)lastLineDescent;
- (void)_buildSubviewsIfNeeded;
- (void)_createTextViewWithAttributedString:(id)a0;
- (void)_updateAttributedString;
- (void)_userInterfaceStyleDidChange;
- (void)applyAttributedString:(id)a0;
- (long long)computedNumberOfLines;
- (id)effectiveAttributedString;
- (long long)effectiveMaximumNumberOfLines;
- (double)firstLineLeading;
- (id)initWithHost:(id)a0 text:(id)a1 style:(id)a2;
- (void)layoutComponentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRect;

@end
