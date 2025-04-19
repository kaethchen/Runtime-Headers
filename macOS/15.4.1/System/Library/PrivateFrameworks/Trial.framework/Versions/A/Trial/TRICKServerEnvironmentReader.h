@interface TRICKServerEnvironmentReader : NSObject

+ (long long)currentEnvironment;
+ (long long)validatedEnvironmentFromNumber:(id)a0;
+ (int)currentPopulation;
+ (int)validatedPopulationFromNumber:(long long)a0;

@end
