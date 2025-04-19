@interface _NSTextViewportSelectionLineView : NSView

- (id)description;
- (void)_windowChangedKeyState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldBeArchived;
- (BOOL)translatesAutoresizingMaskIntoConstraints;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)wantsUpdateLayer;

@end
