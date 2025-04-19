@class NSString;

@interface _WKWebExtensionDeclarativeNetRequestSQLiteStore : _WKWebExtensionSQLiteStore {
    NSString *_storageType;
    NSString *_tableName;
}

- (void).cxx_destruct;
- (int)_createFreshDatabaseSchema;
- (int)_currentDatabaseSchemaVersion;
- (id)_databaseURL;
- (id)_getKeysAndValuesFromRowEnumerator:(id)a0;
- (id)_getRulesWithOutErrorMessage:(id *)a0;
- (id)_insertRule:(id)a0 inDatabase:(id)a1;
- (BOOL)_isDatabaseEmpty;
- (int)_resetDatabaseSchema;
- (void)addRules:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRules:(id)a0 completionHandler:(id /* block */)a1;
- (void)getRulesWithCompletionHandler:(id /* block */)a0;
- (id)initWithUniqueIdentifier:(id)a0 storageType:(BOOL)a1 directory:(id)a2 usesInMemoryDatabase:(BOOL)a3;
- (void)updateRulesByRemovingIDs:(id)a0 addRules:(id)a1 completionHandler:(id /* block */)a2;

@end
