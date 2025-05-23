@class NSData, NSString, HKVerifiableClinicalRecordType, NSUUID, NSArray, HKVerifiableClinicalRecordSubject, NSDate;

@interface HKVerifiableClinicalRecord : HKSample

@property (readonly, copy, nonatomic) NSString *recordTypeDisplayName;
@property (readonly, copy, nonatomic) NSString *recordItemsDisplayName;
@property (readonly, copy, nonatomic) NSString *recordIssuerDisplayName;
@property (readonly, copy, nonatomic) HKVerifiableClinicalRecordType *verifiableClinicalRecordType;
@property (readonly, copy, nonatomic) NSUUID *originIdentifier;
@property (readonly, copy) NSArray *recordTypes;
@property (readonly, copy) NSString *issuerIdentifier;
@property (readonly, copy) HKVerifiableClinicalRecordSubject *subject;
@property (readonly, copy) NSDate *issuedDate;
@property (readonly, copy) NSDate *relevantDate;
@property (readonly, copy) NSDate *expirationDate;
@property (readonly, copy) NSArray *itemNames;
@property (readonly, copy) NSString *sourceType;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSData *JWSRepresentation;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (long long)_privateSourceTypeForExternalType:(id)a0;
+ (id)sourceTypeForInternalType:(long long)a0;
+ (BOOL)supportsEquivalence;
+ (id)verifiableClinicalRecordWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4 recordTypes:(id)a5 issuedDate:(id)a6 relevantDate:(id)a7 expirationDate:(id)a8 issuerIdentifier:(id)a9 subject:(id)a10 itemNames:(id)a11 dataRepresentation:(id)a12 originIdentifier:(id)a13 sourceType:(long long)a14;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setExpirationDate:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void)_setSourceType:(long long)a0;
- (void)_setIssuedDate:(id)a0;
- (void)_setDataRepresentation:(id)a0;
- (void)_setIssuerIdentifier:(id)a0;
- (void)_setItemNames:(id)a0;
- (void)_setOriginIdentifier:(id)a0;
- (void)_setRecordTypes:(id)a0;
- (void)_setRelevantDate:(id)a0;
- (void)_setSubject:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;

@end
