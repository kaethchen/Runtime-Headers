@class NSString, HKMedication;

@interface HKUserTrackedMedication : HKUserTrackedConcept

@property (readonly, copy, nonatomic) NSString *nickname;
@property (readonly, nonatomic) BOOL isArchived;
@property (readonly, nonatomic) BOOL hasSchedule;
@property (readonly, copy, nonatomic) HKMedication *medication;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isConcreteUserTrackedConceptClass;
+ (BOOL)supportsEquivalence;
+ (id)userTrackedMedicationWithNickname:(id)a0 isArchived:(BOOL)a1 hasSchedule:(BOOL)a2 medication:(id)a3 device:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;

@end
