@interface SMMigrateGroupsStep : SMEngineStep

- (BOOL)createGroup:(id)a0 inDB:(id)a1;
- (id)createGroupsInDB:(id)a0;
- (BOOL)deleteGroup:(id)a0 inDB:(id)a1;
- (BOOL)migrateGroups;
- (id)postProcess;

@end
