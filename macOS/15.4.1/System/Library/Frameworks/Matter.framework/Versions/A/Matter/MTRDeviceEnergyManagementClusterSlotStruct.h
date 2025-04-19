@class NSNumber, NSArray;

@interface MTRDeviceEnergyManagementClusterSlotStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *minDuration;
@property (copy, nonatomic) NSNumber *maxDuration;
@property (copy, nonatomic) NSNumber *defaultDuration;
@property (copy, nonatomic) NSNumber *elapsedSlotTime;
@property (copy, nonatomic) NSNumber *remainingSlotTime;
@property (copy, nonatomic) NSNumber *slotIsPausable;
@property (copy, nonatomic) NSNumber *minPauseDuration;
@property (copy, nonatomic) NSNumber *maxPauseDuration;
@property (copy, nonatomic) NSNumber *manufacturerESAState;
@property (copy, nonatomic) NSNumber *nominalPower;
@property (copy, nonatomic) NSNumber *minPower;
@property (copy, nonatomic) NSNumber *maxPower;
@property (copy, nonatomic) NSNumber *nominalEnergy;
@property (copy, nonatomic) NSArray *costs;
@property (copy, nonatomic) NSNumber *minPowerAdjustment;
@property (copy, nonatomic) NSNumber *maxPowerAdjustment;
@property (copy, nonatomic) NSNumber *minDurationAdjustment;
@property (copy, nonatomic) NSNumber *maxDurationAdjustment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
