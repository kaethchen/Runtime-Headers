@class HKMedicationDisplayNameComponents, NSArray, HKMedicationIdentifier, HKClinicalCodingCollection, HKMedicationLoggingUnit;

@interface HKMedication : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKMedicationIdentifier *identifier;
@property (readonly, copy, nonatomic) HKMedicationDisplayNameComponents *displayNameComponents;
@property (readonly, copy, nonatomic) HKMedicationLoggingUnit *loggingUnit;
@property (readonly, copy, nonatomic) NSArray *components;
@property (readonly, copy, nonatomic) HKClinicalCodingCollection *codingCollection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayNameComponents:(id)a1 loggingUnit:(id)a2 components:(id)a3 codingCollection:(id)a4;

@end
