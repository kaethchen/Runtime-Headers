@class NSString, INImageBundle;

@interface _INBundleImage : INImage

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) INImageBundle *imageBundle;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringRepresentation;
- (id)_name;
- (id)_dictionaryRepresentation;
- (void)_setBundleIdentifier:(id)a0;
- (void)_setName:(id)a0;
- (BOOL)_isSystem;
- (id)_bundleIdentifier;
- (id)initWithStringRepresentation:(id)a0;
- (void)_setBundlePath:(id)a0;
- (id)_URLRepresentation;
- (id)_bundlePath;
- (id)_copyWithSubclass:(Class)a0;
- (id)_initWithURLRepresentation:(id)a0;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)_requiresRetrieval;

@end
