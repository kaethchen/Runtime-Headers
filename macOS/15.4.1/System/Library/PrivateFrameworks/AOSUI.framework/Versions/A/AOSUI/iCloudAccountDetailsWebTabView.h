@class NSDictionary, CDPStateUIController, iCloudAddFamilyMember, JSValue, MMWebKitViewController, NSString, NSTimer, NSArray, NSTextField, iCloudTouchBarController, NSWindow, ADMChangePasswordController, NSLayoutConstraint, NSView, NSImage, NSProgressIndicator, AOSUIAccountRecoveryContext, MMWebViewButtonBar, NSTouchBar, MMICAWebKitViewController;
@protocol MBIA2WebKitViewControllerDelegate, iCloudWebViewDelegate, MBIA2UIDelegate;

@interface iCloudAccountDetailsWebTabView : NSObject <iCloudAddFamilyMemberDelegate, MMWebKitViewControllerDelegate, NSTouchBarProvider, ICAUIDelegate, ICAWebKitViewControllerDelegate, iCloudWebViewDelegate, MMWebViewButtonBarDelegate, MBICAUIDelegate> {
    NSView *_webView;
    NSView *_loadingView;
    NSView *_loadingViewCancelButton;
    NSView *_unavailibleView;
    NSView *_unavailibleViewCancelButton;
    NSTextField *_unavailableTextField;
    NSView *_addiCloudMemberViewContainer;
    NSView *_addiCloudMemberView;
    NSProgressIndicator *_loadingSpinner;
    MMICAWebKitViewController *webViewVC;
    NSWindow *_sheet;
    NSView *_sheetContent;
    iCloudAccountDetailsWebTabView *nestedWebView;
    iCloudAddFamilyMember *addMember;
    BOOL _isShowingNestedSheet;
    NSView *_buttonBarView;
    MMWebViewButtonBar *buttonBar;
    NSLayoutConstraint *_buttonBarWidth;
    NSArray *_addMemeberBindVertical;
    NSArray *_addMemeberBindHorizontal;
    struct { unsigned char delegateSetWindowTitle : 1; unsigned char delegateSetWindowMessage : 1; unsigned char delegateSetLeftButtonTitle : 1; unsigned char delegateSetLeftButtonEnabled : 1; unsigned char delegateSetRightButtonTitle : 1; unsigned char delegateSetRightButtonEnabled : 1; unsigned char delegateSetAlternateButtonTitle : 1; unsigned char delegateSetAlternateButtonEnabled : 1; unsigned char delegateSaveFile : 1; unsigned char delegateSaveFileWithName : 1; unsigned char delegateShowTerms : 1; unsigned char delegateAppleIDOptOut : 1; unsigned char delegateDidCancel : 1; unsigned char delegateDidDismiss : 1; unsigned char delegateDidSucceed : 1; unsigned char delegateDidFinishLoading : 1; unsigned char delegateDidFail : 1; unsigned char delegateSkipSignIn : 1; unsigned char delegateModifyURLRequest : 1; unsigned char delegateDidReceiveResponse : 1; unsigned char delegateValidateLocalPassword : 1; unsigned char delegateShouldHideCancelButton : 1; } _flags;
    ADMChangePasswordController *mChangePasswordController;
}

@property NSWindow *parentWindow;
@property (retain) NSTimer *waitTimer;
@property (retain, nonatomic) JSValue *leftButtonCallback;
@property (retain, nonatomic) JSValue *rightButtonCallback;
@property (retain, nonatomic) JSValue *alternateButtonCallback;
@property (retain, nonatomic) CDPStateUIController *cdpStateUIController;
@property (retain, nonatomic) MMWebKitViewController *mmWebKitViewController;
@property (retain, nonatomic) JSValue *mmWebKitViewCallback;
@property (retain) AOSUIAccountRecoveryContext *context;
@property (retain) iCloudTouchBarController *touchBarController;
@property (copy) NSString *viewName;
@property (copy) NSString *url;
@property (copy) NSString *parentURL;
@property (copy) NSString *content;
@property (copy) NSString *userAgentName;
@property (retain) JSValue *callback;
@property (nonatomic) unsigned long long gsType;
@property id<iCloudWebViewDelegate> delegate;
@property (nonatomic) id<MBIA2UIDelegate> mbUIDelegate;
@property (nonatomic) id<MBIA2WebKitViewControllerDelegate> mbWebKitViewControllerDelegate;
@property (copy) NSString *accountID;
@property (nonatomic) unsigned long long webViewType;
@property (retain) NSView *webViewContainer;
@property (retain) NSView *containerView;
@property struct CGSize { double width; double height; } contentSize;
@property BOOL isButtonBarShown;
@property BOOL isResizeAvailible;
@property BOOL isWebClientIsReadyCalled;
@property BOOL isWebClientHasLoadedCalled;
@property BOOL isAddMemberCompleted;
@property (copy) NSDictionary *addMemberContext;
@property (copy) NSString *altDSID;
@property (retain) NSImage *displayImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)endSheet:(id)a0;
- (id)webView;
- (void)cancelPressed:(id)a0;
- (id)urlRequest;
- (void)beginModalSheet;
- (void)button2Pressed:(id)a0;
- (void)cleanUp;
- (void)closeModalSheet;
- (void)OKPressed:(id)a0;
- (void)_fireWaitTimer:(id)a0;
- (void)button1Pressed:(id)a0;
- (void)button3Pressed:(id)a0;
- (void)setAlternateNavButton:(id)a0 callback:(id)a1;
- (void)_createWaitTimer;
- (void)_createWaitTimerWithTimeInternval:(double)a0;
- (void)alternateNavigationButtonClicked:(id)a0;
- (void)beginModalSheetWithInitialWidth:(unsigned long long)a0 initialHeight:(unsigned long long)a1 callback:(id)a2 optionalContext:(id)a3;
- (void)beginModalSheetWithInviteDict:(id)a0;
- (void)beginSheetWithContent:(id)a0 initialWidth:(unsigned long long)a1 initialHeight:(unsigned long long)a2 callback:(id)a3 optionalContext:(id)a4;
- (void)beginSheetWithURL:(id)a0 initialWidth:(unsigned long long)a1 initialHeight:(unsigned long long)a2 callback:(id)a3 optionalContext:(id)a4;
- (void)didChangetoLocation:(id)a0 toSection:(id)a1 withContext:(id)a2;
- (void)dismiss:(id)a0;
- (void)endWebView:(id)a0;
- (void)exitWebView:(id)a0;
- (void)icaSetButtonBar:(id)a0;
- (void)icaWebKitViewControllerDidFail:(id)a0 error:(id)a1;
- (void)icaWebKitViewControllerDidFinishLoading:(id)a0;
- (void)icaWebKitViewControllerSheetDidEnd:(id)a0 withData:(id)a1;
- (void)icaWebKitViewHasLoaded;
- (void)icaWebKitViewIsAvailable;
- (id)initWithContent:(id)a0 andAccountID:(id)a1 parentWindow:(id)a2;
- (id)initWithName:(id)a0 andAccountID:(id)a1 parentWindow:(id)a2;
- (id)initWithURL:(id)a0 andAccountID:(id)a1 parentWindow:(id)a2;
- (void)leftNavigationButtonClicked:(id)a0;
- (void)paymentVerification:(id)a0 callback:(id)a1;
- (void)refreshNotification:(id)a0;
- (void)resetCompleted:(id)a0 password:(id)a1;
- (void)resizeModalSheet:(struct CGSize { double x0; double x1; })a0;
- (void)resizeToWidth:(unsigned long long)a0 heigth:(unsigned long long)a1 callback:(id)a2;
- (void)rightNavigationButtonClicked:(id)a0;
- (void)runAppleIDOptOut:(id)a0;
- (void)saveTOS:(id)a0 content:(id)a1;
- (void)saveTOS:(id)a0 localizedName:(id)a1 content:(id)a2;
- (void)setLeftNavButton:(id)a0 callback:(id)a1;
- (void)setNavTitle:(id)a0;
- (void)setPageSubTitle:(id)a0;
- (void)setRightNavButton:(id)a0 callback:(id)a1;
- (BOOL)shouldHideCancelButton;
- (BOOL)shouldSelectToLocation:(id)a0 toSection:(id)a1;
- (void)showTermsAndConditions:(id)a0 callback:(id)a1;
- (void)showUnavailable:(id)a0;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipSignIn;
- (void)updateContinueButton:(BOOL)a0;
- (id)urlRequestFromInfo:(id)a0;
- (void)validateLocalPasswordWithCompletion:(id)a0;
- (void)wasNotifiedOfDataChange:(id)a0;
- (id)webViewWindow;
- (id)webViewWithInviteDict:(id)a0;
- (id)webViewWithWorkflowDict:(id)a0;
- (BOOL)willChangetoLocation:(id)a0 toSection:(id)a1 withContext:(id)a2;
- (void)beginModalSheetWithAdditionalInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadFailed:(id)a0;
- (void)refreshPage;
- (void)showPurchaseSharingForAltDSID:(id)a0 callback:(id)a1;
- (id)_cdpStateUIProviderWithWindow:(id)a0;
- (void)_closeWebViewWindow:(id)a0;
- (void)_destroyWaitTimer:(id)a0;
- (void)_setSheetSize:(struct CGSize { double x0; double x1; })a0;
- (id)buttonBar;
- (void)cancelAddMemeberPressed:(id)a0;
- (void)continueAddMemeberPressed:(id)a0;
- (void)createChildAccount:(id)a0;
- (void)didSelect;
- (void)icaWebKitControllerDidReceiveResponse:(id)a0 didReceiveResponse:(id)a1;
- (void)icaWebKitViewSwitchToLocation:(id)a0 toSection:(id)a1;
- (id)initWithURL:(id)a0 andAccountID:(id)a1 parentWindow:(id)a2 context:(id)a3;
- (void)initiateMatterhornUpsell:(id)a0 callback:(id)a1;
- (BOOL)isAppleIDPage;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)openSharingWithContext:(id)a0 callback:(id)a1;
- (void)setTermsConfirmDialogTitle:(id)a0;
- (void)setupButtonBarView:(id)a0;
- (void)setupResourceLoadDelegate;
- (BOOL)shouldSelect;
- (void)showNativeAddFamilyMember;
- (void)showSpinnerWithLabelOnNativeScreen:(id)a0;
- (void)showWaitingScreen;
- (void)validateLocalPasswordWithTitle:(id)a0 forcingReprompt:(BOOL)a1 callback:(id)a2;
- (id)webViewWithAltDSID:(id)a0;

@end
