@class NSVisualEffectView;

@interface CPKCharactersHeaderRowView : NSTableRowView

@property NSVisualEffectView *backgroundView;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustTransparency;

@end
