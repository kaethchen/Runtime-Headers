@class NSDictionary;

@interface PLPropertyIndexMapping : NSObject {
    NSDictionary *_indexesByAttributeNamesByEntityNames;
    NSDictionary *_attributeNamesByIndexByEntityNames;
    NSDictionary *_indexesByRelationshipNamesByEntityNames;
    NSDictionary *_relationshipNamesByIndexByEntityNames;
    NSDictionary *_transientAttributeNamesByEntityNames;
    NSDictionary *_toManyRelationshipNamesByEntityNames;
}

@property (class, readonly) PLPropertyIndexMapping *defaultMapping;

+ (id)attributeNamesForIndexValues:(unsigned long long)a0 entity:(id)a1;
+ (BOOL)includesToManyRelationship:(id)a0 entity:(id)a1;
+ (unsigned long long)indexValueForAttributeNames:(id)a0 entity:(id)a1;
+ (unsigned long long)indexValueForRelationshipNames:(id)a0 entity:(id)a1;
+ (void)recordChangedKeys:(id)a0 forObjectID:(id)a1 inAttributesByOID:(id)a2 relationshipsByOID:(id)a3;
+ (id)relationshipNamesForIndexValues:(unsigned long long)a0 entity:(id)a1;
+ (void)recordChangedProperties:(id)a0 forObjectID:(id)a1 inAttributesByOID:(id)a2 relationshipsByOID:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithManagedObjectModel:(id)a0;
- (id)attributeNamesForIndexValues:(struct { unsigned long long x0; })a0 entity:(id)a1;
- (BOOL)includesToManyRelationship:(id)a0 entity:(id)a1;
- (struct { unsigned long long x0; })indexValueForAttributeNames:(id)a0 entity:(id)a1;
- (struct { unsigned long long x0; })indexValueForRelationshipNames:(id)a0 entity:(id)a1;
- (void)recordChangedKeys:(id)a0 forObjectID:(id)a1 inAttributesByOID:(id)a2 relationshipsByOID:(id)a3;
- (id)relationshipNamesForIndexValues:(struct { unsigned long long x0; })a0 entity:(id)a1;
- (id)_dumpDictionary:(id)a0 toDir:(id)a1 withName:(id)a2;
- (struct { unsigned long long x0; })_indexValueForPropertyNames:(id)a0 entityName:(id)a1 indexesByPropertyNamesByEntityNames:(id)a2;
- (id)_processEntityByName:(id)a0 obj:(id)a1;
- (id)_processSubEntityByName:(id)a0 entity:(id)a1 withEntityData:(id)a2;
- (id)_propertyNamesForIndexValues:(struct { unsigned long long x0; })a0 entity:(id)a1 propertyNamesByIndexByEntityNames:(id)a2;
- (BOOL)dumpToDirectory:(id)a0 error:(id *)a1;
- (BOOL)includesTransientAttributes:(id)a0 entity:(id)a1;
- (void)recordChangedProperties:(id)a0 forObjectID:(id)a1 inAttributesByOID:(id)a2 relationshipsByOID:(id)a3;
- (void)updatedIndexesForChangedKeys:(id)a0 entityName:(id)a1 withAttributes:(struct { unsigned long long x0; })a2 relationships:(struct { unsigned long long x0; })a3 updateBlock:(id /* block */)a4;

@end
