@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (id)initWithTransaction:(id)a0;
- (void)azul_addProtectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (id)tigrisUnprotectedMigrationSteps;
- (void)dawn_addProtectedMigrationSteps;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;
- (void)addMigrationSteps:(id)a0;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (void)addPrimaryMigrationSteps;
- (void)azul_addUnprotectedMigrationSteps;
- (id)boulderProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (id)butlerProtectedMigrationSteps;
- (id)cinarProtectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (id)corryProtectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (void)crystal_addProtectedMigrationSteps;
- (void)crystal_addUnprotectedMigrationSteps;
- (void)dawn_addUnprotectedMigrationSteps;
- (id)eagleProtectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (id)emetUnprotectedMigrationSteps;
- (id)erieProtectedMigrationSteps;
- (id)erieUnprotectedMigrationSteps;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (unsigned long long)fetchLegacySyncIdentity:(id)a0 error:(id *)a1;
- (void)future_addProtectedMigrationSteps;
- (void)future_addUnprotectedMigrationSteps;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (id)monarchProtectedMigrationSteps;
- (id)monarchUnprotectedMigrationSteps;
- (id)okemoZursProtectedMigrationSteps;
- (id)okemoZursUnprotectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (void)peace_addUnprotectedMigrationSteps;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (void)sky_addProtectedMigrationSteps;
- (void)sky_addUnprotectedMigrationSteps;
- (void)sydney_addProtectedMigrationSteps;
- (void)sydney_addUnprotectedMigrationSteps;
- (id)tigrisProtectedMigrationSteps;
- (id)whitetailProtectedMigrationSteps;
- (id)whitetailUnprotectedMigrationSteps;
- (void)yukon_addProtectedMigrationSteps;
- (void)yukon_addUnprotectedMigrationSteps;

@end
