@interface WBSSandboxExtensionSQLiteStore : WBSSQLiteStore <WBSSandboxExtensionStore> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _opening;
}

- (id).cxx_construct;
- (int)_createFreshDatabaseSchema;
- (BOOL)_createFreshDatabaseSchemaWithError:(id *)a0;
- (int)_currentSchemaVersion;
- (void)_databaseCreateIfNeeded:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)extensionForURL:(id)a0 options:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateBookmarkData:(id)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;

@end
