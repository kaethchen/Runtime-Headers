@class NSTextField, NSView, NSButton, NSWindow;

@interface iCloudHandleFLUI : NSObject

@property (retain) NSWindow *followUpUISheet;
@property (weak) NSButton *verifyButton;
@property (weak) NSButton *cancelButton;
@property (weak) NSView *followUpUIViewContainer;
@property (weak) NSTextField *titleText;
@property (copy, nonatomic) id /* block */ completionHandler;
@property NSWindow *parentWindow;
@property NSView *followupView;

- (id)init;
- (void).cxx_destruct;
- (void)dismiss;
- (void)awakeFromNib;
- (void)dismissFollowUpUI;
- (BOOL)isShowingSheet;
- (void)showfollowupUIForView:(id)a0 usingWindow:(id)a1 completionHandler:(id /* block */)a2;

@end
