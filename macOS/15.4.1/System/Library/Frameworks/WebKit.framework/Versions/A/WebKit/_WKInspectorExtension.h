@class NSString;
@protocol _WKInspectorExtensionDelegate;

@interface _WKInspectorExtension : NSObject <WKObject> {
    struct ObjectStorage<API::InspectorExtension> { struct type { unsigned char __lx[40]; } data; } _extension;
    struct unique_ptr<WebKit::InspectorExtensionDelegate, std::default_delete<WebKit::InspectorExtensionDelegate>> { struct __compressed_pair<WebKit::InspectorExtensionDelegate *, std::default_delete<WebKit::InspectorExtensionDelegate>> { struct InspectorExtensionDelegate *__value_; } __ptr_; } _delegate;
}

@property (readonly, nonatomic) NSString *extensionID;
@property (weak, nonatomic) id<_WKInspectorExtensionDelegate> delegate;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reloadIgnoringCache:(BOOL)a0 userAgent:(id)a1 injectedScript:(id)a2 completionHandler:(id /* block */)a3;
- (void)createTabWithName:(id)a0 tabIconURL:(id)a1 sourceURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)evaluateScript:(id)a0 frameURL:(id)a1 contextSecurityOrigin:(id)a2 useContentScriptContext:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)evaluateScript:(id)a0 inTabWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)navigateToURL:(id)a0 inTabWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
