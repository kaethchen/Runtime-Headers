@class NSMapTable, NSObject;
@protocol OS_dispatch_queue, WBSSandboxExtensionStore;

@interface WBSSandboxFileExtensionController : NSObject {
    NSMapTable *_extensions;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<WBSSandboxExtensionStore> store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)_bookmarkDataForURL:(id)a0 permissions:(long long)a1 error:(id *)a2;
- (id)_createFileExtensionForAccessURL:(id)a0 permissions:(long long)a1;
- (id)_createFileExtensionForURL:(id)a0 permissions:(long long)a1 error:(id *)a2;
- (id)_createGenericExtensionForURL:(id)a0 extension:(id)a1 error:(id *)a2;
- (void)_createTokenWithExtensions:(id)a0 requestURL:(id)a1 includeRequestURL:(BOOL)a2 isRequestURLSecurityScoped:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)_extensionForURL:(id)a0 bookmarkData:(id)a1 permissions:(long long)a2 error:(id *)a3;
- (id)_fileExtensionForURL:(id)a0;
- (id)_resolveBookmarkData:(id)a0 isStale:(BOOL *)a1 error:(id *)a2;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (void)requestExtensionForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestExtensionForURL:(id)a0 error:(id *)a1;
- (void)savePendingChangesBeforeTermination;

@end
