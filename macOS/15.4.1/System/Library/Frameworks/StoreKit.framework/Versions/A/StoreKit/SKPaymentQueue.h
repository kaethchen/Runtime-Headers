@class NSArray, SKPaymentQueueClient, NSDictionary, NSError, SKStorefront, SKPaymentTransaction;
@protocol SKPaymentQueueDelegate;

@interface SKPaymentQueue : NSObject {
    id _internal;
}

@property (readonly, nonatomic) SKPaymentQueueClient *paymentQueueClient;
@property (weak) id<SKPaymentQueueDelegate> delegate;
@property (readonly) SKStorefront *storefront;
@property (readonly, nonatomic) NSArray *transactionObservers;
@property (readonly, nonatomic) NSArray *transactions;

+ (id)defaultQueue;
+ (BOOL)canMakePayments;
+ (void)listenForStorefrontChanges;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pauseDownloads:(id)a0;
- (void)addTransactionObserver:(id)a0;
- (void)cancelDownloads:(id)a0;
- (void)removeTransactionObserver:(id)a0;
- (void)resumeDownloads:(id)a0;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)downloadAdded:(id)a0;
- (void)downloadRemoved:(id)a0;
- (void)downloadStatusChanged:(id)a0;
- (void)forceSandboxForBundleIdentifier:(id)a0 untilDate:(id)a1;
- (void)presentCodeRedemptionSheet;
- (void)removedEntitlementsForProductIdentifiers:(id)a0;
- (void)removedTransactions:(id)a0;
- (void)updatedTransactions:(id)a0;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)stopListeningForPurchaseIntents;
- (void)startDownloads:(id)a0;
- (void)_checkForMessages;
- (void)_checkServerQueueForced:(BOOL)a0;
- (id)_initSKPaymentQueue;
- (void)_logEventWithPrimaryError:(id)a0 mappedError:(id)a1 inAppPurchaseID:(id)a2 userAction:(long long)a3;
- (void)_notifyObserversAboutChanges:(id)a0 sendUpdatedDownloads:(BOOL)a1;
- (void)_notifyObserversAboutRemovals:(id)a0;
- (void)_processTransactionDict:(id)a0 forTransaction:(id)a1 error:(id)a2;
- (void)_removeLocalTransaction:(id)a0;
- (void)_removeNilTransactionObservers;
- (void)_updatedTransactions:(id)a0 restored:(BOOL)a1;
- (void)addPayment:(id)a0;
- (void)clearTransactions;
- (void)finishTransaction:(id)a0;
- (id)initWithPaymentQueueClient:(id)a0;
- (void)listenForPurchaseIntents;
- (void)notifyObserversForNewStorefront:(id)a0;
- (void)notifyPurchaseIntentObserversForProducts:(id)a0;
- (void)processTransaction:(SKPaymentTransaction *)a0 completionHandler:(void (^)(NSDictionary *, NSError *))a1;
- (void)removeTransactionWithID:(unsigned long long)a0;
- (void)restoreCompletedTransactions;
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)a0;
- (BOOL)shouldContinueTransaction:(id)a0 inNewStorefront:(id)a1;
- (void)showPriceConsentIfNeeded;

@end
