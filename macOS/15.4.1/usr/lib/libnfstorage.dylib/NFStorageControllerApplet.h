@interface NFStorageControllerApplet : NFStorageController

- (id)name;
- (id)updateAppletEntitiesWithConfig:(id)a0;
- (void)deleteAllAppletEntities;
- (id)fetchAppletEntitiesWithError:(id *)a0;
- (id)_deleteAllAppletEntities;
- (id)dbProtectionType;

@end
