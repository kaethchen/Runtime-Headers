@class NSDictionary;

@interface LUI2SimpleGlyphButton : LUI2Button

@property (retain) NSDictionary *images;

+ (id)buttonWithIdentifier:(id)a0 target:(id)a1 action:(SEL)a2;
+ (id)buttonWithTitle:(id)a0 imageIdentifier:(id)a1 target:(id)a2 action:(SEL)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)_setupSimpleButtonView;
- (void)_updateImages:(BOOL)a0 highlighted:(BOOL)a1;
- (void)setImageIdentifier:(id)a0;

@end
