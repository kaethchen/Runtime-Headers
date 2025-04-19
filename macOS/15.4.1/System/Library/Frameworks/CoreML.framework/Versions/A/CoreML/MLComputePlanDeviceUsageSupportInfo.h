@protocol MLComputeDeviceProtocol;

@interface MLComputePlanDeviceUsageSupportInfo : NSObject

@property (readonly, nonatomic) id<MLComputeDeviceProtocol> computeDevice;
@property (readonly, nonatomic) long long state;

- (id)description;
- (void).cxx_destruct;
- (id)initWithComputeDevice:(id)a0 supportState:(long long)a1;

@end
