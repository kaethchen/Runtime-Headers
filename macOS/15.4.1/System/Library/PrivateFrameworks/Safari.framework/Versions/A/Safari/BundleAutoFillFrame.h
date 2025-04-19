@class NSString;

@interface BundleAutoFillFrame : NSObject <WBSFormAutoFillFrame> {
    struct BundleFrame { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _frame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoFillFrameWithWKBundleFrame:(const void *)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)committedURL;
- (BOOL)containsAnyFormElements;
- (void)enumerateChildFramesUsingBlock:(id /* block */)a0;
- (struct OpaqueFormAutoFillFrame { } *)frameRef;
- (struct OpaqueJSContext { } *)jsContextForMetadataControllerScriptWorld;
- (struct OpaqueJSValue { } *)jsWrapperInMetadataControllerScriptWorldForNode:(id)a0;
- (id)pageMainFrame;
- (id)initWithWKBundleFrame:(const void *)a0;
- (const void *)wkBundleFrame;

@end
