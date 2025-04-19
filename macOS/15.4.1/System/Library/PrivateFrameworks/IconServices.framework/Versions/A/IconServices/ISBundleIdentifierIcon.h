@class NSString;

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (double)_aspectRatio;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;

@end
