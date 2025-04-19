@class NSUUID;

@interface MCMConcreteContainerIdentity : MCMContainerIdentity

@property (readonly, nonatomic) NSUUID *uuid;

+ (id)concreteContainerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerConfig:(id)a3 platform:(unsigned int)a4 transient:(BOOL)a5 userIdentityCache:(id)a6 error:(unsigned long long *)a7;
+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerConfig:(id)a3 platform:(unsigned int)a4 userIdentityCache:(id)a5 error:(unsigned long long *)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)plist;
- (id)containerIdentity;
- (struct container_object_s { } *)createLibsystemContainerWithContainerPathIdentifier:(id)a0 existed:(BOOL)a1 error:(unsigned long long *)a2;
- (id)initWithContainerIdentity:(id)a0 UUID:(id)a1 error:(unsigned long long *)a2;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)initWithPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (id)initWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerConfig:(id)a3 platform:(unsigned int)a4 transient:(BOOL)a5 userIdentityCache:(id)a6 error:(unsigned long long *)a7;
- (id)initWithVersion1PlistDictionary:(id)a0 containerIdentity:(id)a1 error:(unsigned long long *)a2;
- (BOOL)isEqualToConcreteContainerIdentity:(id)a0;

@end
