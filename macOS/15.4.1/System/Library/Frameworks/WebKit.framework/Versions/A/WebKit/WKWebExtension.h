@class NSArray, NSDictionary, NSString, NSLocale, NSSet;

@interface WKWebExtension : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtension> { struct type { unsigned char __lx[432]; } data; } _webExtension;
}

@property (readonly, nonatomic) void *_webExtension;
@property (readonly, nonatomic) BOOL _hasServiceWorkerBackgroundContent;
@property (readonly, nonatomic) BOOL _hasModularBackgroundContent;
@property (readonly, nonatomic) BOOL _hasSidebar;
@property (readonly, copy, nonatomic) NSArray *errors;
@property (readonly, copy, nonatomic) NSDictionary *manifest;
@property (readonly, nonatomic) double manifestVersion;
@property (readonly, copy, nonatomic) NSLocale *defaultLocale;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *displayShortName;
@property (readonly, copy, nonatomic) NSString *displayVersion;
@property (readonly, copy, nonatomic) NSString *displayDescription;
@property (readonly, copy, nonatomic) NSString *displayActionLabel;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSSet *requestedPermissions;
@property (readonly, copy, nonatomic) NSSet *optionalPermissions;
@property (readonly, copy, nonatomic) NSSet *requestedPermissionMatchPatterns;
@property (readonly, copy, nonatomic) NSSet *optionalPermissionMatchPatterns;
@property (readonly, copy, nonatomic) NSSet *allRequestedMatchPatterns;
@property (readonly, nonatomic) BOOL hasBackgroundContent;
@property (readonly, nonatomic) BOOL hasPersistentBackgroundContent;
@property (readonly, nonatomic) BOOL hasInjectedContent;
@property (readonly, nonatomic) BOOL hasOptionsPage;
@property (readonly, nonatomic) BOOL hasOverrideNewTabPage;
@property (readonly, nonatomic) BOOL hasCommands;
@property (readonly, nonatomic) BOOL hasContentModificationRules;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)extensionWithAppExtensionBundle:(id)a0 completionHandler:(id /* block */)a1;
+ (void)extensionWithResourceBaseURL:(id)a0 completionHandler:(id /* block */)a1;

- (void)_objc_initiateDealloc;
- (void)dealloc;
- (id)initWithResources:(id)a0;
- (id)_initWithResourceBaseURL:(id)a0 error:(id *)a1;
- (id)_initWithAppExtensionBundle:(id)a0 error:(id *)a1;
- (id)_initWithAppExtensionBundle:(id)a0 resourceBaseURL:(id)a1 error:(id *)a2;
- (id)_initWithManifestDictionary:(id)a0;
- (id)_initWithManifestDictionary:(id)a0 resources:(id)a1;
- (id)_initWithResources:(id)a0;
- (struct Ref<WebKit::WebExtension, WTF::RawPtrTraits<WebKit::WebExtension>, WTF::DefaultRefDerefTraits<WebKit::WebExtension>> { struct WebExtension *x0; })_protectedWebExtension;
- (id)actionIconForSize:(struct CGSize { double x0; double x1; })a0;
- (id)iconForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithAppExtensionBundle:(id)a0 error:(id *)a1;
- (id)initWithAppExtensionBundle:(id)a0 resourceBaseURL:(id)a1 error:(id *)a2;
- (id)initWithManifestDictionary:(id)a0;
- (id)initWithManifestDictionary:(id)a0 resources:(id)a1;
- (id)initWithResourceBaseURL:(id)a0 error:(id *)a1;
- (BOOL)supportsManifestVersion:(double)a0;

@end
