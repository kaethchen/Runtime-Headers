@class NSButton, NSTextField;

@interface AKNoCodeReceivedController : NSViewController

@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSTextField *messageTextField;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSButton *alternativeButton;
@property (retain, nonatomic) NSButton *defaultButton;
@property (copy, nonatomic) id /* block */ cancelButtonAction;
@property (copy, nonatomic) id /* block */ alternateButtonAction;
@property (copy, nonatomic) id /* block */ defaultButtonAction;

- (id)init;
- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)alternativeButtonPressed:(id)a0;
- (void)defaultButtonPressed:(id)a0;

@end
