@class NSTextField, NSImageView, NSImage, NSTrackingArea, NSLayoutGuide, NSLayoutConstraint, NSButton;

@interface UnifiedFieldCompletionTableCellView : UnifiedFieldCompletionStyledTableCellView {
    NSTextField *_descriptionTextField;
    NSTextField *_checkmarkTextField;
    NSLayoutGuide *_firstColumnLayoutGuide;
    NSLayoutGuide *_leadingContentLayoutGuide;
    NSLayoutConstraint *_firstColumnLayoutGuideWidthRatioConstraint;
    NSLayoutConstraint *_imageToTitleSpacingConstraint;
    NSLayoutConstraint *_firstColumnLayoutGuideToDescriptionSpacingConstraint;
    BOOL _mouseOver;
    NSButton *_deleteButton;
    NSTrackingArea *_trackingArea;
    NSImageView *_trailingImageView;
}

@property (nonatomic) BOOL hasCheckmarkColumn;
@property (nonatomic) BOOL showsCheckmark;
@property (nonatomic) BOOL showsImage;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSImage *trailingImage;
@property (copy, nonatomic) id /* block */ deleteAction;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityEnabled;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (id)_attributedStringForCheckmarkIsSelected:(BOOL)a0;
- (void)_commonUnifiedFieldCompletionTableCellViewInit;
- (void)_deleteRow:(id)a0;
- (id)_makeTextField;
- (BOOL)_shouldAddCheckmarkView;
- (void)_updateCheckmarkView;
- (void)_updateDeleteButtonVisibility;
- (void)configureWithTitle:(id)a0 description:(id)a1 useTwoColumnLayout:(BOOL)a2;
- (void)configureWithTitle:(id)a0 highlightedRanges:(id)a1 titleLineBreakMode:(unsigned long long)a2 description:(id)a3 useTwoColumnLayout:(BOOL)a4;

@end
