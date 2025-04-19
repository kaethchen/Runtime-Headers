@class NSMutableDictionary;

@interface APRequest : APMessage

@property (retain) NSMutableDictionary *recordInfo;
@property (copy) id /* block */ retrieveData;

+ (id)requestWithType:(int)a0 recordInfo:(id)a1 retrieveData:(id /* block */)a2;
+ (id)requestWithType:(int)a0 recordInfo:(id)a1 timeDelta:(double)a2 retrieveData:(id /* block */)a3;

- (void).cxx_destruct;
- (id)evaluatePolicyAndReturnResponse;
- (void)_convertToNSNumberTimeIntervalIfNeeded:(id)a0;
- (id)_createPolicyWithPredicate:(id)a0;
- (id)_evaluateGlobalPolicies:(id)a0 recordPolicies:(id)a1 inCategories:(id)a2 calculateExpiration:(BOOL)a3;
- (id)_evaluatePolicy:(id)a0 withInfo:(id)a1 expectedResult:(BOOL)a2;
- (BOOL)_expectedResultForCategory:(id)a0;
- (id)_gatherPoliciesForCategories:(id)a0;
- (id)_policiesFromCacheOrRequest;
- (id)_removePoliciesFromGlobal:(id)a0 thatExistInRecord:(id)a1;
- (id)_updatePolicies:(id)a0 withNewPolicies:(id)a1 forCategories:(id)a2;
- (BOOL)_validPolicy:(id)a0;
- (BOOL)_validRecordInfo:(id)a0;
- (id)calculatePolicyExpirationInCategories:(id)a0;
- (id)evaluatePoliciesAndCreateResponse;
- (id)evaluatePoliciesInCategories:(id)a0;
- (long long)evaluatePolicyAndReturnExpiration;
- (int)evaluatePolicyAndReturnResultAndError:(id *)a0;
- (id)initWithType:(int)a0 recordInfo:(id)a1 timeDelta:(double)a2 retrieveData:(id /* block */)a3;
- (void)logPredicate:(id)a0 andParameters:(id)a1;

@end
