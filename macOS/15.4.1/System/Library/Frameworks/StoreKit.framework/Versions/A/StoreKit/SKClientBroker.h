@class NSString, NSMapTable, NSHashTable;

@interface SKClientBroker : NSObject <SKClientProtocol> {
    NSMapTable *_clients;
    NSHashTable *_subscriptionStatusListeners;
    NSHashTable *_transactionListeners;
    NSHashTable *_messageListeners;
    int _unfinishedTransactionsToken;
    int _receivedPurchaseIntentsToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultBroker;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)downloadAdded:(id)a0;
- (void)downloadRemoved:(id)a0;
- (void)downloadStatusChanged:(id)a0;
- (void)pendingMessages:(id)a0;
- (void)receivedStatuses:(id)a0;
- (void)receivedTransactions:(id)a0;
- (void)removedEntitlementsForProductIdentifiers:(id)a0;
- (void)removedTransactions:(id)a0;
- (void)updatedTransactions:(id)a0;
- (void)unregisterClientWithIdentifier:(id)a0;
- (void)_cancelNotifyTokenIfValid:(int)a0;
- (void)_handleUnfinishedTransactionsNotification;
- (id)_unfinishedTransactionsNotificationName;
- (BOOL)hasTransactionListener;
- (void)registerClient:(id)a0 withIdentifier:(id)a1;
- (void)registerMessageListener:(id)a0;
- (void)registerSubscriptionStatusListener:(id)a0;
- (void)registerTransactionListener:(id)a0;
- (void)unregisterMessageListener:(id)a0;
- (void)unregisterSubscriptionStatusListener:(id)a0;
- (void)unregisterTransactionListener:(id)a0;

@end
