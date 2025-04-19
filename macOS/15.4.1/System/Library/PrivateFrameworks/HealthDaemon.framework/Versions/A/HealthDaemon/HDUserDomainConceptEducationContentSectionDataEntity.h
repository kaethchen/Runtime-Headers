@interface HDUserDomainConceptEducationContentSectionDataEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (BOOL)addSectionDataToCodable:(id)a0 educationContentSectionID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)enumerateSectionDataForEducationContentSectionID:(long long)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)insertEducationContentSectionData:(id)a0 sectionPersistentID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)privateSubEntities;

@end
