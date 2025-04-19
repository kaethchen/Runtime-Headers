@class NSString, MCMUserIdentity;
@protocol MCMUserIdentityCache, MCMContainerConfiguration;

@interface MCMContainerIdentityMinimal : NSObject <NSCopying>

@property (readonly, nonatomic) id<MCMUserIdentityCache> userIdentityCache;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) id<MCMContainerConfiguration> containerConfig;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned int disposition;

+ (id)minimalContainerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)plist;
- (id)minimalIdentity;
- (id)identityByChangingUserIdentity:(id)a0;
- (id)identityBySettingPlatform:(unsigned int)a0;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)initWithPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (id)initWithUserIdentity:(id)a0 identifier:(id)a1 containerConfig:(id)a2 platform:(unsigned int)a3 userIdentityCache:(id)a4 error:(unsigned long long *)a5;
- (id)initWithVersion1PlistDictionary:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (BOOL)isEqualToContainerIdentity:(id)a0;

@end
