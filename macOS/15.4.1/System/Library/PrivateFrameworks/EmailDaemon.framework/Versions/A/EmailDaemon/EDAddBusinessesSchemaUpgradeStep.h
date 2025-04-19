@class NSString;

@interface EDAddBusinessesSchemaUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)_businessAddressesTableSchema;
+ (id)_businessCategoriesTableSchema;
+ (id)_businessesTableSchema;
+ (int)runWithConnection:(id)a0 databaseName:(id)a1 updateProtectedSchema:(BOOL)a2;
+ (BOOL)runWithConnection:(id)a0 error:(id *)a1;


@end
