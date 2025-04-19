@interface NSPanel : NSWindow

@property (getter=isFloatingPanel) BOOL floatingPanel;
@property BOOL becomesKeyOnlyIfNeeded;
@property BOOL worksWhenModal;

+ (unsigned long long)_validateStyleMask:(unsigned long long)a0;
+ (BOOL)performKeyEquivalent:(id)a0;

- (id)init;
- (id)_setTempHidden:(BOOL)a0;
- (id)_doSetAccessoryView:(id)a0 topView:(id)a1 bottomView:(id)a2 previousKeyView:(id)a3 oldView:(id *)a4;
- (void)cancel:(id)a0;
- (void)resignKeyWindow;
- (id)_doSetAccessoryView:(id)a0 topView:(id)a1 bottomView:(id)a2 oldView:(id *)a3;
- (BOOL)_implicitlyAllowsFullScreenPrimary;
- (id)_initContent:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3 contentView:(id)a4;
- (id)_initContent:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3 counterpart:(id)a4;
- (void)_replaceAccessoryView:(id)a0 with:(id)a1 topView:(id)a2 bottomView:(id)a3 previousKeyView:(id)a4;
- (BOOL)_showToolTip;
- (BOOL)_toggleOrderedFrontMostWillOrderOut;
- (id)accessibilitySubroleAttribute;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)presentationWindowForError:(id)a0 originatedInWindow:(id)a1;

@end
