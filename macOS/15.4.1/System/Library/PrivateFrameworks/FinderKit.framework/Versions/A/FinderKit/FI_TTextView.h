@interface FI_TTextView : NSTextView {
    BOOL _doesntAcceptFirstResponder;
}

- (id)initWithCoder:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEditable:(BOOL)a0;
- (void)initCommon;
- (void)awakeCommon;

@end
