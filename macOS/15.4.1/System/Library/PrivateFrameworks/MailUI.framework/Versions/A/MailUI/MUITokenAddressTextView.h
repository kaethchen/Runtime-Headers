@class MUIAddressField;

@interface MUITokenAddressTextView : NSTokenTextView

@property (weak, nonatomic) MUIAddressField *addressField;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)designatedFocusRingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)noteFocusRingMaskChanged;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)supportsAdaptiveImageGlyph;
- (void)_muiTokenAddressTextViewCommonInit;

@end
