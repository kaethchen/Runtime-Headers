@class NSString, MMWebViewButtonBar, NSView, NSProgressIndicator, MMICAWebKitViewController, NSButton, NSWindow;

@interface MMPasswordChangeWebKitViewController : NSObject <ICAWebKitViewControllerDelegate, ICAUIDelegate, MMWebViewButtonBarDelegate>

@property (retain, nonatomic) MMICAWebKitViewController *icaWebKitVC;
@property (copy, nonatomic) id /* block */ passwordChangeCompletionHandler;
@property (retain, nonatomic) NSWindow *parentWindow;
@property (retain, nonatomic) NSWindow *window;
@property (weak, nonatomic) NSView *windowContentView;
@property (weak, nonatomic) NSProgressIndicator *loadingProgress;
@property (weak, nonatomic) NSView *loadingView;
@property (weak, nonatomic) NSButton *loadingCancelButton;
@property (weak, nonatomic) NSView *webViewContentView;
@property (weak, nonatomic) NSView *webView;
@property (weak, nonatomic) NSView *buttonBarContainer;
@property (retain, nonatomic) MMWebViewButtonBar *buttonBar;
@property struct CGSize { double width; double height; } contentSize;
@property BOOL isButtonBarShown;
@property BOOL isResizeAvailible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)endSheet:(id)a0;
- (void)button2Pressed:(id)a0;
- (void)button1Pressed:(id)a0;
- (void)button3Pressed:(id)a0;
- (void)beginSheetWithContent:(id)a0 initialWidth:(unsigned long long)a1 initialHeight:(unsigned long long)a2 callback:(id)a3 optionalContext:(id)a4;
- (void)beginSheetWithURL:(id)a0 initialWidth:(unsigned long long)a1 initialHeight:(unsigned long long)a2 callback:(id)a3 optionalContext:(id)a4;
- (void)didChangePassword:(id)a0 toNewPassword:(id)a1 accountID:(id)a2;
- (void)exitWebView:(id)a0;
- (void)icaSetButtonBar:(id)a0;
- (void)icaWebKitViewControllerDidFail:(id)a0 error:(id)a1;
- (void)icaWebKitViewControllerDidFinishLoading:(id)a0;
- (void)icaWebKitViewControllerSheetDidEnd:(id)a0 withData:(id)a1;
- (void)icaWebKitViewIsAvailable;
- (void)resizeToWidth:(unsigned long long)a0 heigth:(unsigned long long)a1 callback:(id)a2;
- (id)webViewWindow;
- (void)runPasswordChangeSheetForWindow:(id)a0 accountID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addButtonBarView:(id)a0;
- (void)_handleGSTokenUpdateError:(id)a0;
- (void)cancelPasswordChangeWindow:(id)a0;
- (void)endPasswordChangeSheet:(long long)a0;
- (void)icaWebKitViewSwitchToLocation:(id)a0 toSection:(id)a1;
- (BOOL)isButtonBarShowing;
- (BOOL)isWebViewShowing;
- (void)resizeWindow:(id)a0 toWidth:(unsigned long long)a1 heigth:(unsigned long long)a2;
- (void)showNativeAddFamilyMember;
- (void)showPasswordChangeSheet:(id)a0 accountID:(id)a1;
- (id)urlRequestForPasswordChange:(id)a0 error:(id *)a1;

@end
