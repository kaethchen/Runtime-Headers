@interface ABUserActivityScoring : NSObject

+ (unsigned long long)scoreForPerson:(id)a0 emailAddresses:(id)a1;
+ (unsigned long long)scoreForPerson:(id)a0 firstName:(id)a1 lastName:(id)a2;
+ (unsigned long long)scoreForPerson:(id)a0 firstName:(id)a1 lastName:(id)a2 organizationName:(id)a3 emailAddresses:(id)a4 phoneNumbers:(id)a5;
+ (unsigned long long)scoreForPerson:(id)a0 organizationName:(id)a1;
+ (unsigned long long)scoreForPerson:(id)a0 phoneNumbers:(id)a1;

@end
