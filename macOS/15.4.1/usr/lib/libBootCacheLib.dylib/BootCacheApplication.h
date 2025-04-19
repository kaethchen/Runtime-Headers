@class NSString, BootCacheItemStoreKey;

@interface BootCacheApplication : BootCacheBundle {
    BootCacheItemStoreKey *_extensionlessResourceURLsDictionaryKey;
    BootCacheItemStoreKey *_icnsResourceURLsDictionaryKey;
}

@property (readonly, copy) NSString *teamIdentifier;
@property (readonly, copy) NSString *applicationIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)resourceURL:(id)a0 withExtension:(id)a1;
- (id)_initWithStore:(id)a0 key:(id)a1;

@end
