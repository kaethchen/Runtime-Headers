@class NSString, NSDictionary, NSUUID, NSObject;
@protocol OS_os_log, SLSBrightnessControl;

@interface CBBrightnessProxySKL : NSObject <CBBrightnessProxy, CBDisplayTimeoutPolicy> {
    NSObject<OS_os_log> *_logHandle;
    id<SLSBrightnessControl> _brightnessControl;
}

@property (readonly) id brightnessNotificationRequestEDR;
@property (readonly) NSString *brightnessRequestEDRHeadroom;
@property (readonly) NSString *brightnessRequestRampDuration;
@property (readonly) unsigned long long CBDispTypeIntegrated;
@property (readonly) unsigned long long CBDispTypeExternal;
@property (readonly) unsigned long long CBDispTypeWireless;
@property (readonly) unsigned long long CBDispTypeVirtual;
@property (readonly) unsigned long long CBDispTypeDFR;
@property (readonly) id brightnessNotificationAttached;
@property (readonly) id brightnessNotificationDetached;
@property (readonly) id brightnessNotificationPowerOn;
@property (readonly) id brightnessNotificationPowerOff;
@property (readonly) unsigned long long displayType;
@property (readonly) int displayId;
@property (readonly) unsigned long long vendorId;
@property (readonly) unsigned long long productId;
@property (readonly) unsigned long long serialNumber;
@property (readonly) NSDictionary *brightnessCapabilities;
@property (readonly) NSUUID *uuid;
@property (readonly) BOOL whitePointAvailable;
@property (readonly) BOOL brightnessAvailable;
@property (readonly) float maximumLuminance;
@property (readonly) NSUUID *containerId;
@property (readonly) struct { float x0; float x1; } nativeWhitePoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)getUUID;
- (BOOL)commitBrightness:(id *)a0;
- (BOOL)commitBrightnessTimeouts:(id *)a0;
- (void)registerForNotifications:(id)a0 withBlock:(id /* block */)a1;
- (void)setAmbient:(float)a0;
- (void)setApplyPolicy;
- (void)setBrightnessLimit:(float)a0;
- (BOOL)setContrastEnhancer:(float)a0 rampDuration:(double)a1 error:(id *)a2;
- (void)setDimMessagingTimeout:(double)a0;
- (void)setFilteredAmbient:(float)a0;
- (void)setHeadroom:(float)a0;
- (void)setNotificationQueue:(id)a0;
- (void)setPotentialHeadroom:(float)a0;
- (void)setReferenceHeadroom:(float)a0;
- (void)setSDRBrightness:(float)a0;
- (void)setShieldingTimeout:(double)a0;
- (void)setSleepMessagingTimeout:(double)a0;
- (BOOL)setWhitePoint:(id)a0 rampDuration:(double)a1 error:(id *)a2;
- (void)unregisterNotificationBlocks;
- (unsigned long long)getSerialNumber;
- (id)getBrightnessCapabilities;
- (unsigned int)getDisplayId;
- (unsigned long long)getDisplayType;
- (unsigned long long)getProductId;
- (unsigned long long)getVendorId;
- (id)initWithSLSBrightnessControl:(id)a0;
- (BOOL)isBrightnessAvailable;
- (BOOL)isWhitePointAvailable;
- (BOOL)isWhitePointD50XYZ;

@end
