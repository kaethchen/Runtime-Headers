@class TabDialogDimmingView, NSString, WBSTabDialogManager, BrowserViewController, TabDialogViewController, TabDialogInstaller;
@protocol TabDialogPresentationManagerDelegate;

@interface TabDialogPresentationManager : NSObject <TabDialogViewControllerDelegate, TabDialogPresenter> {
    BrowserViewController *_browserViewController;
    WBSTabDialogManager *_tabDialogManager;
    TabDialogDimmingView *_dimmingView;
    TabDialogInstaller *_tabDialogInstallerForRedirection;
    unsigned long long _browsingMode;
}

@property (readonly, nonatomic) TabDialogViewController *tabDialogViewController;
@property (weak, nonatomic) id<TabDialogPresentationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isShowingTabDialog) BOOL showingTabDialog;
@property (readonly, nonatomic) long long currentTabDialogType;

- (void).cxx_destruct;
- (void)_didDismissTabDialogs;
- (void)_dismissRedirectedDialogWithResponseBlock:(id /* block */)a0;
- (id)_ensureTabDialogInstallerForRedirection;
- (BOOL)_isRedirectingDialogPresentation;
- (void)_presentRedirectedDialogWithViewController:(id)a0;
- (BOOL)_shouldSkipAnimationsDuringDismissal;
- (struct { int x0; unsigned long long x1; })_tabDialogSlot;
- (long long)_tabDialogVerticalPlacementPolicyForViewController:(id)a0;
- (id)_tabDialogViewControllerForConfiguration:(id)a0;
- (void)_transplantDialogAndDimmingViewToTabContentViewIfNeeded;
- (void)cancelAllDialogsFromOwningWebView;
- (void)cancelAllDialogsFromOwningWebViewOnCommittedNavigationWithURL:(id)a0;
- (void)dismissTabDialog;
- (void)dismissTabDialogWithResponse:(id)a0;
- (id)initWithBrowsingMode:(unsigned long long)a0;
- (void)owningWebViewWillNavigate;
- (void)presentTabDialogWithConfiguration:(id)a0 dismissalBlock:(id /* block */)a1 blocksWebProcessUntilDismissed:(BOOL)a2 cancellationExemptions:(id)a3;
- (void)showJavaScriptAlertWithMessage:(id)a0 originStringForAccessibility:(id)a1 responseHandler:(id /* block */)a2;
- (void)showJavaScriptConfirmWithMessage:(id)a0 originStringForAccessibility:(id)a1 responseHandler:(id /* block */)a2;
- (void)showJavaScriptPromptWithMessage:(id)a0 defaultResponse:(id)a1 originStringForAccessibility:(id)a2 responseHandler:(id /* block */)a3;
- (void)startRedirectingTabDialogPresentationForBrowserViewController:(id)a0;
- (void)stopRedirectingTabDialogs;
- (void)tabDialogViewController:(id)a0 dismissCurrentDialogForTabID:(unsigned long long)a1 withResponse:(id)a2;
- (void)transplantDialogToNewInstallationTarget;
- (void)unblockWebProcess:(int)a0;
- (void)updateCurrentDialogWithConfiguration:(id)a0 dismissalBlock:(id /* block */)a1;

@end
