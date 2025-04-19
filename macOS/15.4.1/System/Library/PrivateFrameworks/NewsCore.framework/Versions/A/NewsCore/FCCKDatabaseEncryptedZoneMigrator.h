@class NSString, FCCKPrivateDatabaseSchema;
@protocol FCCKDatabaseRecordMiddleware;

@interface FCCKDatabaseEncryptedZoneMigrator : NSObject <FCCKDatabaseMigrator> {
    FCCKPrivateDatabaseSchema *_schema;
    id<FCCKDatabaseRecordMiddleware> _recordEncryptionMiddleware;
    id /* block */ _deprecatedBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)databaseMigrationDidFinishForDatabase:(id)a0 result:(long long)a1;
- (id)databaseMigrationMigrateRecord:(id)a0 database:(id)a1 error:(id *)a2;
- (id)databaseMigrationRecordNamesToMigrateInZone:(id)a0 fromVersion:(long long)a1 toVersion:(long long)a2;
- (BOOL)databaseMigrationShouldDropRecord:(id)a0 database:(id)a1;
- (BOOL)databaseMigrationShouldMigrateEntireZone:(id)a0;
- (id)databaseMigrationZoneNamesFromVersion:(long long)a0 toVersion:(long long)a1;

@end
