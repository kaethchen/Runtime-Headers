@class OS_remote_device, NSString;

@interface BOSDevice : NSObject

@property (retain) OS_remote_device *device;
@property (retain) NSString *buildVersion;
@property (retain) NSString *bridgeVersion;
@property BOOL productionStatus;
@property (retain) NSString *hardwareModel;
@property BOOL isAppleInternal;

- (void).cxx_destruct;
- (unsigned long long)requirementSatisfiedForMinimumBridgeVersion:(id)a0;
- (id)_initWithBridgeVersion:(id)a0;
- (id)initWithRunningDevice;

@end
