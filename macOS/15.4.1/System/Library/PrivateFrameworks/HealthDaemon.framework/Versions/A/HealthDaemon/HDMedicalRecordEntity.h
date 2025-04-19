@interface HDMedicalRecordEntity : HDSampleEntity

+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)checkConstraints;
+ (id)attachmentObjectIdentifierForSampleWithUUID:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (id)latestCreationDateWithProfile:(id)a0 error:(id *)a1;
+ (id)latestModifiedDateWithProfile:(id)a0 error:(id *)a1;
+ (id)medicalRecordWithAttachmentObjectIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)orderingTermForSortDescriptor:(id)a0;

- (BOOL)willDeleteWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
