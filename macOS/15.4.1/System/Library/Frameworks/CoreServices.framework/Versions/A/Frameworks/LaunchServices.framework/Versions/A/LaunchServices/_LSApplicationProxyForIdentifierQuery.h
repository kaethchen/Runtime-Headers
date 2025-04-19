@class NSSet, NSString;

@interface _LSApplicationProxyForIdentifierQuery : _LSBundleQuery

@property (class, readonly) NSSet *alwaysAllowedBundleIdentifiers;

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;
+ (id)queryWithIdentifier:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (BOOL)_requiresDatabaseMappingEntitlement;

@end
