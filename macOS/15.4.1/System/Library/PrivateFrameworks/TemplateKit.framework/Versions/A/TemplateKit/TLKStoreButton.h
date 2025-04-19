@class NSView, TLKProminenceView, TLKLabel, TLKRichText;

@interface TLKStoreButton : TLKSButton

@property (retain) TLKLabel *label;
@property (retain) NSView *backgroundView;
@property (retain) TLKProminenceView *highlightView;
@property BOOL isEmphasized;
@property (nonatomic) BOOL useCompactMode;
@property (copy, nonatomic) TLKRichText *richTitle;
@property (nonatomic) double cornerRadius;

+ (Class)cellClass;

- (id)init;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)layout;
- (id)title;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityTitle;
- (BOOL)allowsVibrancy;
- (id)font;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBackgroundStyle:(long long)a0;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)tlk_updateForAppearance:(id)a0;

@end
