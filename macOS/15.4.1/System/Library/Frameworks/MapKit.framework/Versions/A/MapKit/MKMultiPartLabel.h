@class MKMultiPartAttributedString, _MKMultiPartLabelMetrics, NSString, NSDictionary, NSTextView, NSFont, NSColor;

@interface MKMultiPartLabel : NSView {
    NSTextView *_textView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousBounds;
    NSDictionary *_cachedTextAttributes;
    NSDictionary *_lastAppliedNonColorAttributes;
}

@property (retain, nonatomic) _MKMultiPartLabelMetrics *data;
@property (retain, nonatomic) MKMultiPartAttributedString *multiPartString;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSColor *textColor;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) unsigned long long lineBreakMode;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)_textAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (double)firstBaselineOffsetFromTop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)lastBaselineOffsetFromBottom;
- (void)setContentCompressionResistancePriority:(float)a0 forOrientation:(long long)a1;
- (void)setContentHuggingPriority:(float)a0 forOrientation:(long long)a1;
- (id)_addDefaultAttributesToAttributedString:(id)a0;
- (id)_attributedAdjustedMultiPartStringFromString:(id)a0;
- (void)_setupTextView;
- (void)_updateColorsForCurrentState;
- (void)_updateStrings;
- (void)_updateTextViewTextAndInvalidateLayout:(id)a0;

@end
