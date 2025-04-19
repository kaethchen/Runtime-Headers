@class NSSet, NSMutableDictionary, NSDictionary, AXDispatchTimer;

@interface HUAccessoryHearingSyncManager : NSObject {
    NSMutableDictionary *_cachedEnabled;
    NSMutableDictionary *_deviceListeningState;
    NSDictionary *_persistentDeviceListeningState;
    NSMutableDictionary *_nearbyDevicesListeningState;
    NSMutableDictionary *_deviceType;
    int _contentProtectionNotifyToken;
}

@property (class, readonly, nonatomic) NSSet *syncableSupportedDevices;
@property (class, readonly, nonatomic) NSSet *adaptiveTransparencySupportedDevices;

@property (retain, nonatomic) NSMutableDictionary *cachedEnabled;
@property (retain, nonatomic) NSMutableDictionary *deviceListeningState;
@property (retain, nonatomic) NSDictionary *persistentDeviceListeningState;
@property (retain, nonatomic) NSMutableDictionary *nearbyDevicesListeningState;
@property (retain, nonatomic) NSMutableDictionary *deviceType;
@property (nonatomic) BOOL isHeadphoneStreamSelected;
@property (nonatomic) BOOL noiseDisabled;
@property (retain, nonatomic) AXDispatchTimer *messageTimer;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (struct { long long x0; long long x1; })deviceState;
- (void)_cleanupNearbyDeviceStateDuplicatesForDevice:(id)a0;
- (void)_initCachedEnabled;
- (void)_registerForAccessoryHearingSettingsUpdate;
- (void)_registerForAccessoryManagerUpdate;
- (void)_registerForNearbyControllerUpdate;
- (void)_registerForNoiseEnabledPreferenceChange;
- (void)_sendIDSMessageIfNeededForListeningModes:(id)a0 addresses:(id)a1 force:(BOOL)a2;
- (void)addNoiseMeasurementsDisabledToMessage:(id)a0 forDevices:(id)a1;
- (void)bluetoothPairingStatusChanged:(id)a0;
- (long long)deviceTypeForAddress:(id)a0;
- (id)deviceTypeForProductCode:(id)a0;
- (id)deviceTypesForAvailableAddresses:(id)a0;
- (void)getDeviceTypesWithCompletion:(id /* block */)a0;
- (BOOL)hasPairedDeviceWithHearingProtectionEnabled;
- (BOOL)hasPairedDevicesWithListeningModes;
- (void)listeningModeDidChange:(id)a0;
- (long long)listeningStateForAddress:(id)a0 andStoredState:(id)a1;
- (void)processNoiseMeasurementsDisabledMessage:(id)a0 fromDevice:(id)a1;
- (void)readHearingProtectionState;
- (void)routesDidChange:(id)a0;
- (void)sendIDSMessageIfNeededForNewListeningModes:(id)a0 addresses:(id)a1 force:(BOOL)a2;
- (void)sendListeningModesIDSMessageIfNeeded;
- (void)sendNoiseMeasurementsDisabledIfNeeded;
- (void)sendUpdateToAccessory;
- (BOOL)shouldUpdateWatchesWithListeningModes:(id)a0;

@end
