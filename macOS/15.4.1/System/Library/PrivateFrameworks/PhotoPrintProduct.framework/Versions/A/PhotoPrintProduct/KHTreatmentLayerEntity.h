@interface KHTreatmentLayerEntity : KHDBEntity

- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (id)loadModelsFromResultSet:(id)a0 limit:(unsigned long long)a1;
- (void)persistModel:(id)a0;

@end
