@class TCComputeDevice;
@protocol NSObject;

@interface TCComputeDeviceManager : NSObject {
    id<NSObject> _deviceObserver;
    BOOL _forceCPU;
}

@property (retain) TCComputeDevice *defaultDevice;
@property (retain) TCComputeDevice *pipelineDevicePrimary;
@property (retain) TCComputeDevice *pipelineDeviceSecondary;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setDevices:(id)a0;
- (id)initSingleton;
- (id)initWithDevices:(id)a0 forceCPU:(BOOL)a1;
- (void)selectDevices:(id)a0 group1:(id)a1 group2:(id)a2;

@end
