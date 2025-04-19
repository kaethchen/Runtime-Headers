@class NSString;

@interface MCMConcreteContainerIdentityForLibsystem : MCMConcreteContainerIdentity

@property (readonly, nonatomic) NSString *containerPathIdentifier;
@property (readonly, nonatomic) BOOL existed;

+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerConfig:(id)a3 platform:(unsigned int)a4 containerPathIdentifier:(id)a5 existed:(BOOL)a6 transient:(BOOL)a7 userIdentityCache:(id)a8 error:(unsigned long long *)a9;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (struct container_object_s { } *)createLibsystemContainerWithError:(unsigned long long *)a0;
- (id)identityByChangingContainerPathIdentifier:(id)a0;
- (id)identityByChangingIdentifier:(id)a0;
- (id)identityByChangingTransient:(BOOL)a0;
- (id)identityByChangingUUID:(id)a0;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)initWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerConfig:(id)a3 platform:(unsigned int)a4 containerPathIdentifier:(id)a5 existed:(BOOL)a6 transient:(BOOL)a7 userIdentityCache:(id)a8 error:(unsigned long long *)a9;
- (id)nontransientConcreteContainerIdentityForLibsystem;
- (id)nontransientContainerIdentity;
- (id)transientConcreteContainerIdentityForLibsystem;
- (id)transientContainerIdentity;

@end
