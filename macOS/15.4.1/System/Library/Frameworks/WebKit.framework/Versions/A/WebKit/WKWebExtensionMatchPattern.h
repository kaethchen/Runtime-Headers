@class NSString;

@interface WKWebExtensionMatchPattern : NSObject <WKObject, NSSecureCoding, NSCopying> {
    struct ObjectStorage<WebKit::WebExtensionMatchPattern> { struct type { unsigned char __lx[56]; } data; } _webExtensionMatchPattern;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void *_webExtensionMatchPattern;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSString *scheme;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL matchesAllURLs;
@property (readonly, nonatomic) BOOL matchesAllHosts;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)allHostsAndSchemesMatchPattern;
+ (id)allURLsMatchPattern;
+ (id)matchPatternWithScheme:(id)a0 host:(id)a1 path:(id)a2;
+ (id)matchPatternWithString:(id)a0;
+ (void)registerCustomURLScheme:(id)a0;

- (void)_objc_initiateDealloc;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)matchesPattern:(id)a0;
- (BOOL)matchesURL:(id)a0;
- (id)initWithString:(id)a0 error:(id *)a1;
- (id)initWithScheme:(id)a0 host:(id)a1 path:(id)a2 error:(id *)a3;
- (struct Ref<WebKit::WebExtensionMatchPattern, WTF::RawPtrTraits<WebKit::WebExtensionMatchPattern>, WTF::DefaultRefDerefTraits<WebKit::WebExtensionMatchPattern>> { struct WebExtensionMatchPattern *x0; })_protectedWebExtensionMatchPattern;
- (BOOL)matchesPattern:(id)a0 options:(unsigned long long)a1;
- (BOOL)matchesURL:(id)a0 options:(unsigned long long)a1;

@end
