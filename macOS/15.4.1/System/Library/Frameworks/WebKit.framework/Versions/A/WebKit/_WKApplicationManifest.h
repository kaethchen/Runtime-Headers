@class NSString, NSArray, NSURL, NSColor;

@interface _WKApplicationManifest : NSObject <WKObject, NSSecureCoding> {
    struct ObjectStorage<API::ApplicationManifest> { struct type { unsigned char __lx[288]; } data; } _applicationManifest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *rawJSON;
@property (readonly, nonatomic) long long dir;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *applicationDescription;
@property (readonly, copy, nonatomic) NSURL *scope;
@property (readonly, nonatomic) BOOL isDefaultScope;
@property (readonly, copy, nonatomic) NSURL *manifestURL;
@property (readonly, copy, nonatomic) NSURL *startURL;
@property (readonly, copy, nonatomic) NSURL *manifestId;
@property (readonly, nonatomic) long long displayMode;
@property (readonly, copy, nonatomic) NSArray *categories;
@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) NSArray *shortcuts;
@property (readonly, copy, nonatomic) NSColor *backgroundColor;
@property (readonly, copy, nonatomic) NSColor *themeColor;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applicationManifestFromJSON:(id)a0 manifestURL:(id)a1 documentURL:(id)a2;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)direction;
- (struct optional<_WKApplicationManifestOrientation> { union { char x0; long long x1; } x0; BOOL x1; })orientation;
- (id)initWithJSONData:(id)a0 manifestURL:(id)a1 documentURL:(id)a2;

@end
