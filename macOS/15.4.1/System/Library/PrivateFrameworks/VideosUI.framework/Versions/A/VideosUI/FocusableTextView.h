@class VUITextView, NSClickGestureRecognizer, VUITextLayout, VUILabel, NSString, NSAttributedString, NSColor;

@interface FocusableTextView : VUIBaseView <VUILabelBaselineProtocol> {
    NSColor *_backgroundColor;
    VUITextView *_auxilliaryTextView;
    double _defaultLineFragmentPadding;
}

@property (retain, nonatomic) VUITextView *descriptionTextView;
@property (readonly, nonatomic) NSClickGestureRecognizer *moreLabelTapGestureRecognizer;
@property (nonatomic) BOOL needsTextSizeComputation;
@property (nonatomic) long long originalMaximumNumberOfLines;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUILabel *computationLabel;
@property (retain, nonatomic) VUILabel *moreLabel;
@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (retain, nonatomic) NSColor *descriptionTextColor;
@property (nonatomic) long long descriptionTextAlignment;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) BOOL selectable;
@property (readonly, nonatomic, getter=isTextTruncating) BOOL textTruncating;
@property (retain, nonatomic) NSColor *moreLabelTextColor;
@property (nonatomic) BOOL canBeExpanded;
@property (nonatomic) unsigned long long expansionState;
@property (copy, nonatomic) id /* block */ selectionHandler;
@property (readonly, nonatomic) double vuiBaselineHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cornerRadius;
+ (id)textViewWithAttributedString:(id)a0 textLayout:(id)a1 existingTextView:(id)a2;

- (void).cxx_destruct;
- (void)collapse;
- (void)expand;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isExpanded;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTextColor;
- (id)makeTextView;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelFrame;
- (double)_bottomBaselineOffset;
- (void)_configureAlignmentWithTextAlignment:(long long)a0 allowsTextAlignmentOverride:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelExclusionPathFrame;
- (void)_recomputeTextSizeIfNeeded;
- (void)_selectButtonAction:(id)a0;
- (void)_setNeedsTextSizeComputation;
- (void)_updateTextColorsIfNeeded;
- (struct CGSize { double x0; double x1; })computeSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTextLayout:(id)a0;
- (void)layoutSubviews_iOSAndMacOS;
- (void)setSuppressesServicesContextMenu:(BOOL)a0;
- (void)setupViews_iOSAndMacOS;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)vui_baselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
