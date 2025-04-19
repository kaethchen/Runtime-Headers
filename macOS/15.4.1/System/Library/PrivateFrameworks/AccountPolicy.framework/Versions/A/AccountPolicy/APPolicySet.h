@class NSDictionary, NSMutableSet, NSArray;

@interface APPolicySet : NSObject <NSCopying>

@property (readonly, copy) NSDictionary *legacyPolicies;
@property (retain) NSMutableSet *authentication;
@property (retain) NSMutableSet *passwordChange;
@property (retain) NSMutableSet *passwordContent;
@property (readonly, copy) NSArray *authenticationPolicies;
@property (readonly, copy) NSArray *passwordChangePolicies;
@property (readonly, copy) NSArray *passwordContentPolicies;
@property (readonly, copy) NSDictionary *passwordContentSummariesForAllLanguages;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSArray *attributesUsed;

+ (id)categoryAndIdentifierForLegacyPolicyName:(id)a0;
+ (id)policySet;
+ (id)policySetWithAuthenticationPolicies:(id)a0 passwordChangePolicies:(id)a1 passwordContentPolicies:(id)a2;
+ (id)policySetWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)addPolicyDictionary:(id)a0 toCategory:(id)a1;
- (BOOL)_attribute:(id)a0 usedInParameters:(id)a1 orInFormatString:(id)a2;
- (id)_arrayOfDictionariesWithPolicies:(id)a0;
- (void)_enumerateAllPoliciesUsingBlock:(id /* block */)a0;
- (id)_newPoliciesByUnioningPolicies:(id)a0 withPolicies:(id)a1;
- (id)_policiesWithArrayOfAccountPolicyDictionaries:(id)a0;
- (id)_policiesWithLegacyPolicyDictionary:(id)a0;
- (void)_removePolicies:(id)a0 fromPolicies:(id)a1;
- (void)addPolicy:(id)a0 toCategory:(id)a1;
- (void)addPolicySet:(id)a0;
- (id)initWithAuthenticationPolicies:(id)a0 passwordChangePolicies:(id)a1 passwordContentPolicies:(id)a2;
- (id)passwordContentSummaryForLanguage:(id)a0;
- (id)policiesInCategory:(id)a0;
- (void)removePolicy:(id)a0 fromCategory:(id)a1;
- (void)removePolicyDictionary:(id)a0 fromCategory:(id)a1;
- (void)removePolicyWithIdentifier:(id)a0 fromCategory:(id)a1;

@end
