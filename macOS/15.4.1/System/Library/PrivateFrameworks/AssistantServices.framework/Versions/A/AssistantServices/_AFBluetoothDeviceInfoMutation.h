@class NSString, NSUUID, AFBluetoothHeadGestureConfiguration, AFBluetoothDeviceInfo;

@interface _AFBluetoothDeviceInfoMutation : NSObject <AFBluetoothDeviceInfoMutating> {
    AFBluetoothDeviceInfo *_base;
    NSString *_address;
    NSString *_name;
    NSUUID *_deviceUID;
    unsigned int _vendorID;
    unsigned int _productID;
    BOOL _isAdvancedAppleAudioDevice;
    BOOL _supportsInEarDetection;
    BOOL _supportsVoiceTrigger;
    BOOL _supportsJustSiri;
    BOOL _supportsSpokenNotification;
    BOOL _supportsListeningModeANC;
    BOOL _supportsListeningModeTransparency;
    BOOL _supportsListeningModeAutomatic;
    BOOL _supportsConversationAwareness;
    BOOL _supportsPersonalVolume;
    BOOL _supportsAnnounceCall;
    AFBluetoothHeadGestureConfiguration *_headGestureConfiguration;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAddress : 1; unsigned char hasName : 1; unsigned char hasDeviceUID : 1; unsigned char hasVendorID : 1; unsigned char hasProductID : 1; unsigned char hasIsAdvancedAppleAudioDevice : 1; unsigned char hasSupportsInEarDetection : 1; unsigned char hasSupportsVoiceTrigger : 1; unsigned char hasSupportsJustSiri : 1; unsigned char hasSupportsSpokenNotification : 1; unsigned char hasSupportsListeningModeANC : 1; unsigned char hasSupportsListeningModeTransparency : 1; unsigned char hasSupportsListeningModeAutomatic : 1; unsigned char hasSupportsConversationAwareness : 1; unsigned char hasSupportsPersonalVolume : 1; unsigned char hasSupportsAnnounceCall : 1; unsigned char hasHeadGestureConfiguration : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setAddress:(id)a0;
- (void)setDeviceUID:(id)a0;
- (BOOL)isDirty;
- (void)setProductID:(unsigned int)a0;
- (void)setVendorID:(unsigned int)a0;
- (id)getAddress;
- (id)getName;
- (void)setIsAdvancedAppleAudioDevice:(BOOL)a0;
- (void)setSupportsInEarDetection:(BOOL)a0;
- (void)setSupportsJustSiri:(BOOL)a0;
- (void)setSupportsListeningModeANC:(BOOL)a0;
- (void)setSupportsListeningModeTransparency:(BOOL)a0;
- (void)setSupportsVoiceTrigger:(BOOL)a0;
- (id)getDeviceUID;
- (id)getHeadGestureConfiguration;
- (BOOL)getIsAdvancedAppleAudioDevice;
- (unsigned int)getProductID;
- (BOOL)getSupportsAnnounceCall;
- (BOOL)getSupportsConversationAwareness;
- (BOOL)getSupportsInEarDetection;
- (BOOL)getSupportsJustSiri;
- (BOOL)getSupportsListeningModeANC;
- (BOOL)getSupportsListeningModeAutomatic;
- (BOOL)getSupportsListeningModeTransparency;
- (BOOL)getSupportsPersonalVolume;
- (BOOL)getSupportsSpokenNotification;
- (BOOL)getSupportsVoiceTrigger;
- (unsigned int)getVendorID;
- (id)initWithBase:(id)a0;
- (void)setHeadGestureConfiguration:(id)a0;
- (void)setSupportsAnnounceCall:(BOOL)a0;
- (void)setSupportsConversationAwareness:(BOOL)a0;
- (void)setSupportsListeningModeAutomatic:(BOOL)a0;
- (void)setSupportsPersonalVolume:(BOOL)a0;
- (void)setSupportsSpokenNotification:(BOOL)a0;

@end
