@class TLKMultilineText, NSTextField, NSString, NSAttributedString, TLKRichText, NSFont, TLKFormattedText;

@interface TLKLabel : NSTextField

@property (retain, nonatomic) NSTextField *overlayLabelForNonColoredGlyphs;
@property (retain) NSFont *originalFont;
@property BOOL hasCustomTextColor;
@property BOOL attributedTextExplicitelySet;
@property BOOL attributedTextUpdateDisabled;
@property BOOL attributedTextUpdateSkipped;
@property unsigned long long adjustedProminence;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } unadjustedCustemAlignmentRectInsets;
@property BOOL disableVibrancy;
@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (retain, nonatomic) TLKRichText *richText;
@property (retain, nonatomic) TLKFormattedText *formattedText;
@property (nonatomic) BOOL supportsColorGlyphs;
@property (nonatomic) BOOL autoHideIfNoContent;
@property (nonatomic) BOOL useButtonColoring;
@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL middleTruncation;
@property (nonatomic) BOOL shouldUnderlineText;

+ (id)secondaryLabel;
+ (id)tertiaryLabel;
+ (id)primaryLabel;
+ (BOOL)stringStartsWithQuote:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setAlignment:(long long)a0;
- (void)layout;
- (void)setStringValue:(id)a0;
- (void)setLineBreakMode:(unsigned long long)a0;
- (BOOL)allowsVibrancy;
- (void)performBatchUpdates:(id /* block */)a0;
- (void)setAttributedStringValue:(id)a0;
- (void)setCustomAlignmentRectInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setFont:(id)a0;
- (void)setTextColor:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)adjustFontSizeIfNecessaryForSize:(struct CGSize { double x0; double x1; })a0;
- (id)fontForSize:(double)a0;
- (id)fontThatFitsCurrentTextWidthForOriginalFont:(id)a0 forWidth:(double)a1;
- (BOOL)hasEmphasizedFormattingInRichText;
- (id)initWithProminence:(unsigned long long)a0;
- (void)loadInlineImages;
- (void)setFont:(id)a0 keepOriginal:(BOOL)a1;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateAdjustedProminence;
- (void)updateAttributedText;
- (void)updateLineBreakMode;
- (void)updateWithAttributedString:(id)a0;
- (void)updateWithString:(id)a0;

@end
