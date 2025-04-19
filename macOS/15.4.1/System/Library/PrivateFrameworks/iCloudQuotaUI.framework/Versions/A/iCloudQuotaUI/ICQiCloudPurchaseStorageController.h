@class ICQUpgradeFlowManager, NSString, MMWebKitViewController, NSWindow;

@interface ICQiCloudPurchaseStorageController : NSObject <MMWebKitViewControllerDelegate, ICQUpgradeFlowManagerDelegate>

@property (retain) NSWindow *parentWindow;
@property (retain) NSString *accountID;
@property (retain) MMWebKitViewController *purchaseWebKitViewController;
@property (retain, nonatomic) ICQUpgradeFlowManager *upgradeFlowManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)openPurchaseStorageForAccountID:(id)a0 withWindow:(id)a1 andWithQueryParams:(id)a2 andStorageContext:(id)a3;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)_closeWebviewWindow:(BOOL)a0;
- (void)startDynamicUIFlowWithQueryParams:(id)a0;
- (void)startLegacyWebViewFlowWithQueryParams:(id)a0 andStorageContext:(id)a1;
- (void)startManageStorageWebViewForAccountID:(id)a0 withWindow:(id)a1 andStorageContext:(id)a2;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;

@end
