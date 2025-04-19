@class NSString, MMWebKitViewController, ACAccount, NSWindow;

@interface iCloudAccountSubscriptionFeaturesController : NSObject <MMWebKitViewControllerDelegate>

@property (retain, nonatomic) ACAccount *account;
@property (weak, nonatomic) NSWindow *window;
@property (retain, nonatomic) MMWebKitViewController *webKitViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_saveNotificationShown;
- (void)_showSubscriptionFeatures;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)showSubscriptionFeaturesIfNeededForAccount:(id)a0 inWindow:(id)a1;

@end
