@class PKPassShareTimeConfiguration, NSString, NSDictionary, NSArray, NSNumber;

@interface PKPassEntitlement : NSObject <NSSecureCoding, NSCopying> {
    NSArray *_rawRoles;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (retain, nonatomic) NSString *entitlementTemplate;
@property (retain, nonatomic) NSDictionary *templateFields;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) NSNumber *activeShareability;
@property (retain, nonatomic) NSNumber *activeManageability;
@property (retain, nonatomic) NSNumber *activeVisibility;
@property (retain, nonatomic) NSNumber *activeCapabilityRole;
@property (readonly, nonatomic) BOOL intraAccountSharingEnabled;
@property (nonatomic) BOOL hasRemainingShares;
@property (retain, nonatomic) NSArray *shareability;
@property (retain, nonatomic) NSArray *manageability;
@property (retain, nonatomic) NSArray *visibility;
@property (retain, nonatomic) NSNumber *value;
@property (readonly, nonatomic) long long carKeyEntitlementType;
@property (retain, nonatomic) NSString *subcredentialIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSubcredentialDictionary:(id)a0 active:(BOOL)a1 subcredentialIdentifier:(id)a2;
- (id)copyWithSuppressedShareability;
- (BOOL)hasCanonicallyEquivalentRightsToPassEntitlement:(id)a0;
- (id)initWithCarKeyProfile:(id)a0 roles:(id)a1 active:(BOOL)a2 subcredentialIdentifier:(id)a3;
- (id)subcredentialDictionaryRepresentation;

@end
