@class NSTextField, NSBox, NSView, NSString, NSButton;

@interface LUI2PasswordHintViewController : LUI2PopoverViewController

@property NSView *hintContainer;
@property NSTextField *hintTextField;
@property NSBox *line;
@property NSView *resetContainer;
@property NSButton *appleIDButton;
@property NSButton *resetUsingRecoveryButton;
@property BOOL canResetWithAppleID;
@property BOOL canResetWithRecovery;
@property (retain) NSString *hint;
@property (copy) id /* block */ completionHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)appleIDButtonPressed:(id)a0;
- (void)presentUsingViewController:(id)a0 asPopoverRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 preferredEdge:(unsigned long long)a3 behavior:(long long)a4;
- (void)resetUsingRecoveryPressed:(id)a0;

@end
