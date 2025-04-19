@class NSString, KHTreatment;

@interface KHConfigurationTreatment : KHModel {
    long long _configurationId;
    long long _treatmentId;
    NSString *_designTag;
    long long _type;
    long long _sequence;
    KHTreatment *_treatment;
}

+ (id)modelsForConfiguration:(id)a0 andType:(unsigned long long)a1;
+ (id)modelForConfiguration:(id)a0 andTreatment:(id)a1 andType:(unsigned long long)a2;
+ (unsigned long long)treatmentTypeForContentEntityClass:(id)a0 withCaption:(BOOL)a1;
+ (unsigned long long)treatmentTypeForLayoutUsageType:(unsigned long long)a0;
+ (id)treatmentsForConfiguration:(id)a0 andType:(unsigned long long)a1;
+ (id)treatmentsForConfiguration:(id)a0 andType:(unsigned long long)a1 sortedBy:(unsigned long long)a2;
+ (id)treatmentsForConfiguration:(id)a0 andType:(unsigned long long)a1 withDesignTag:(id)a2;

- (void)dealloc;
- (void)setType:(long long)a0;
- (long long)type;
- (long long)sequence;
- (void)setSequence:(long long)a0;
- (void)setTreatmentId:(long long)a0;
- (long long)treatmentId;
- (id)treatment;
- (void)cacheDesignTag:(id)a0;
- (long long)configurationId;
- (long long)sortBySequence:(id)a0;
- (void)cacheConfigurationId:(long long)a0;
- (void)cacheSequence:(long long)a0;
- (void)cacheTreatmentId:(long long)a0;
- (void)cacheType:(long long)a0;
- (id)designTag;
- (id)initWithModelId:(id)a0;
- (void)setConfigurationId:(long long)a0;
- (void)setDesignTag:(id)a0;
- (long long)sortByDefault:(id)a0;

@end
