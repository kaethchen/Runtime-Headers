@interface MCMContainerIdentity : MCMContainerIdentityMinimal

@property (readonly, nonatomic) BOOL transient;

+ (id)containerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
+ (id)containerIdentityWithIdentifier:(id)a0 containerConfig:(id)a1 platform:(unsigned int)a2 userIdentityCache:(id)a3 error:(unsigned long long *)a4;
+ (id)containerIdentityWithMinimalContainerIdentity:(id)a0 transient:(BOOL)a1;
+ (id)containerIdentityWithUserIdentity:(id)a0 identifier:(id)a1 containerConfig:(id)a2 platform:(unsigned int)a3 transient:(BOOL)a4 userIdentityCache:(id)a5 error:(unsigned long long *)a6;
+ (id)containerIdentityWithUserIdentity:(id)a0 identifier:(id)a1 containerConfig:(id)a2 platform:(unsigned int)a3 userIdentityCache:(id)a4 error:(unsigned long long *)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)plist;
- (id)identityByChangingUserIdentity:(id)a0;
- (id)containerIdentity;
- (id)identityByChangingTransient:(BOOL)a0;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)initWithUserIdentity:(id)a0 identifier:(id)a1 containerConfig:(id)a2 platform:(unsigned int)a3 transient:(BOOL)a4 userIdentityCache:(id)a5 error:(unsigned long long *)a6;
- (id)initWithVersion1PlistDictionary:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (BOOL)isEqualToContainerIdentity:(id)a0;
- (id)nontransientContainerIdentity;
- (id)transientContainerIdentity;

@end
