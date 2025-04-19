@interface CNAutocompleteSourceInclusionPolicy : NSObject

+ (id)defaultPolicyWithFetchRequest:(id)a0;
+ (id)policyForNoContactsAccess;
+ (id)policyWithCurrentProcessEntitlements;
+ (id)policyWithFetchRequest:(id)a0;
+ (id)policyWithPolicies:(id)a0;
+ (id)policyWithUserDefaults:(id)a0;
+ (id)policyWithValue:(BOOL)a0;

@end
