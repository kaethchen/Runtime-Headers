@class NSSet, NSString, WKWebExtensionControllerConfiguration;
@protocol WKWebExtensionControllerDelegate;

@interface WKWebExtensionController : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionController> { struct type { unsigned char __lx[200]; } data; } _webExtensionController;
}

@property (class, readonly, copy, nonatomic) NSSet *allExtensionDataTypes;

@property (readonly, nonatomic) void *_webExtensionController;
@property (nonatomic, getter=_inTestingMode, setter=_setTestingMode:) BOOL _testingMode;
@property (weak, nonatomic) id<WKWebExtensionControllerDelegate> delegate;
@property (readonly, copy, nonatomic) WKWebExtensionControllerConfiguration *configuration;
@property (readonly, copy, nonatomic) NSSet *extensions;
@property (readonly, copy, nonatomic) NSSet *extensionContexts;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_objc_initiateDealloc;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)didFocusWindow:(id)a0;
- (void)didCloseWindow:(id)a0;
- (void)didActivateTab:(id)a0 previousActiveTab:(id)a1;
- (void)didChangeTabProperties:(unsigned long long)a0 forTab:(id)a1;
- (void)didCloseTab:(id)a0 windowIsClosing:(BOOL)a1;
- (void)didDeselectTabs:(id)a0;
- (void)didMoveTab:(id)a0 fromIndex:(unsigned long long)a1 inWindow:(id)a2;
- (void)didOpenTab:(id)a0;
- (void)didOpenWindow:(id)a0;
- (void)didReplaceTab:(id)a0 withTab:(id)a1;
- (void)didSelectTabs:(id)a0;
- (id)extensionContextForExtension:(id)a0;
- (id)extensionContextForURL:(id)a0;
- (void)fetchDataRecordOfTypes:(id)a0 forExtensionContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchDataRecordsOfTypes:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)loadExtensionContext:(id)a0 error:(id *)a1;
- (void)removeDataOfTypes:(id)a0 fromDataRecords:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)unloadExtensionContext:(id)a0 error:(id *)a1;

@end
