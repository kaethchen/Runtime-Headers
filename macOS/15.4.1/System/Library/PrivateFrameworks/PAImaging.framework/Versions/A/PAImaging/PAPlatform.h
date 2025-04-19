@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PAPlatform : NSObject {
    struct __CFRunLoopSource { } *_powerManagementObserver;
    int _discreteGraphicsRetainCount;
    NSObject<OS_dispatch_queue> *_thermalPressureQueue;
    int _thermalPressureNotifyToken;
}

@property BOOL isPluggedIn;
@property BOOL hasRetainedDiscreteGPU;
@property int thermalPressureLevel;
@property (readonly) NSString *model;
@property (readonly) BOOL hasHeadlessGPU;
@property (readonly) BOOL hasMuxedGraphics;
@property (readonly) BOOL hasDiscreteGPU;
@property (readonly) double baseClockSpeedInGHz;
@property (readonly) long long physicalCoreCount;
@property (readonly) double systemRAMInGigabytes;
@property (readonly) unsigned long long masterCacheSize;
@property (readonly) unsigned long long previewCacheSize;
@property (readonly) unsigned long long thumbnailCacheSize;
@property (readonly) unsigned long long temporaryCacheSize;

+ (id)platform;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_updateThermalPressureLevel;
- (void)_initHardwareProperties;
- (void)_initIOProperties;
- (void)_initPowerMonitoring;
- (void)_initThermalPressureMonitoring;
- (BOOL)_isPluggedIn;
- (void)_powerManagementUpdated;
- (void)_releaseDiscreteGPU;
- (void)_retainDiscreteGPU;
- (void)_updateMUXLockDown;
- (void)_updateMUXLockDownIfNeeded;
- (void)releaseDiscreteGPU;
- (void)retainDiscreteGPU;

@end
