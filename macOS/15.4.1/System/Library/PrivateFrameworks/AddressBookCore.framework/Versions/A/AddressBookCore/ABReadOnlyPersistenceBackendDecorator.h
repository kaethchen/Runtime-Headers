@class NSString;
@protocol ABAccountPersistenceBackend;

@interface ABReadOnlyPersistenceBackendDecorator : NSObject <ABAccountPersistenceBackend> {
    id<ABAccountPersistenceBackend> _backend;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)accountTypeIdentifier;
- (id)acAccountIdentifier;
- (void)deletePersistentValuesWithAddressBook:(id)a0;
- (id)initWithBackend:(id)a0;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (void)rediscoverPersistentValuesWithCompletionHandler:(id /* block */)a0;
- (BOOL)savePersistentValues:(id)a0 postNotifications:(BOOL)a1;

@end
