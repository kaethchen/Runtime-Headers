@class NSString;

@interface ASDStoreKitService : NSObject <ASDStoreKitClientProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_serviceConnection;
+ (void)_serviceConnectionInvalidated;
+ (id)_storeKitClientInterface;
+ (id)_storeKitServiceInterface;
+ (void)handleNewTokenFamily:(id)a0 bundleID:(id)a1 withReply:(id /* block */)a2;
+ (void)processStoreKitPurchase:(id)a0 withResultHandler:(id /* block */)a1;
+ (BOOL)shouldProcessStoreKitPurchase:(id)a0;
+ (id)storeKitServiceWithErrorHandler:(id /* block */)a0;

- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)askToShowMessageWithReplyBlock:(id /* block */)a0;
- (void)downloadAdded:(id)a0;
- (void)downloadRemoved:(id)a0;
- (void)downloadStatusChanged:(id)a0;
- (void)hasAnyMessageListenersWithReply:(id /* block */)a0;
- (void)pendingMessages:(id)a0;
- (void)receivedStatuses:(id)a0;
- (void)receivedTransactions:(id)a0;
- (void)removedEntitlementsForProductIdentifiers:(id)a0;
- (void)removedTransactions:(id)a0;
- (void)shouldContinueTransaction:(id)a0 withNewStorefront:(id)a1 replyBlock:(id /* block */)a2;
- (void)storefrontChanged:(id)a0;
- (void)updatedTransactions:(id)a0;

@end
