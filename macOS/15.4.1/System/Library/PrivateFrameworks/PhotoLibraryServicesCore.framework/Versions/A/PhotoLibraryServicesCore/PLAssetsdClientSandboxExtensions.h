@class NSMutableDictionary;

@interface PLAssetsdClientSandboxExtensions : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_securityScopedURLs;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_stopUsingSecurityScopedURLs;
- (BOOL)consumeSandboxExtensions:(id)a0;

@end
