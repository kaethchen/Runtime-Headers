@class NSUUID, CBIdentityAuthority, NSString, NSArray, NSImage, NSData;

@interface CBIdentity : NSObject <NSCoding, NSCopying> {
    id _reserved[4];
}

@property (readonly, nonatomic) CBIdentityAuthority *authority;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *posixName;
@property (readonly, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSData *persistentReference;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly) struct __CSIdentity { } *CSIdentity;

+ (id)fullNameForPerson:(id)a0;
+ (id)userIdentityWithName:(id)a0 authority:(id)a1;
+ (id)CBIdentitiesFromCSIdentities:(id)a0;
+ (id)_allocSubclassWithZone:(struct _NSZone { } *)a0 forCSIdentity:(struct __CSIdentity { } *)a1;
+ (id)emailAddressesForPerson:(id)a0;
+ (id)executeQueryAndRelease:(struct __CSIdentityQuery { } *)a0;
+ (id)groupIdentityWithName:(id)a0 authority:(id)a1;
+ (id)identityWithCSIdentity:(struct __CSIdentity { } *)a0;
+ (id)identityWithName:(id)a0 authority:(id)a1;
+ (id)identityWithPersistentReference:(id)a0;
+ (id)identityWithUUIDString:(id)a0 authority:(id)a1;
+ (id)identityWithUniqueIdentifier:(id)a0 authority:(id)a1;
+ (id)userIdentityForPerson:(id)a0 createIfNecessary:(BOOL)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setPassword:(id)a0;
- (BOOL)commit;
- (void)delete;
- (id)_initWithCSIdentity:(struct __CSIdentity { } *)a0;
- (BOOL)isMemberOfGroup:(id)a0;
- (id)linkedIdentityAuthorities;

@end
