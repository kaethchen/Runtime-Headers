@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {
    NSArray *_deviceTypes;
    long long _position;
    NSString *_mediaType;
    NSArray *_supportedMultiCamDeviceSets;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;

+ (void)initialize;
+ (id)allDevices;
+ (id)allAudioDevices;
+ (id)allVideoDevices;
+ (id)allAudioDeviceTypes;
+ (id)allDeviceTypes;
+ (id)allMetadataCameraDeviceTypes;
+ (id)allMetadataCameraDevices;
+ (id)allPointCloudDeviceTypes;
+ (id)allPointCloudDevices;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)allVideoDeviceTypes;
+ (id)allVirtualDeviceTypes;
+ (id)allVirtualDevices;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;

@end
