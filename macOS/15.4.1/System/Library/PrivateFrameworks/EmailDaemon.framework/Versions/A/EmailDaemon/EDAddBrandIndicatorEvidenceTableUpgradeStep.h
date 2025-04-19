@class NSString;

@interface EDAddBrandIndicatorEvidenceTableUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_addBrandIndicatorEvidenceTableWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (id)_brandIndicatorEvidenceTableSchemaWithBrandIndicatorsTableSchema:(id)a0;
+ (BOOL)_copyEvidenceFromBrandIndicatorsWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (BOOL)_dropBrandIndicatorsIndexesWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (BOOL)_dropEvidenceURLColumnFromBrandIndicatorsTableWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (BOOL)_dropVerifiedColumnFromBrandIndicatorsTableWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (id)_qualifiedNameForName:(id)a0 inDatabase:(id)a1;
+ (BOOL)_runWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (BOOL)runWithConnection:(id)a0 error:(id *)a1;
+ (BOOL)runWithConnection:(id)a0 journalManager:(id)a1 error:(id *)a2;
+ (BOOL)runWithConnection:(id)a0 protectedDatabaseName:(id)a1 error:(id *)a2;


@end
