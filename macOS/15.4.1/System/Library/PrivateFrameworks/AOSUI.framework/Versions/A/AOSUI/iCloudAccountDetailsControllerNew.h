@class NSView, NSString, CastlePlugin, NSTouchBar, iCloudAccountDetailsTabView, NSMutableDictionary, NSAccountDetailsWebTabViewItem, MMWebViewButtonBar, MM_Account, NSWindow, iCloudAccountsDetailsGeneral;

@interface iCloudAccountDetailsControllerNew : NSViewController <NSTouchBarProvider, iCloudWebViewDelegate, NSTableViewDelegate, MMWebViewButtonBarDelegate> {
    NSView *_accountDetailsView;
    iCloudAccountDetailsTabView *_accountDetailsTabView;
    NSAccountDetailsWebTabViewItem *_generalTabViewItem;
    NSAccountDetailsWebTabViewItem *_contactTabViewItem;
    NSAccountDetailsWebTabViewItem *_securityTabViewItem;
    NSAccountDetailsWebTabViewItem *_paymentTabViewItem;
    NSAccountDetailsWebTabViewItem *_devicesTabViewItem;
    NSWindow *_sheet;
    MMWebViewButtonBar *buttonBar;
    NSView *_buttonBarView;
    iCloudAccountsDetailsGeneral *_generalController;
}

@property (retain) MM_Account *account;
@property (retain) CastlePlugin *plugin;
@property NSWindow *parentWindow;
@property NSString *sectionToOpen;
@property (retain) NSMutableDictionary *buttonBarDictionaries;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_requestQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelOperation:(id)a0;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (BOOL)tabView:(id)a0 shouldSelectTabViewItem:(id)a1;
- (void)tabView:(id)a0 willSelectTabViewItem:(id)a1;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)a0;
- (void)button2Pressed:(id)a0;
- (void)button1Pressed:(id)a0;
- (void)button3Pressed:(id)a0;
- (void)endWebView:(id)a0;
- (void)icaSetButtonBar:(id)a0 webViewName:(id)a1;
- (BOOL)shouldHideCancelButton;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)loadFailed:(id)a0;
- (void)_handleGetVerificationCode:(id /* block */)a0;
- (void)_handleInvalidGSToken:(id /* block */)a0;
- (void)_isGSTokenValid:(id /* block */)a0;
- (void)_showAccountDetailsWithCompletion:(id /* block */)a0;
- (void)_showGSFailureError:(id /* block */)a0;
- (void)_showNetworkReachableError:(id /* block */)a0;
- (void)changeTabNotification:(id)a0;
- (void)changeTabToSection:(id)a0;
- (id)initWithAccount:(id)a0 andPlugin:(id)a1;
- (void)setupTabViews;
- (void)showNewAccountDetailsForAccount:(id)a0 inWindow:(id)a1 andOpenSection:(id)a2 withCompletion:(id /* block */)a3;

@end
