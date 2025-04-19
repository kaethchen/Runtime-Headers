@interface SandboxExtensionSQLiteStore : WBSSandboxExtensionSQLiteStore <SandboxExtensionStore>

- (id)init;
- (void)_extensionsWithIdentifier:(id)a0 categories:(id)a1 options:(long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)_removeReferences:(id)a0 database:(id)a1 error:(id *)a2;
- (void)addExtension:(id)a0 permissions:(long long)a1 identifier:(id)a2 category:(long long)a3 url:(id)a4 options:(long long)a5 completionHandler:(id /* block */)a6;
- (void)addExtensions:(id)a0 identifier:(id)a1 category:(long long)a2 options:(long long)a3 completionHandler:(id /* block */)a4;
- (void)extensionsWithCategories:(id)a0 options:(long long)a1 completionHandler:(id /* block */)a2;
- (void)extensionsWithIdentifier:(id)a0 category:(long long)a1 options:(long long)a2 completionHandler:(id /* block */)a3;
- (void)removeExtensionWithIdentifier:(id)a0 category:(long long)a1 completionHandler:(id /* block */)a2;
- (void)removeExtensionsOlderThanDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeExtensionsWithCategory:(long long)a0 completionHandler:(id /* block */)a1;

@end
