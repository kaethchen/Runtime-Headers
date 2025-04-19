@class NSString, NSMapTable;

@interface BMAccessAssertionCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_extensionCache;
    NSMapTable *_assertionsMap;
    NSString *_lastPersonaIdentifier;
}

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (void)releaseAssertion:(id)a0;
- (void)_invalidateCacheIfPersonaSwitched;
- (id)_sandboxExtensionWithDescriptor:(id)a0 extensionToken:(id)a1 container:(id)a2 path:(id)a3;
- (id)assertionForAccessDescriptor:(id)a0;
- (id)createAssertionForAccessDescriptor:(id)a0 extensionToken:(id)a1 container:(id)a2 path:(id)a3;

@end
