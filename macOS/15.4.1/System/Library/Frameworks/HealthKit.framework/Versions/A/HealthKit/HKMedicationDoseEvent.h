@class NSString, NSUUID, HKMedicationDoseEventType, NSDate, NSNumber, HKUnit;

@interface HKMedicationDoseEvent : HKSample <NSSecureCoding, NSCopying> {
    long long _logOrigin;
    NSString *_scheduleItemIdentifier;
    NSUUID *_medicationUUID;
    NSString *_medicationIdentifier;
    NSNumber *_scheduledDoseQuantity;
    NSNumber *_doseQuantity;
    HKUnit *_doseUnit;
    NSDate *_scheduledDate;
    long long _status;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long logOrigin;
@property (readonly, copy, nonatomic) NSString *scheduleItemIdentifier;
@property (readonly, copy, nonatomic) NSUUID *medicationUUID;
@property (readonly, copy, nonatomic) NSString *medicationIdentifier;
@property (readonly, nonatomic) BOOL isLastScheduledDose;
@property (readonly, copy) HKMedicationDoseEventType *medicationDoseEventType;
@property (readonly, nonatomic) long long scheduleType;
@property (readonly, copy, nonatomic) NSDate *scheduledDate;
@property (readonly, copy, nonatomic) NSNumber *scheduledDoseQuantity;
@property (readonly, copy, nonatomic) NSNumber *doseQuantity;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) HKUnit *unit;

+ (BOOL)_isConcreteObjectClass;
+ (id)_metadataWithSyncIdentifier:(id)a0 syncVersion:(id)a1 isLastScheduledDose:(BOOL)a2;
+ (id)_newMedicationDoseEventWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4 logOrigin:(long long)a5 scheduleItemIdentifier:(id)a6 medicationUUID:(id)a7 medicationIdentifier:(id)a8 scheduledDoseQuantity:(id)a9 doseQuantity:(id)a10 scheduledDate:(id)a11 status:(long long)a12 config:(id /* block */)a13;
+ (id)medicationDoseEventWithLogOrigin:(long long)a0 scheduleItemIdentifier:(id)a1 medicationIdentifier:(id)a2 scheduledDoseQuantity:(id)a3 doseQuantity:(id)a4 scheduledDate:(id)a5 startDate:(id)a6 status:(long long)a7 metadata:(id)a8;
+ (id)medicationDoseEventWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4 logOrigin:(long long)a5 scheduleItemIdentifier:(id)a6 medicationIdentifier:(id)a7 scheduledDoseQuantity:(double)a8 doseQuantity:(double)a9 scheduledDate:(id)a10 status:(long long)a11 medicationUuid:(id)a12;
+ (BOOL)supportsEquivalence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setStatus:(long long)a0;
- (BOOL)isEquivalent:(id)a0;
- (void)_setDoseQuantity:(id)a0;
- (void)_setDoseUnit:(id)a0;
- (void)_setLogOrigin:(long long)a0;
- (void)_setMedicationIdentifier:(id)a0;
- (void)_setMedicationUUID:(id)a0;
- (void)_setScheduleItemIdentifier:(id)a0;
- (void)_setScheduledDate:(id)a0;
- (void)_setScheduledDoseQuantity:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (id)doseUnit;
- (id)sanitizedSample:(id)a0 forEntitlements:(id)a1;

@end
