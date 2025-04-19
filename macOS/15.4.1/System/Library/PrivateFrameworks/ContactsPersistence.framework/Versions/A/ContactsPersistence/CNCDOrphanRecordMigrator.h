@class CNCDContainer;

@interface CNCDOrphanRecordMigrator : CNCDMigrator

@property (readonly) CNCDContainer *container;

+ (id)os_log;

- (void).cxx_destruct;
- (void)migrate;
- (void)adoptAdoptUncontainedObjectsWithEntityName:(id)a0 containerRelationshipName:(id)a1;
- (void)adoptUncontainedObjects;
- (id)fetchExistingContainer;
- (id)fetchExistingContainers:(id *)a0;
- (void)fetchOrCreateDefaultContainer;
- (id)fetchUncontainedObjectsWithEntityName:(id)a0 containerRelationshipName:(id)a1;
- (id)makeNewDefaultContainer;
- (void)saveContext;

@end
