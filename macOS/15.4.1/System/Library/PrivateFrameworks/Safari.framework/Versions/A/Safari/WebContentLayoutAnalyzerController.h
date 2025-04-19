@interface WebContentLayoutAnalyzerController : NSObject {
    struct BundleFrame { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _bundleFrame;
    struct BundleScriptWorld { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _isolatedWorld;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)layoutInformation;
- (id)_jsContext;
- (id)_invokeMethod:(id)a0 withArguments:(id)a1;
- (void)collectInformationAfterResize;
- (void)collectInformationBeforeResize;
- (id)initWithBundleFrame:(const void *)a0;

@end
