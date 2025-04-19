@interface CNCDDuplicateContainerMigrator : CNCDMigrator

+ (id)log;

- (void)save;
- (void)migrate;
- (BOOL)consolidateContainers:(id)a0;
- (BOOL)consolidateContainersIfNeeded;

@end
