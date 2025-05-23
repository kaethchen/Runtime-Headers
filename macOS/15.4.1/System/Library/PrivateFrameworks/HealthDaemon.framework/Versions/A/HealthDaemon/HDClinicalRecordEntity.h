@interface HDClinicalRecordEntity : HDSampleEntity

+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)_clinicalRecordForSampleType:(id)a0 predicate:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_predicateForRecordWithFHIRResourceIdentifier:(id)a0;
+ (id)attachmentObjectIdentifierForSampleWithUUID:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)clinicalRecordWithAttachmentObjectIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)existingClinicalRecordCreatedFromResourceWithIdentifier:(id)a0 basePredicate:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (BOOL)isConcreteEntity;

@end
