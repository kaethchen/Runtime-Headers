@protocol PLCloudPersistentHistoryMigratorContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {
    id<PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithMigratorContext:(id)a0;

- (void).cxx_destruct;
- (long long)migrate;
- (id)initWithMigratorContext:(id)a0;
- (void)migrateToPersistentHistoryIfNecessary;

@end
