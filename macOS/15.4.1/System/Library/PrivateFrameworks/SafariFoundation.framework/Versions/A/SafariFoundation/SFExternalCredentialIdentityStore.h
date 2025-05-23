@class NSObject, WBSSQLiteStatementCache;
@protocol OS_dispatch_queue;

@interface SFExternalCredentialIdentityStore : WBSSQLiteStore {
    WBSSQLiteStatementCache *_statements;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (int)_vacuum;
- (int)_createFreshDatabaseSchema;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (int)_currentSchemaVersion;
- (int)_migrateToSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (void)openAndCheckIntegrity:(BOOL)a0 createIfNeeded:(BOOL)a1 fallBackToMemoryStoreIfError:(BOOL)a2 lockingPolicy:(long long)a3 completionHandler:(id /* block */)a4;
- (void)_databaseWillClose;
- (id)initWithURL:(id)a0 protectionType:(long long)a1;
- (void)fetchOneTimeCodeCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (id)_credentialIdentityFromRow:(id)a0;
- (id)_fetchCredentialIdentities;
- (id)_fetchCredentialIdentitiesMatchingDomains:(id)a0 credentialIdentityType:(id)a1;
- (id)_fetchCredentialIdentitiesWithType:(long long)a0;
- (BOOL)_fetchStoreIsEmpty;
- (int)_insertCredentialIdentity:(id)a0;
- (int)_removeAllCredentialIdentities;
- (int)_removeCredentialIdentities:(id)a0;
- (int)_removeCredentialIdentity:(id)a0;
- (long long)_rowIDOfCredentialIdentityIfExists:(id)a0;
- (int)_saveCredentialIdentities:(id)a0;
- (int)_updateCredentialIdentity:(id)a0;
- (void)fetchAllPasskeyCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)fetchCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)fetchPasskeyCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (void)fetchPasswordCredentialIdentitiesMatchingDomains:(id)a0 completion:(id /* block */)a1;
- (void)fetchStoreEmptyStateWithCompletion:(id /* block */)a0;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)removeCredentialIdentities:(id)a0 completion:(id /* block */)a1;
- (void)replaceCredentialIdentitiesWithIdentities:(id)a0 completion:(id /* block */)a1;
- (void)saveCredentialIdentities:(id)a0 completion:(id /* block */)a1;

@end
