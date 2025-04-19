@class NSView, NSButton;

@interface CPUI_EnrollmentWizardWindowController : NSWindowController

@property (retain) NSView *wizardContentView;
@property (retain) NSButton *nextButton;
@property (retain) NSButton *cancelButton;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)buttonClicked:(id)a0;

@end
