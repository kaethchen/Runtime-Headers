@interface ABMultiValueCoreDataWrapper : ABMultiValue

+ (void)initialize;
+ (id)serviceWithName:(id)a0 inManagedObjectContext:(id)a1 inPersistentStore:(id)a2;
+ (BOOL)applyMultiValue:(id)a0 withCustomProperty:(id)a1 toRecord:(id)a2 managedObject:(id)a3;
+ (BOOL)applyMultiValue:(id)a0 withProperty:(id)a1 toManagedObject:(id)a2;
+ (BOOL)applyMultiValue:(id)a0 withProperty:(id)a1 toRecord:(id)a2;
+ (void)deletePropertyValues:(id)a0 withKey:(id)a1 andSaveDistributionListConfigs:(id)a2 inRecord:(id)a3 withContext:(id)a4;
+ (id)messagingAddressesWithService:(id)a0 owner:(id)a1;
+ (id)newWithMultiValueClass:(Class)a0 managedObject:(id)a1 property:(id)a2;
+ (BOOL)populateIdentifiers:(id)a0 values:(id)a1 labels:(id)a2 primaryIdentifier:(id *)a3 withDataFromManagedObject:(id)a4 property:(id)a5;
+ (BOOL)populateIdentifiers:(id)a0 values:(id)a1 labels:(id)a2 primaryIdentifier:(id *)a3 withDataFromRecord:(id)a4 customPropertyDescription:(id)a5;
+ (BOOL)populateIdentifiers:(id)a0 values:(id)a1 labels:(id)a2 primaryIdentifier:(id *)a3 withDataFromRecord:(id)a4 property:(id)a5;
+ (id)primaryIdentifierForEntities:(id)a0;
+ (void)rewireDistributionListConfig:(id)a0 withPropertyValue:(id)a1 identifier:(id)a2;

- (id)initWithManagedObject:(id)a0 property:(id)a1;
- (id)initWithRecord:(id)a0 customProperty:(id)a1;
- (id)initWithRecord:(id)a0 customPropertyDescription:(id)a1;
- (id)initWithRecord:(id)a0 managedObject:(id)a1 property:(id)a2;

@end
