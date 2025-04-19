@class NSWindow, NSTextField;

@interface DKConfirmationWindowController : NSWindowController

@property (weak) NSTextField *messageTextField;
@property (weak) NSTextField *infoTextField;
@property (retain) NSWindow *parentWindow;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)cancelClicked:(id)a0;
- (void)setupView;
- (void)eraseClicked:(id)a0;

@end
