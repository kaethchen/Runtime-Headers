@class NSString;

@interface SafeEjectGPUCA : NSObject {
    unsigned int fMasterPort;
    struct __GPUWranglerGPU { } *fGPU;
    NSString *fGpuVendorId;
    NSString *fGpuDeviceId;
    NSString *fGpuVendorName;
    NSString *fGpuModelName;
    NSString *fGpuName;
    NSString *fTbtName;
    NSString *fTbtVendorId;
    NSString *fTbtModelId;
    NSString *fTbtVendorName;
    NSString *fTbtModelName;
    NSString *fTbtSupportedLinkWidth;
    NSString *fTbtTargetLinkWidth;
    NSString *fTbtCurrentLinkWidth;
    NSString *fTbtSupportedLinkSpeed;
    NSString *fTbtTargetLinkSpeed;
    NSString *fTbtCurrentLinkSpeed;
    NSString *fTbtSupportedBW;
    NSString *fTbtCurrentBW;
    NSString *fTbtPath;
    NSString *fTbtDepth;
}

- (void)dealloc;
- (void)GPULogRemove:(unsigned int)a0 ejectState:(id)a1 duration:(long long)a2;
- (void)GPULogAdd:(unsigned int)a0;
- (void)GPULogXgEvent:(id)a0 count:(unsigned int)a1 state:(id)a2 flags:(unsigned long long)a3 duration:(long long)a4;
- (void)addPropertyNumber:(unsigned int)a0 toDictionary:(id)a1 propertyName:(id)a2;
- (void)addPropertyString:(unsigned int)a0 toDictionary:(id)a1 propertyName:(id)a2;
- (BOOL)copyThunderboltProperties:(unsigned int)a0;
- (id)getPropertyNSString:(unsigned int)a0 propertyName:(id)a1;
- (unsigned int)getPropertyU32:(unsigned int)a0 propertyName:(id)a1;
- (id)getThunderboltPath:(unsigned int)a0;
- (id)gpuVendorNameForId:(unsigned int)a0;
- (BOOL)initAnalytics;
- (id)initWithGPU:(struct __GPUWranglerGPU { } *)a0;

@end
