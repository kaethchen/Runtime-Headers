@class NSSet, HMCharacteristic;
@protocol NSCopying;

@interface HMCharacteristicWriteAction : HMAction {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSSet *allowedTargetValueClassesForShortcuts;

@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, copy, nonatomic) id<NSCopying> targetValue;

+ (id)new;
+ (BOOL)supportsSecureCoding;
+ (id)actionWithProtoBuf:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)initWithUUID:(id)a0;
- (BOOL)isValidWithError:(id *)a0;
- (BOOL)_handleUpdates:(id)a0;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)_resolvedCharacteristicInHome:(id)a0 forCharacteristic:(id)a1;
- (id)_serializeForAdd;
- (id)encodeAsProtoBuf;
- (id)initWithCharacteristic:(id)a0 targetValue:(id)a1;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (BOOL)isAffectedByEndEvents;
- (BOOL)isKindOfAllowedTargetValueClass:(id)a0;
- (BOOL)mergeFromNewObject:(id)a0;
- (BOOL)requiresDeviceUnlock;
- (void)updateTargetValue:(id)a0 completionHandler:(id /* block */)a1;

@end
