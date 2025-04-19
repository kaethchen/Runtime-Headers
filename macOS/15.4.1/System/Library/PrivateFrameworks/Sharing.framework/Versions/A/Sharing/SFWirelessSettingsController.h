@interface SFWirelessSettingsController : NSObject {
    BOOL _wifiEnabled;
    BOOL _airplaneModeEnabled;
    BOOL _bluetoothEnabled;
    BOOL _deviceSupportsWAPI;
    BOOL _firstCallbackCompleted;
    BOOL _wirelessCarPlayEnabled;
    BOOL _wirelessAccessPointEnabled;
    struct __SFOperation { } *_information;
}

@property (weak) id delegate;
@property (getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled;
@property (getter=isWifiEnabled) BOOL wifiEnabled;
@property (getter=isWirelessAccessPointEnabled) BOOL wirelessAccessPointEnabled;
@property (readonly, getter=isWirelessCarPlayEnabled) BOOL wirelessCarPlayEnabled;
@property (readonly) BOOL deviceSupportsWAPI;
@property (readonly) BOOL isAirDropMDMRestricted;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)handleOperationCallback:(struct __SFOperation { } *)a0 event:(long long)a1 withResults:(id)a2;

@end
