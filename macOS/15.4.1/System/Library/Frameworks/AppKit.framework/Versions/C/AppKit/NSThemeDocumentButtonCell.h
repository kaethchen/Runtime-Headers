@interface NSThemeDocumentButtonCell : NSButtonCell

- (id)accessibilityActionDescription:(id)a0;
- (long long)_bezelPresentationStateInView:(id)a0;
- (id)_documentImageContentStyleInView:(id)a0;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityTitleAttribute;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
