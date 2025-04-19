@class NSArray;
@protocol MLComputeDeviceProtocol;

@interface MLComputePlanDeviceUsage : NSObject

@property (readonly, copy, nonatomic) NSArray *deviceSupportInfoArray;
@property (readonly, copy, nonatomic) NSArray *supportedComputeDevices;
@property (readonly, nonatomic) id<MLComputeDeviceProtocol> preferredComputeDevice;

- (void).cxx_destruct;
- (id)initWithSupportedComputeDevices:(id)a0 preferredComputeDevice:(id)a1 deviceSupportInfoArray:(id)a2;
- (id)supportInfoForComputeDevice:(id)a0;

@end
