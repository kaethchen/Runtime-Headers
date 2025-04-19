@class NSString;
@protocol ABAccountPersistenceBackend;

@interface ABDelegateAccountPersistenceBackendDecorator : NSObject <ABAccountPersistenceBackend>

@property (readonly, nonatomic) id<ABAccountPersistenceBackend> delegateBackend;
@property (readonly, nonatomic) id<ABAccountPersistenceBackend> parentBackend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accountTypeIdentifier;
- (id)acAccountIdentifier;
- (void)deletePersistentValuesWithAddressBook:(id)a0;
- (id)initWithDelegateBackend:(id)a0 parentBackend:(id)a1;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (void)rediscoverPersistentValuesWithCompletionHandler:(id /* block */)a0;
- (BOOL)savePersistentValues:(id)a0 postNotifications:(BOOL)a1;

@end
