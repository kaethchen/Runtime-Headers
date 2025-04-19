@class MMWebKitViewController, NSString;

@interface MMMailService : MMService <MMWebKitViewControllerDelegate, MMServiceDataclassActionPerforming>

@property (retain, nonatomic) MMWebKitViewController *webKitViewController;
@property (nonatomic) BOOL shouldEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)displayName;
- (void)_propertiesChanged:(id)a0;
- (id)icon;
- (void)showMoreInfo:(id)a0;
- (BOOL)canEnable;
- (void)_serviceFailed:(id)a0;
- (id)infoButtonLabel;
- (void)_closeModalWindow;
- (void)_enableMail:(BOOL)a0 creating:(BOOL)a1 withWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)_showClientFailureSheet:(id)a0 enabling:(BOOL)a1;
- (void)disableMailAddressListeners;
- (void)enableMailAddressListeners;
- (BOOL)hasDataToMerge;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)performDataclassActionsForService:(id)a0 willEnable:(BOOL)a1 shouldCreate:(BOOL)a2 withWindow:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)shouldEnableOnLogin;

@end
