@class TCPAddressField;

@interface TCPTokenAddressTextView : NSTokenTextView

@property (nonatomic) TCPAddressField *addressField;

- (id)initWithCoder:(id)a0;
- (id)designatedFocusRingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)noteFocusRingMaskChanged;
- (BOOL)performDragOperation:(id)a0;
- (void)_tcpTokenAddressTextViewCommonInit;

@end
