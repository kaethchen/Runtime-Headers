@class NSColor, ACSHHoverTextView, NSFont, ACSHPanelHoverTextGroup;

@interface ACSHPanelHoverTextView : ACSHPanelElementView

@property (class, readonly, nonatomic) double defaultUnscaledFontSize;

@property (retain, nonatomic) ACSHHoverTextView *_textView;
@property (readonly, nonatomic) NSFont *_scaledFont;
@property (readonly, nonatomic) ACSHPanelHoverTextGroup *_hoverTextGroup;
@property (readonly, nonatomic) NSColor *_textColor;

+ (double)desiredHeightForScaledFontSize:(double)a0;
+ (id)_createLayoutManager;
+ (struct CGSize { double x0; double x1; })_textContainerInsetForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaledFontSize:(double)a1;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (void)_colorsUpdated;
- (id)_createTextViewWithScaledFontSize:(double)a0;
- (void)_fontSizeUpdated;
- (void)_modelUpdated;
- (void)_updateLayoutForTextView:(id)a0 scaledFont:(id)a1;
- (void)_updateTextViewLayout;
- (void)initView;
- (void)setPanelElement:(id)a0 animated:(BOOL)a1;

@end
