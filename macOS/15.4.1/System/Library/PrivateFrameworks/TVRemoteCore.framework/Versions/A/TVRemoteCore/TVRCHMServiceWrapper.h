@class HMCharacteristic, NSString, HMAccessory, HMService, HMHome;
@protocol TVRCHMServiceWrapperDelegate;

@interface TVRCHMServiceWrapper : NSObject <HMAccessoryDelegate>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMService *service;
@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HMCharacteristic *serviceCharacteristic;
@property (retain, nonatomic) HMCharacteristic *activeCharacteristic;
@property (retain, nonatomic) HMCharacteristic *volumeSelectorCharacteristic;
@property (retain, nonatomic) HMCharacteristic *muteCharacteristic;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL sentWakeKey;
@property (readonly, nonatomic) BOOL isTVAwake;
@property (nonatomic) BOOL volumeControlSupported;
@property (nonatomic) long long currentActiveState;
@property (nonatomic) BOOL muteEnabled;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *model;
@property (weak, nonatomic) id<TVRCHMServiceWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithService:(id)a0;

- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)_serviceRemoved:(id)a0;
- (id)initWithService:(id)a0;
- (void)_updatePowerState;
- (void)sendButtonEvent:(id)a0;
- (BOOL)supportsVolumeControl;
- (void)_readValueForCharacteristic:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsMute;
- (void)_disconnectWithError:(id)a0;
- (void)_sendVolumeKey:(BOOL)a0;
- (id)_televisionServiceForAccessory:(id)a0;
- (void)_sendRemoteKey:(long long)a0;
- (BOOL)supportsInfoKey;
- (void)_checkVolumeServicesForAccessory:(id)a0;
- (long long)_remoteKeyForTVRCButton:(id)a0;
- (void)_sendMuteKey;
- (void)_sendWakeKey;
- (void)_serviceActiveStateChanged:(id)a0;
- (void)_serviceNameChanged:(id)a0;
- (void)_setCharacteristicsForService:(id)a0;
- (void)_startObservingServiceNotifications;
- (void)_stopObservingServiceNotifications;
- (void)_togglePowerButton;
- (void)_updateMuteState;
- (id)_writeRequestForCharacteristic:(id)a0 withValue:(id)a1;
- (void)_writeValue:(id)a0 toCharacteristic:(id)a1;
- (BOOL)supportsPowerButton;

@end
