@class NSString;

@interface ABOnBlueButton : NSButton

@property (weak) id privateTarget;
@property SEL privateAction;
@property (retain, nonatomic) NSString *tintedImageCacheKey;
@property (nonatomic, getter=isRoundPlatterStyle) BOOL roundPlatterStyle;
@property (nonatomic) SEL rightClickAction;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (void)rightMouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)buttonWasClicked:(id)a0;
- (void)setNamedImageWrapper:(id)a0;
- (void)performPrivateAction;
- (void)performRightClickAction;
- (void)resetButtonStateAfterMouseUp;
- (void)resetButtonStateAfterRightMouseUp;

@end
