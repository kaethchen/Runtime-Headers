@interface KHProjectConfigurationTreatment : KHConfigurationTreatment

+ (id)treatmentsForConfiguration:(id)a0 andType:(unsigned long long)a1;
+ (id)treatmentsForConfiguration:(id)a0 andType:(unsigned long long)a1 sortedBy:(unsigned long long)a2;
+ (id)treatmentsForConfiguration:(id)a0 andType:(unsigned long long)a1 withDesignTag:(id)a2;

- (id)treatment;
- (id)initWithModelId:(id)a0 inDatabase:(id)a1;
- (BOOL)isProjectModel;

@end
