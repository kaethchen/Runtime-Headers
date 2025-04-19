@interface OpenSearchURLFinderController : NSObject {
    struct BundleFrame { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _bundleFrame;
    struct BundleScriptWorld { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _isolatedWorld;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_jsContext;
- (id)_scriptObject;
- (id)firstOpenSearchURL;
- (id)initWithBundleFrame:(const void *)a0;

@end
