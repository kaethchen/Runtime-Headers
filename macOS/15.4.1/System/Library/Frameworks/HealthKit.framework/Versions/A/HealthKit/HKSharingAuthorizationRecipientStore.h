@class HKObserverSet, NSArray, HKHealthStore, HKTaskServerProxyProvider, NSString;

@interface HKSharingAuthorizationRecipientStore : NSObject <_HKXPCExportable>

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly, nonatomic) HKObserverSet *observers;
@property (readonly, copy, nonatomic) NSArray *authorizationIdentifiers;
@property (readonly, copy, nonatomic) NSArray *sharingAuthorizations;
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
- (void)clientRemote_didAddRecipientIdentifier:(id)a0 sharingAuthorizations:(id)a1;
- (void)clientRemote_didRemoveRecipientIdentifier:(id)a0 sharingAuthorizations:(id)a1;
- (void)clientRemote_didRevokeRecipientIdentifier:(id)a0;
- (void)fetchRecipientIdentifiersByAuthorizationWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 sharingAuthorizations:(id)a1;

@end
