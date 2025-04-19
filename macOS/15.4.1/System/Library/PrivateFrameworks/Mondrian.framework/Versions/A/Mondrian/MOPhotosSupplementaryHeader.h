@class NSTextField, NSString, CAShapeLayer, NSVisualEffectView, AXTextField, NSColor;

@interface MOPhotosSupplementaryHeader : MOMediaViewSupplementary <NSAccessibilityGroup, MOMediaSectionFormattingDelegate> {
    NSVisualEffectView *_backdropView;
    BOOL _wasShowingHeaderLine;
    BOOL _wasShowingFooterLine;
    CAShapeLayer *_shapeLayer;
    BOOL _propogatedMouseDownToCollectionView;
    BOOL _needsSizingSubviews;
}

@property (readonly, nonatomic) AXTextField *titleTextField;
@property (readonly, nonatomic) NSTextField *subtitleTextField;
@property (nonatomic) BOOL showHeaderLine;
@property (nonatomic) BOOL showFooterLine;
@property (nonatomic) BOOL showBlurBackground;
@property (nonatomic) double titleTextFieldMinimumWidth;
@property (nonatomic) double titleTextFieldMaximumWidth;
@property (nonatomic) double subtitleTextFieldMinimumWidth;
@property (nonatomic) double subtitleTextFieldMaximumWidth;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double textFieldInset;
@property (nonatomic) double textFieldSpacing;
@property (retain, nonatomic) NSColor *lineColor;
@property (nonatomic) double relativeDistanceFromFloatingPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)layout;
- (void)rightMouseDown:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)wantsUpdateLayer;
- (void)_updateShapeLayer;
- (void)MOPhotosSupplementaryHeaderCommonInit;
- (double)headerLineWidth;
- (void)_drawHeaderFooterLine;
- (void)_showHideHeaderFooter;
- (void)accessibilityPerformPressWithObject:(id)a0;
- (BOOL)canUseBlurBackground;
- (double)constrainedWidth:(double)a0 withMinimumWidth:(double)a1 maximumWidth:(double)a2 availableWidth:(double)a3;
- (id)mediaSection:(id)a0 stringForRangeFromDate:(id)a1 toDate:(id)a2;
- (void)prepareForRecycling;
- (BOOL)resizeTextFields;
- (double)textFieldsSpacing;
- (void)updateWithMediaSection:(id)a0;

@end
