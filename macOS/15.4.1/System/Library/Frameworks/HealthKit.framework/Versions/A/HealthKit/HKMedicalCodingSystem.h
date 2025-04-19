@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)FHIREventStatus;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)FHIRConditionClinicalStatus;
+ (id)FHIRCoverageStatus;
+ (id)FHIRDeviceStatus;
+ (id)FHIRDocumentReferenceClinicalNoteCategorySystem;
+ (id)FHIRDocumentReferenceClinicalNoteStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)FHIRMedicationRequestStatus;
+ (id)FHIRObservationStatus;
+ (id)FHIRQuantityComparatorSystem;
+ (id)ICD9System;
+ (id)RxNormCodeSystem;
+ (id)SNOMEDCodeSystem;
+ (id)FHIRConditionVerificationStatus;
+ (id)LOINCCodeSystem;
+ (id)CVXSystem;
+ (id)FHIRAllergyIntoleranceClinicalStatus;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRAllergyIntoleranceType;
+ (id)FHIRCarePlanStatus;
+ (id)FHIRCoverageClassification;
+ (id)FHIRCoverageType;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIRDocumentReferenceClinicalNoteDocStatus;
+ (id)FHIRGoalStatus;
+ (id)FHIRImmunizationStatus;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRProcedureStatus;
+ (id)ICD10System;
+ (id)NDCSystem;
+ (id)UCUMSystem;
+ (id)adHocConceptSystem;
+ (id)appleHealthDataTypeSystem;
+ (id)appleOntologySystem;
+ (id)argonautHL7System;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)externalCodeSystems;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)textSystem;
+ (id)unknownSystem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCustomIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (id)ontology_hasCodingSystemAttributeIdentifier;

@end
