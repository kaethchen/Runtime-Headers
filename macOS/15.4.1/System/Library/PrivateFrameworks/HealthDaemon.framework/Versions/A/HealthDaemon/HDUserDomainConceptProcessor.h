@interface HDUserDomainConceptProcessor : NSObject

+ (BOOL)processUserDomainConceptsAfter:(long long)a0 transactionLimit:(long long)a1 outAnchor:(long long *)a2 outProcessedConceptsCount:(long long *)a3 profile:(id)a4 transaction:(id)a5 error:(id *)a6;

- (id)init;

@end
