@class NSString;

@interface ISApplicationIdentityIcon : ISConcreteIcon

@property (readonly, copy) NSString *identityString;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (unsigned long long)_personaType;
- (id)_resourceForPersona:(unsigned long long)a0;
- (id)initWithApplicationIdentity:(id)a0;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;

@end
