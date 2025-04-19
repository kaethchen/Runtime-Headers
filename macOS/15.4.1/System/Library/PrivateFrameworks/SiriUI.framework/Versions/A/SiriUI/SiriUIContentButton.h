@class NSColor;

@interface SiriUIContentButton : NSButton {
    BOOL _isRenderingImageTemplate;
    NSColor *_defaultColorForTemplate;
    NSColor *_highlightColorForTemplate;
}

@property (retain, nonatomic) NSColor *textColor;

+ (id)button;
+ (Class)cellClass;
+ (id)buttonWithImageMask:(id)a0;
+ (id)buttonWithImageTemplate:(id)a0;
+ (id)buttonWithLightWeightFont;
+ (id)buttonWithMediumWeightFont;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setTitle:(id)a0;
- (void)layout;
- (void)setHighlighted:(BOOL)a0;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)setContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)_updateTintColor;
- (id)_attributedStringFromString:(id)a0 withColor:(id)a1;
- (void)_setButtonAlternateTitleToColor:(id)a0;
- (void)_setButtonTitleToColor:(id)a0;
- (void)_setIsRenderingImageTemplate:(BOOL)a0;
- (id)_siriUIContentButtonCell;
- (void)setDefaultColorForTemplate:(id)a0;
- (void)setHighlightColorForTemplate:(id)a0;

@end
