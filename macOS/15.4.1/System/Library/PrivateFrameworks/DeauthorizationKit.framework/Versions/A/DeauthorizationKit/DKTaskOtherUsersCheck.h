@class DKMultipleUsersWarningWindowController, NSWindow;

@interface DKTaskOtherUsersCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) DKMultipleUsersWarningWindowController *multipleUsersWindowController;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (BOOL)otherUsersAreLoggedIn;

@end
