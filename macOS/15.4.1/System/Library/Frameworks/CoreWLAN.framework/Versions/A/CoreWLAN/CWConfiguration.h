@class NSDictionary, NSOrderedSet;

@interface CWConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *info;
@property (copy, nonatomic) NSOrderedSet *networkProfiles;
@property (nonatomic) BOOL requireAdministratorForAssociation;
@property (nonatomic) BOOL requireAdministratorForPower;
@property (nonatomic) BOOL requireAdministratorForIBSSMode;
@property (nonatomic) BOOL rememberJoinedNetworks;

+ (id)configuration;
+ (id)configurationWithConfiguration:(id)a0;
+ (id)configurationForInterfaceWithName:(id)a0;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (BOOL)commitForInterfaceWithName:(id)a0 authorization:(id)a1 error:(out id *)a2;
- (id)initForInterfaceWithName:(id)a0;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)networkProfileWithSSID:(id)a0 securityType:(unsigned long long)a1;
- (id)preferredNetworks;

@end
