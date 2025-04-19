@class CNProviderMetadata, NSString, NSData, CNContainerPermissions, NSDate;

@interface CNContainer : NSObject <NSCopying, NSSecureCoding> {
    CNContainer *_snapshot;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) CNContainer *snapshot;
@property (readonly, copy) NSString *externalModificationTag;
@property (readonly, copy) NSString *externalSyncTag;
@property (readonly, copy) NSData *externalSyncData;
@property (readonly, copy) NSString *constraintsPath;
@property (readonly, copy) NSString *meIdentifier;
@property (readonly) unsigned long long restrictions;
@property (readonly, getter=isGuardianStateDirty) BOOL guardianStateDirty;
@property (readonly, nonatomic) int iOSLegacyIdentifier;
@property (readonly, copy) NSString *accountIdentifier;
@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly, copy) CNContainerPermissions *permissions;
@property (readonly, getter=isGuardianRestricted) BOOL guardianRestricted;
@property (readonly, getter=isParentallyManaged) BOOL parentallyManaged;
@property (readonly) NSDate *lastSyncDate;
@property (readonly, copy) NSString *externalIdentifier;
@property (readonly, copy) NSString *providerIdentifier;
@property (readonly, copy) CNProviderMetadata *providerMetadata;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;
@property (readonly) long long type;

+ (id)predicateForContainersWithIdentifiers:(id)a0;
+ (id)makeDefaultContainerPermissions;
+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForContainersWithType:(long long)a0;
+ (id)descriptionForContainerType:(long long)a0;
+ (id)predicateForAllContainers;
+ (id)predicateForContainerOfContactWithIdentifier:(id)a0;
+ (id)predicateForContainerOfGroupWithIdentifier:(id)a0;
+ (id)predicateForContainerWithExternalIdentifier:(id)a0;
+ (id)predicateForContainerWithProviderIdentifier:(id)a0;
+ (id)predicateForContainersInAccountWithExternalIdentifier:(id)a0;
+ (id)predicateForContainersInAccountWithIdentifier:(id)a0;
+ (id)predicateForContainersInAccountWithIdentifier:(id)a0 includingDisabledContainers:(BOOL)a1;
+ (id)predicateForContainersIncludingDisabled:(BOOL)a0;
+ (id)predicateForContainersWithType:(long long)a0 includingDisabledContainers:(BOOL)a1;
+ (id)predicateForDefaultContainerForAccountWithIdentifier:(id)a0;
+ (id)predicateForLocalContainerIncludingDisabled:(BOOL)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithContainer:(id)a0;
- (id)initWithName:(id)a0 type:(long long)a1;
- (id)initWithIdentifier:(id)a0 accountIdentifier:(id)a1 name:(id)a2 type:(long long)a3 permissions:(id)a4 externalIdentifier:(id)a5;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 iOSLegacyIdentifier:(int)a3 accountIdentifier:(id)a4 enabled:(BOOL)a5 permissions:(id)a6 externalIdentifier:(id)a7 externalModificationTag:(id)a8 externalSyncTag:(id)a9 externalSyncData:(id)a10 constraintsPath:(id)a11 meIdentifier:(id)a12 restrictions:(unsigned long long)a13 guardianRestricted:(BOOL)a14 lastSyncDate:(id)a15 providerIdentifier:(id)a16 providerMetadata:(id)a17;
- (id)initWithName:(id)a0 type:(long long)a1 externalIdentifier:(id)a2;

@end
