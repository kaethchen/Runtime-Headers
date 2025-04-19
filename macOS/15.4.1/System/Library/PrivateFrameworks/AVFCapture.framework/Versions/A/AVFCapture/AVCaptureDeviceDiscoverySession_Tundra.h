@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession_Tundra : NSObject {
    NSArray *_deviceTypes;
    long long _position;
    NSString *_mediaType;
    BOOL _allowIOSMacEnvironment;
    NSArray *_devices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _devicesLock;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;

+ (void)initialize;
+ (id)allDevices;
+ (id)allDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)spatialCaptureDiscomfortReasons;
- (void)_handleDeviceConnectedNotification:(id)a0;
- (void)_handleDeviceDisconnectedNotification:(id)a0;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;
- (BOOL)_isDeviceAlreadyDiscovered:(id)a0;
- (unsigned long long)stereoCaptureStatus;
- (unsigned long long)stereoVideoCaptureStatus;

@end
