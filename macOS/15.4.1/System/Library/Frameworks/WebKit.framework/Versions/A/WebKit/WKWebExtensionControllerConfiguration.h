@class NSString, NSUUID, WKWebsiteDataStore, WKWebViewConfiguration;

@interface WKWebExtensionControllerConfiguration : NSObject <WKObject, NSSecureCoding, NSCopying> {
    struct ObjectStorage<WebKit::WebExtensionControllerConfiguration> { struct type { unsigned char __lx[64]; } data; } _webExtensionControllerConfiguration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void *_webExtensionControllerConfiguration;
@property (readonly, nonatomic, getter=_isTemporary) BOOL _temporary;
@property (copy, nonatomic, setter=_setStorageDirectoryPath:) NSString *_storageDirectoryPath;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) WKWebViewConfiguration *webViewConfiguration;
@property (retain, nonatomic) WKWebsiteDataStore *defaultWebsiteDataStore;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)defaultConfiguration;
+ (id)configurationWithIdentifier:(id)a0;
+ (id)_temporaryConfiguration;
+ (id)nonPersistentConfiguration;

- (void)_objc_initiateDealloc;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct Ref<WebKit::WebExtensionControllerConfiguration, WTF::RawPtrTraits<WebKit::WebExtensionControllerConfiguration>, WTF::DefaultRefDerefTraits<WebKit::WebExtensionControllerConfiguration>> { struct WebExtensionControllerConfiguration *x0; })_protectedWebExtensionControllerConfiguration;

@end
