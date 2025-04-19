@class NSString;

@interface WKWebProcessPlugInController : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundle> { struct type { unsigned char __lx[64]; } data; } _bundle;
    struct RetainPtr<id<WKWebProcessPlugIn>> { void *m_ptr; } _principalClassInstance;
}

@property (readonly) struct OpaqueWKBundle { } *_bundleRef;
@property (readonly) id parameters;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)extendClassesForParameterCoder:(id)a0;
- (void)_setPrincipalClassInstance:(id)a0;

@end
