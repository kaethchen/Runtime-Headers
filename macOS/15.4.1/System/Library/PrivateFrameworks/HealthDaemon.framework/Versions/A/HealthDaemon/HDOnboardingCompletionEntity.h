@interface HDOnboardingCompletionEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)deleteAllCompletionsForFeatureIdentifier:(id)a0 syncIdentity:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (BOOL)enumerateAllOnboardingCompletionsWithTransaction:(id)a0 predicate:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)insertCodableOnboardingCompletions:(id)a0 syncProvenance:(long long)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (id)insertOnboardingCompletion:(id)a0 syncIdentity:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;

- (id)onboardingCompletionWithTransaction:(id)a0 error:(id *)a1;

@end
