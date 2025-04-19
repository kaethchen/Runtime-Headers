@class RMObserverStore, NSString, NSObject, RMProviderStore;
@protocol OS_dispatch_queue;

@interface RMProfileStore : NSObject

@property (copy, nonatomic) NSString *ownerIdentifier;
@property (retain, nonatomic) RMProviderStore *providerStore;
@property (retain, nonatomic) RMObserverStore *observerStore;
@property (nonatomic) long long scope;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)profileStoreForOwner:(id)a0;
+ (id)profileStoreForOwner:(id)a0 scope:(long long)a1;

- (void).cxx_destruct;
- (id)initWithOwner:(id)a0 scope:(long long)a1;
- (void)removeProfile:(id)a0 completionHandler:(id /* block */)a1;
- (void)_applyDeclarationsForPayload:(id)a0 declarations:(id)a1 completionHandler:(id /* block */)a2;
- (id)_createStoreReturningError:(id *)a0;
- (void)_findObserverStoreWithCompletionHandler:(id /* block */)a0;
- (void)_findProviderStoreWithCompletionHandler:(id /* block */)a0;
- (id)_metadataKeyForPayload:(id)a0;
- (id)_newDeclarationsMap:(id)a0 error:(id *)a1;
- (id)_oldDeclarationKeysForPayload:(id)a0 store:(id)a1 error:(id *)a2;
- (BOOL)_removeDeclarationKeysForPayload:(id)a0 error:(id *)a1;
- (void)_removeDeclarationsForPayload:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_saveDeclarationKeysForPayload:(id)a0 keys:(id)a1 error:(id *)a2;
- (void)declarationIdentifiersForProfilePayloadIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)installProfile:(id)a0 declarations:(id)a1 completionHandler:(id /* block */)a2;
- (void)observerStoreWithCompletionHandler:(id /* block */)a0;
- (void)providerStoreWithCompletionHandler:(id /* block */)a0;

@end
