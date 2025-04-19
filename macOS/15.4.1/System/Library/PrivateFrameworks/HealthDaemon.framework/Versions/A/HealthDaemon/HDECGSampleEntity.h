@interface HDECGSampleEntity : HDSampleEntity

+ (id)foreignKeys;
+ (id)databaseTable;
+ (BOOL)_insertECGWithCodableBinarySample:(id)a0 syncStore:(id)a1 profile:(id)a2 provenance:(id)a3 error:(id *)a4;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (BOOL)isConcreteEntity;

@end
