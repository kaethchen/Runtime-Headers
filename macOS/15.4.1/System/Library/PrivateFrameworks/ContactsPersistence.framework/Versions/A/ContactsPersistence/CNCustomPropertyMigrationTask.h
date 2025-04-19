@class NSArray, NSManagedObjectContext, NSMutableOrderedSet;

@interface CNCustomPropertyMigrationTask : CNTask

@property (class, readonly) NSArray *supportedCustomPropertyNames;

@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, nonatomic) NSMutableOrderedSet *customPropertyDefinitionsToDelete;
@property (readonly, nonatomic) NSMutableOrderedSet *customPropertyValuesToDelete;

+ (id)os_log;
+ (id)actionsByProperty;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)run:(id *)a0;
- (id)fetchCustomPropertiesWithNames:(id)a0;
- (void)deleteMigratedObjects;
- (void)deleteObjects:(id)a0;
- (id)initWithManagedObjectContext:(id)a0;
- (void)markCustomPropertyDefinitionsForDeletion:(id)a0;
- (void)markCustomPropertyValuesForDeletion:(id)a0;
- (id)migratePropertyValues:(id)a0;
- (void)unmarkCustomPropertyDefinitionsForDeletion:(id)a0;
- (id)valuesForCustomProperties:(id)a0;

@end
