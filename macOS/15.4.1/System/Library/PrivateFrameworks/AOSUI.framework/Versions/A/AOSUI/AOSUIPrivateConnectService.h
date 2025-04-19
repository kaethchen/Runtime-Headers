@class ICQInternetPrivacyPrefPaneViewController, NSString, MMWebKitViewController, NSObject, ICQInternetPrivacyViewModel;
@protocol OS_os_log;

@interface AOSUIPrivateConnectService : MMService <MMWebKitViewControllerDelegate>

@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel;
@property (retain, nonatomic) ICQInternetPrivacyPrefPaneViewController *viewController;
@property (retain, nonatomic) MMWebKitViewController *webKitViewController;
@property (retain, nonatomic) id observationToken;
@property BOOL waitingForCSFResponse;
@property (retain, nonatomic) NSObject<OS_os_log> *quotaLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkFeatureAvailabilityForAccountID:(id)a0;
+ (BOOL)shouldShowForAccount:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)displayName;
- (id)icon;
- (void)showMoreInfo:(id)a0;
- (id)statusString;
- (void)updateStatus;
- (id)infoButtonLabel;
- (void)_closeWebViewWindow;
- (BOOL)_isEnabledForDisplay;
- (void)_presentInternetPrivacyModalWithWindow:(id)a0;
- (void)_refreshDetailText:(id)a0;
- (void)_registerForNSPDarwinNotification;
- (void)_unregisterForNSPDarwinNotification;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (id)progressString;
- (void)setEnabled:(BOOL)a0 creating:(BOOL)a1 withWindow:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldHideEnableButton;
- (void)showInternetPrivacyWith:(id)a0;

@end
