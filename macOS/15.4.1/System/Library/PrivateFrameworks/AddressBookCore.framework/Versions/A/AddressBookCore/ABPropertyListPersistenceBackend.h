@class NSString;

@interface ABPropertyListPersistenceBackend : NSObject <ABAccountPersistenceBackend> {
    NSString *_uid;
    NSString *_path;
    NSString *_sourceClassName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)path;
- (id)accountTypeIdentifier;
- (id)acAccountIdentifier;
- (void)deletePersistentValuesWithAddressBook:(id)a0;
- (id)initWithUID:(id)a0 path:(id)a1 sourceClassName:(id)a2;
- (id)loadPersistentValues;
- (id)parentAccountTypeIdentifier;
- (id)plistPath;
- (void)rediscoverPersistentValuesWithCompletionHandler:(id /* block */)a0;
- (BOOL)savePersistentValues:(id)a0;
- (BOOL)savePersistentValues:(id)a0 postNotifications:(BOOL)a1;

@end
