@class NSString, NSNumber;

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription> {
    NSNumber *_aggregatePersonalCellular;
    NSNumber *_aggregateEnterpriseCellular;
    long long _internalCellularBehavior;
    NSNumber *_aggregatePersonalWiFi;
    NSNumber *_aggregateEnterpriseWiFi;
    long long _internalWiFiBehavior;
}

@property (readonly, getter=isDefaultPathRule) BOOL defaultPathRule;
@property long long cellularBehavior;
@property long long wifiBehavior;
@property BOOL denyCellularFallback;
@property BOOL denyMulticast;
@property (copy) NSString *temporaryAllowMulticastNetworkName;
@property BOOL multicastPreferenceSet;
@property BOOL isIdentifierExternal;
@property BOOL denyAll;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addCellularBehavior:(long long)a0 grade:(long long)a1;
- (void)addWiFiBehavior:(long long)a0 grade:(long long)a1;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initDefaultNonSystemPathRule;
- (id)initDefaultPathRule;
- (BOOL)signingIdentifierAllowed:(id)a0 domainsOrAccountsRequired:(out BOOL *)a1;
- (BOOL)supportsCellularBehavior:(long long)a0;
- (BOOL)supportsWiFiBehavior:(long long)a0;

@end
