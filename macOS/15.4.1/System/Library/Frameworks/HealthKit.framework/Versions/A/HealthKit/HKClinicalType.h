@interface HKClinicalType : HKSampleType

+ (id)allTypes;
+ (id)allergyRecordType;
+ (id)clinicalNoteRecordType;
+ (id)conditionRecordType;
+ (id)coverageRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)medicationRecordType;
+ (id)procedureRecordType;
+ (id)sampleTypesForResourceType:(id)a0 error:(id *)a1;
+ (id)vitalSignRecordType;

- (id)initWithIdentifier:(id)a0;
- (BOOL)isClinicalType;

@end
