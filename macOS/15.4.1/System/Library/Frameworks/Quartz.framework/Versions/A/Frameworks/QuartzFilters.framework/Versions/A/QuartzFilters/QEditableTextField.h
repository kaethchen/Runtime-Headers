@class NSString;

@interface QEditableTextField : NSTextField <NSTextFieldDelegate>

@property BOOL allowsEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginEditing;
- (void)endEditing;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)controlTextDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;

@end
