@interface _LSBundleProvider : NSObject {
    void *_provider;
}

@property (readonly) struct __SecCode { } *copySecCodeRef;
@property (readonly) void *provider;

- (void)dealloc;
- (BOOL)usingCachedItem;
- (id)initWithURL:(id)a0 useCacheIfPossible:(BOOL)a1;
- (id)bundle;
- (id)bundle:(BOOL)a0 reason:(id)a1;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)bundleURL;
- (id)cdHashes;
- (struct __CFBundle { } *)cfBundleRef;
- (struct __CFBundle { } *)cfBundleRef:(BOOL)a0 reason:(id)a1;
- (struct __SecCode { } *)copySecCodeRef;
- (id)infoDictionary;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0;

@end
