@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)metalDevice;
- (id)computeDevice;
- (id)initWithMetalDevice:(id)a0;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (int)espressoStorageType;
- (BOOL)targetsGPU;

@end
