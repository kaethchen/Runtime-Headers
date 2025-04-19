@class NSTextField, NSArray, NSPopUpButton, NSButton;

@interface GKReportProblemController : GKComposeController

@property NSTextField *actionDescriptionField;
@property NSPopUpButton *concernPopUpButton;
@property NSButton *sendButton;
@property NSTextField *messageField;
@property (retain) NSArray *possibleConcerns;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)done:(id)a0;
- (void)viewWillAppear;
- (id)selectedConcern;
- (void)updateUIWithConcerns:(id)a0;
- (void)validateReadyToSend;

@end
