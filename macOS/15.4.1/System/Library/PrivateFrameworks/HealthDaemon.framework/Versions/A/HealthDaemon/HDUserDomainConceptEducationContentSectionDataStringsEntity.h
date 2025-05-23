@interface HDUserDomainConceptEducationContentSectionDataStringsEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (BOOL)addSectionDataStringsToCodable:(id)a0 sectionDataID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)enumerateSectionDataStringsForEducationContentSectionDataID:(long long)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)insertEducationContentSectionDataString:(id)a0 sectionDataPersistentID:(long long)a1 transaction:(id)a2 error:(id *)a3;

@end
