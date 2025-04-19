@class NSDate, HKQuantity;

@interface HKVisionPrescription : HKSample <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKQuantity *leftSphere;
@property (readonly, copy, nonatomic) HKQuantity *rightSphere;
@property (readonly, copy, nonatomic) HKQuantity *leftCylinder;
@property (readonly, copy, nonatomic) HKQuantity *rightCylinder;
@property (readonly, copy, nonatomic) HKQuantity *leftAxis;
@property (readonly, copy, nonatomic) HKQuantity *rightAxis;
@property (readonly, copy, nonatomic) HKQuantity *leftAddPower;
@property (readonly, copy, nonatomic) HKQuantity *rightAddPower;
@property (readonly, nonatomic) unsigned long long prescriptionType;
@property (readonly, copy, nonatomic) NSDate *dateIssued;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

+ (id)prescriptionWithType:(unsigned long long)a0 dateIssued:(id)a1 expirationDate:(id)a2 device:(id)a3 metadata:(id)a4;
+ (BOOL)_isConcreteObjectClass;
+ (BOOL)_validateAddPower:(id)a0 error:(id *)a1;
+ (BOOL)_validateAxis:(id)a0 error:(id *)a1;
+ (BOOL)_validateCylinder:(id)a0 error:(id *)a1;
+ (BOOL)_validateSphere:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_validateCommonFieldsWithError:(id *)a0;
- (void)_setPrescriptionType:(unsigned long long)a0;
- (BOOL)_validateForSavingWithClientEntitlements:(id)a0 applicationSDKVersionToken:(unsigned long long)a1 isAppleWatch:(BOOL)a2 error:(id *)a3;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;

@end
