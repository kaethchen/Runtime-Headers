@protocol SandboxExtensionStore;

@interface SandboxFileExtensionController : WBSSandboxFileExtensionController

@property (readonly, nonatomic) id<SandboxExtensionStore> store;

- (id)init;
- (id)initWithURL:(id)a0;
- (id)initWithStore:(id)a0;
- (void)addFileExtensionForWebBookmarkLeafIfPossible:(id)a0 completionHandler:(id /* block */)a1;
- (void)addExtensionWithAccessURL:(id)a0 permissions:(long long)a1 identifier:(id)a2 category:(long long)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)addExtensions:(id)a0 identifier:(id)a1 category:(long long)a2 completionHandler:(id /* block */)a3;
- (void)removeExtensionWithIdentifier:(id)a0 category:(long long)a1 completionHandler:(id /* block */)a2;
- (void)removeExtensionsOlderThanDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeExtensionsWithCategory:(long long)a0 completionHandler:(id /* block */)a1;
- (void)requestExtensionWithCategories:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestExtensionWithIdentifier:(id)a0 category:(long long)a1 url:(id)a2 completionHandler:(id /* block */)a3;
- (id)requestExtensionWithIdentifier:(id)a0 category:(long long)a1 url:(id)a2 error:(id *)a3;

@end
