@class NSMutableDictionary;

@interface PLLibraryBookmarkManager : NSObject {
    NSMutableDictionary *_securityScopedBookmarksByPathKey;
    NSMutableDictionary *_activeURLsByPathKey;
}

+ (id)sharedBookmarkManager;
+ (id)_securityScopedURLWithURL:(id)a0 sandboxExtension:(id)a1;
+ (id)resolveSecurityScopedBookmark:(id)a0 isStale:(BOOL *)a1 error:(id *)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_saveToDefaults;
- (id)sandboxExtensionsByPathForClient:(id)a0 pathManager:(id)a1 libraryAccessRole:(long long)a2;
- (id)URLFromClientLibraryURL:(id)a0 sandboxExtension:(id)a1 error:(id *)a2;
- (id)newSandboxExtensionDataForClient:(struct { unsigned int x0[8]; })a0 path:(id)a1 writable:(BOOL)a2;
- (void)removeSSBForLibraryURL:(id)a0;
- (void)_refreshSecurityScopedBookmarks;
- (id)_activeURLForClientLibraryURL:(id)a0;
- (void)_importLithiumAccessRights;
- (void)_loadFromDefaults;
- (id)_newSecurityScopedBookmarkDataForURL:(id)a0;
- (void)_removeActiveURLForPathKey:(id)a0;
- (void)_removeSSBForPathKey:(id)a0;
- (id)_resolveSecurityScopedBookmarkData:(id)a0 error:(id *)a1;
- (void)_storeBookmarkForURL:(id)a0;
- (void)_storeSecurityScopedURL:(id)a0 pathKey:(id)a1;
- (id)allKnownLibraryURLs;
- (void)removeInvalidSSBsExcept:(id)a0;

@end
