@class HKObserverSet, NSString, HKHealthStore, HKTaskServerProxyProvider, HKSharingRecipientIdentifier;

@interface HKSharingRecipientAuthorizationStore : NSObject <_HKXPCExportable>

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly, nonatomic) HKObserverSet *observers;
@property (readonly, copy, nonatomic) HKSharingRecipientIdentifier *recipientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)_registerRemoteObservers;
- (void)addSharingAuthorizations:(id)a0 completion:(id /* block */)a1;
- (void)clientRemote_didAddSharingAuthorizations:(id)a0;
- (void)clientRemote_didRemoveSharingAuthorizations:(id)a0;
- (void)clientRemote_wasRevoked;
- (void)fetchSharingAuthorizationsMarkedForDeletionWithCompletion:(id /* block */)a0;
- (void)fetchSharingAuthorizationsWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 recipientIdentifier:(id)a1;
- (void)removeSharingAuthorizations:(id)a0 completion:(id /* block */)a1;
- (void)revokeWithCompletion:(id /* block */)a0;

@end
