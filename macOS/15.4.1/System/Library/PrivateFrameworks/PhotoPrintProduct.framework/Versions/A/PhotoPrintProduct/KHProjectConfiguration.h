@interface KHProjectConfiguration : KHConfiguration

+ (id)configurationForKey:(long long)a0 fromDatabase:(id)a1;
+ (id)configurationIdsForCategory:(long long)a0 fromDatabase:(id)a1;

- (Class)configurationTreatmentClass;
- (BOOL)isProjectModel;

@end
