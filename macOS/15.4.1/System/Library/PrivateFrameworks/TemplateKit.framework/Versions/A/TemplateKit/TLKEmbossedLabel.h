@class TLKMultilineText, TLKProminenceView, TLKLabel, NSFont, NSColor;

@interface TLKEmbossedLabel : TLKView

@property (nonatomic) struct CGSize { double width; double height; } customInsetSize;
@property (retain, nonatomic) TLKLabel *label;
@property (retain, nonatomic) TLKProminenceView *backgroundView;
@property (nonatomic) BOOL shouldBadge;
@property (retain, nonatomic) TLKMultilineText *text;
@property (nonatomic) struct CGSize { double width; double height; } textOffset;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (retain, nonatomic) NSColor *color;
@property (retain, nonatomic) NSFont *font;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (void)observedPropertiesChanged;
- (void)setText:(id)a0 font:(id)a1 customInsetSize:(struct CGSize { double x0; double x1; })a2 badge:(BOOL)a3;

@end
