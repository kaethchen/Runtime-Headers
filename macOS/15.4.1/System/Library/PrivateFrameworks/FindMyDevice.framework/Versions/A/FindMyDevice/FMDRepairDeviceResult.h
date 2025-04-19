@class NSArray;

@interface FMDRepairDeviceResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *eligibleDevices;
@property (retain, nonatomic) NSArray *devicesInRepairMode;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEligibleDevices:(id)a0 devicesInRepairMode:(id)a1;

@end
