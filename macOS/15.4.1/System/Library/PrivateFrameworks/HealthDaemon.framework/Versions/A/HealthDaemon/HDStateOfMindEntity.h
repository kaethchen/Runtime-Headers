@interface HDStateOfMindEntity : HDSampleEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)predicateForReflectiveInterval:(long long)a0;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (BOOL)isConcreteEntity;
+ (id)predicateForDomain:(long long)a0;
+ (id)predicateForDomains:(id)a0;
+ (id)predicateForLabel:(long long)a0;
+ (id)predicateForLabels:(id)a0;
+ (id)predicateForReflectiveInterval:(long long)a0 equals:(BOOL)a1;
+ (id)predicateForValence:(double)a0 comparisonType:(long long)a1;
+ (id)privateSubEntities;

@end
