@interface AccountPolicy : NSObject

+ (id)_calculateCharacterRuns:(id)a0;
+ (id)_createUpdateDataForFailedAuthticationWithInfo:(id)a0;
+ (id)_createUpdateDataForSuccessfulAuthentication;
+ (void)_updateClientWithData:(id)a0 usingBlock:(id /* block */)a1;
+ (id)_updateDataForSuccessfulPasswordChangeUsingInfo:(id)a0 andResponse:(id)a1;
+ (id)attributesUsedByPolicies:(id)a0;
+ (BOOL)authenticationAllowed:(id)a0 authSuccess:(BOOL)a1 error:(id *)a2 retrieveData:(id /* block */)a3 updateData:(id /* block */)a4;
+ (void)invalidateCacheForPolicySet:(id)a0;
+ (id)legacyPoliciesWithPolicySet:(id)a0;
+ (id)localizedEvaluationDetails:(id)a0 language:(id)a1;
+ (id)localizedPasswordContentSummaryForGlobalPolicies:(id)a0 recordPolicies:(id)a1 language:(id)a2;
+ (BOOL)passwordChangeAllowed:(id)a0 error:(id *)a1 retrieveData:(id /* block */)a2 updateData:(id /* block */)a3;
+ (id)policySetWithLegacyPolicies:(id)a0;
+ (long long)secondsUntilAuthenticationExpiration:(id)a0 retrieveData:(id /* block */)a1;
+ (long long)secondsUntilPasswordExpiration:(id)a0 retrieveData:(id /* block */)a1;
+ (BOOL)willAuthenticationsExpire:(unsigned int)a0 recordInfo:(id)a1 retrieveData:(id /* block */)a2;
+ (BOOL)willPasswordExpire:(unsigned int)a0 recordInfo:(id)a1 retrieveData:(id /* block */)a2;

@end
