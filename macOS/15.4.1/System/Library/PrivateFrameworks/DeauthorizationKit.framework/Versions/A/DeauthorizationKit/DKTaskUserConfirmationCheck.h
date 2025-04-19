@class NSWindow, DKConfirmationWindowController;

@interface DKTaskUserConfirmationCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) DKConfirmationWindowController *confirmationWindowController;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;

@end
