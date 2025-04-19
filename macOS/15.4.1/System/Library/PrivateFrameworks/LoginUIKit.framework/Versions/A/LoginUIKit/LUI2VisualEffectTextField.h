@class NSTextField, NSString, NSFont, NSColor;

@interface LUI2VisualEffectTextField : LUI2VisualEffectView

@property (retain) NSTextField *textField;
@property long long alignment;
@property (copy) NSFont *font;
@property (copy) NSString *stringValue;
@property (copy) NSColor *textColor;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupView;
- (id)_textMask;

@end
