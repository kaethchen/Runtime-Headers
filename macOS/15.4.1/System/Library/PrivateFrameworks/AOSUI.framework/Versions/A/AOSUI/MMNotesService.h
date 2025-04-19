@class MMWebKitViewController, NSString;

@interface MMNotesService : MMService <MMWebKitViewControllerDelegate, MMServiceDataclassActionPerforming, MMServicePreflightProtocol>

@property (retain, nonatomic) MMWebKitViewController *webKitViewController;
@property (nonatomic) BOOL addressCreationPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_propertiesChanged:(id)a0;
- (void)_setEnabled:(BOOL)a0;
- (id)icon;
- (void)_serviceFailed:(id)a0;
- (void)_closeModalWindow;
- (BOOL)_hasEmailAddress;
- (void)_setEnabled:(BOOL)a0 withOptions:(int)a1;
- (void)_showClientFailureSheet:(id)a0;
- (void)_showMergeConfirmationSheet:(id)a0;
- (void)disableNotesAddressListeners;
- (void)enableNotesAddressListeners;
- (id)initWithServiceID:(id)a0 forAccount:(id)a1;
- (BOOL)isDataService;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)performDataclassActionsForService:(id)a0 willEnable:(BOOL)a1 shouldCreate:(BOOL)a2 withWindow:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)shouldEnableOnLogin;

@end
