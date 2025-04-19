@class HMDCharacteristic, NSNumber;

@interface HMDCharacteristicNotificationChangeThreshold : NSObject

@property (retain, nonatomic) HMDCharacteristic *characteristic;
@property (copy, nonatomic) NSNumber *threshold;

- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 threshold:(id)a1;

@end
