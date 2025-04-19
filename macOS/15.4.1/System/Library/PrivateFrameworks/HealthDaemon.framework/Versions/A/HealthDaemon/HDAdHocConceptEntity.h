@interface HDAdHocConceptEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)adHocConceptForCodingCollection:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)adHocConceptForIdentifier:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)deleteNonIndexedConceptsWithTransaction:(id)a0 error:(id *)a1;
+ (BOOL)enumerateAdHocConceptWithRawIdentifiers:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (id)generateAdHocConceptForCodingCollection:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;

@end
