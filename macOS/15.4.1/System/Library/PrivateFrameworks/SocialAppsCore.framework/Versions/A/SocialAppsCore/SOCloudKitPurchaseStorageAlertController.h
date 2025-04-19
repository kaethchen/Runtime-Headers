@class NSString, NSWindow, iCloudPurchaseStorageController;

@interface SOCloudKitPurchaseStorageAlertController : NSObject <IMCloudKitEventHandler>

@property (readonly) iCloudPurchaseStorageController *purchaseStorageController;
@property (weak) NSWindow *window;
@property (copy) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)removeObservers;
- (void)cloudKitEventNotificationManager:(id)a0 didPerformAdditionalStorageRequiredCheck:(BOOL)a1 additionalStorageRequired:(unsigned long long)a2 forAccountId:(id)a3 error:(id)a4;
- (void)addObservers;
- (void)_windowDidEndSheet:(id)a0;
- (void)beginSheetModalForWindow:(id)a0 completion:(id /* block */)a1;
- (void)presentFetchingAccountIDFailedAlertWithError:(id)a0;
- (void)presentPurchaseStorageControllerWithAccountID:(id)a0;
- (void)presentUserNeedsMoreStorageAlertWithAccountID:(id)a0;

@end
