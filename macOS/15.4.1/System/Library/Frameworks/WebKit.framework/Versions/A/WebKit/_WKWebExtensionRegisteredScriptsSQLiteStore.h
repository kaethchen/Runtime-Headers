@interface _WKWebExtensionRegisteredScriptsSQLiteStore : _WKWebExtensionSQLiteStore

- (id)_getScriptsWithOutErrorMessage:(id *)a0;
- (int)_createFreshDatabaseSchema;
- (int)_currentDatabaseSchemaVersion;
- (id)_databaseURL;
- (id)_getKeysAndValuesFromRowEnumerator:(id)a0;
- (void)_insertScript:(id)a0 inDatabase:(id)a1 errorMessage:(id *)a2;
- (BOOL)_isDatabaseEmpty;
- (int)_resetDatabaseSchema;
- (void)addScripts:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteScriptsWithIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)getScriptsWithCompletionHandler:(id /* block */)a0;
- (id)initWithUniqueIdentifier:(id)a0 directory:(id)a1 usesInMemoryDatabase:(BOOL)a2;
- (void)updateScripts:(id)a0 completionHandler:(id /* block */)a1;

@end
