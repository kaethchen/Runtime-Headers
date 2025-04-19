@class HKSleepHealthStore, HKHealthStore;

@interface HKSPHealthStoreProvider : NSObject

@property (readonly, nonatomic) HKSleepHealthStore *sleepHealthStore;
@property (readonly, nonatomic) HKHealthStore *healthStore;

+ (id)_initializedLocalDeviceHealthStore;

- (void).cxx_destruct;
- (id)initWithLocalDeviceHealthStore;
- (id)initWithSleepHealthStore:(id)a0 healthStore:(id)a1;

@end
