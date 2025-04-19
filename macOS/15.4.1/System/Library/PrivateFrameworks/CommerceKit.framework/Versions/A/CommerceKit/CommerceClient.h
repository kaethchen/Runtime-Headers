@class NSString, NSMutableDictionary, NSMapTable;

@interface CommerceClient : NSObject <CommerceClient>

@property (retain) NSMutableDictionary *accountObservers;
@property (retain) NSMutableDictionary *purchaseObservers;
@property (retain) NSMutableDictionary *downloadObservers;
@property (retain) NSMapTable *purchaseQueueDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_cleanUpPurchases;
- (id)_dialogContextForTransaction:(id)a0;
- (void)_resetServiceObservers;
- (id)addAccountObserver:(id)a0 forAccountStore:(id)a1;
- (id)addDownloadObserver:(id)a0 forDownloadQueue:(id)a1;
- (id)addPurchaseObserver:(id)a0 forPurchaseQueue:(id)a1;
- (void)authenticateWithDialog:(id)a0 settings:(id)a1 forTransaction:(id)a2 reply:(id /* block */)a3;
- (void)displayDialog:(id)a0 forTransaction:(id)a1 reply:(id /* block */)a2;
- (void)downloadQueueWithIdentifier:(id)a0 addedDownloads:(id)a1;
- (void)downloadQueueWithIdentifier:(id)a0 statusChangedForDownloads:(id)a1;
- (void)promptTouchIDEnableForTransaction:(id)a0 reply:(id /* block */)a1;
- (void)purchaseQueueWithIdentifier:(id)a0 addedTransactions:(id)a1;
- (void)purchaseQueueWithIdentifier:(id)a0 updatedTransactions:(id)a1;
- (void)removeAccountObserver:(id)a0 forAccountStore:(id)a1;
- (void)removeDownloadObserver:(id)a0 forDownloadQueue:(id)a1;
- (void)removePurchaseObserver:(id)a0 forPurchaseQueue:(id)a1;
- (void)serviceInterrupted;
- (void)serviceInvalidated;
- (void)setDelegate:(id)a0 forPurchaseQueue:(id)a1;
- (void)shouldContinueTransaction:(id)a0 withNewStorefront:(id)a1 reply:(id /* block */)a2;
- (void)signChallenge:(id)a0 forTransaction:(id)a1 reply:(id /* block */)a2;
- (void)storeClient:(id)a0 changedPrimaryAccount:(id)a1;
- (void)unsetDelegateForPurchaseQueueWithIdentifier:(id)a0;

@end
