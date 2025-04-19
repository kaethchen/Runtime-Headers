@protocol MMLinkTextFieldDelegate;

@interface MMLinkTextField : NSTextField

@property id<MMLinkTextFieldDelegate> linkDelegate;

- (id)initWithCoder:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;

@end
