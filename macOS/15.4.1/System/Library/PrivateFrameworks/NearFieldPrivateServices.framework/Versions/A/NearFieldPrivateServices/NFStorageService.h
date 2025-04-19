@interface NFStorageService : NFPrivateService

- (id)serviceName;
- (BOOL)canRun;
- (id)updateAppletEntitiesWithConfig:(id)a0;
- (void)deleteAllAppletEntities;
- (void)deleteAllESEExpressEntities;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (id)fetchESEExpressEntitiesWithError:(id *)a0;
- (void)updateESEExpressEntitiesWithConfig:(id)a0;

@end
