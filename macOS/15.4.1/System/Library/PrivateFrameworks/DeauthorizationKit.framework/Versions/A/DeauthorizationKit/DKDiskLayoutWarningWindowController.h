@class NSImageView, NSTextField, NSString, NSButton, NSWindow;

@interface DKDiskLayoutWarningWindowController : NSWindowController

@property (weak) NSImageView *imageView;
@property (weak) NSTextField *diskLayoutWarningMessageTextField;
@property (weak) NSTextField *diskLayoutWarningInfoTextField;
@property (weak) NSButton *cancelButton;
@property (weak) NSButton *continueButton;
@property (retain) NSWindow *parentWindow;
@property (retain) NSString *customMessageText;
@property (retain) NSString *customTitleText;
@property BOOL fatalLayoutDetected;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)cancelClicked:(id)a0;
- (void)updateView;
- (void)continueClicked:(id)a0;
- (void)openDiskUtilitiyButtonClicked:(id)a0;

@end
