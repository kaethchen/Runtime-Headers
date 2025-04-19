@interface NFStorageControllerESEExpress : NFStorageController

- (id)name;
- (void)deleteAllESEExpressEntities;
- (id)fetchESEExpressEntitiesWithError:(id *)a0;
- (void)updateESEExpressEntitiesWithConfig:(id)a0;
- (id)_deleteAllESEExpressEntities;
- (id)dbProtectionType;

@end
