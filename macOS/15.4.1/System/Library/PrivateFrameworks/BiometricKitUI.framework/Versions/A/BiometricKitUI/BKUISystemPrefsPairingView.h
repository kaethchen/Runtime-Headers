@class NSButton, NSProgressIndicator, NSTextField;

@interface BKUISystemPrefsPairingView : NSView

@property (retain) NSTextField *mesaEnrollPairingPrompt;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSProgressIndicator *pairingSpinner;
@property (copy, nonatomic) id /* block */ cancelAction;

- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_setupLabel;
- (id)initWithCancelAction:(id /* block */)a0;

@end
