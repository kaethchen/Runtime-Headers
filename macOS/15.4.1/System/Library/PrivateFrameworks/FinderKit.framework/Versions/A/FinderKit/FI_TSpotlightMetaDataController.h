@class NSObject;

@interface FI_TSpotlightMetaDataController : FI_IPropertyValueController {
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _spotlightMetaDataBinder;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setView:(id)a0;
- (void)flush;
- (void)aboutToTearDown;
- (void)handleNodeMDAttributesChanged:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 attributes:(id)a1 isDisplayAttributes:(BOOL)a2;
- (id)spotlightMetaDataView;

@end
