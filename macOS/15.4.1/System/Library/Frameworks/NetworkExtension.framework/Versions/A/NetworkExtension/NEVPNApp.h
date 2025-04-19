@class NSArray;

@interface NEVPNApp : NEVPN

@property (copy) NSArray *appRules;
@property BOOL noRestriction;
@property BOOL restrictDomains;
@property (copy) NSArray *excludedDomains;

+ (BOOL)supportsSecureCoding;
+ (BOOL)compareAppRules:(id)a0 newAppRules:(id)a1 noExistingDomain:(BOOL *)a2;
+ (id)findRuleWithSameDomains:(id)a0 matchSigningIdentifier:(id)a1 startIndex:(long long *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyAppRuleBySigningIdentifier:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyAppRuleByID:(id)a0;
- (id)copyAppRuleIDs;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;
- (BOOL)installSigningIdentifiersWithFlowDivertControlSocket:(int)a0;
- (BOOL)removeAppRuleByID:(id)a0;
- (void)updateAppRulesForUID:(unsigned int)a0;

@end
