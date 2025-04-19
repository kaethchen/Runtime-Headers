@class NSArray, NSDictionary, NSString, NSUserDefaults;

@interface IOBluetoothPreferences : NSObject {
    NSUserDefaults *bluetoothPrefs;
}

@property BOOL wasUpdated;
@property (readonly) BOOL isServer;
@property BOOL discoverable;
@property BOOL poweredOn;
@property BOOL isLocked;
@property BOOL remoteWakeEnabled;
@property (readonly) NSArray *favoriteDevices;
@property (readonly) NSArray *pairedDevices;
@property (readonly) NSArray *BRPairedDevices;
@property (readonly) NSArray *LEPairedDevices;
@property (readonly) NSArray *usbBluetoothDevices;
@property (readonly) NSArray *configuredDevices;
@property (readonly) NSArray *hidDevices;
@property (readonly) NSArray *panDevices;
@property (readonly) NSArray *idsPairedDevices;
@property (readonly) NSArray *fastConnectReadyDevices;
@property (readonly) NSArray *idsPairedDevicesForUser;
@property (readonly) NSArray *serialDevices;
@property (readonly) NSArray *disallowRoleSwitchDevices;
@property (readonly) NSArray *MagicCloudPairedDevices;
@property (readonly) NSDictionary *deviceAccessTimes;
@property (readonly) NSDictionary *deviceCache;
@property BOOL fileTransferServicesEnabled;
@property (copy) NSString *OBEXPushDestinationDirectory;
@property (copy) NSString *OBEXBrowseRootDirectory;
@property int OBEXFileHandling;
@property int OBEXBrowseConnectionHandling;
@property unsigned int OBEXOtherDataDisposition;
@property BOOL OBEXFTPRequiresPairing;
@property BOOL OBEXFileTransferAllowsDelete;
@property BOOL OBEXObjectPushRequiresPairing;
@property BOOL autoSeekKeyboard;
@property BOOL autoSeekPointingDevice;
@property BOOL loggingEnabled;
@property (readonly) BOOL disableUIServerLegacyPairingConfirmation;
@property (readonly) BOOL disableUIServerSSPConfirmation;
@property (readonly) NSArray *launchableApplications;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)sharedPreferences;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)synchronize;
- (void)setPreference:(id)a0 forKey:(id)a1;
- (BOOL)safeToPowerOff:(BOOL)a0;
- (void)_setPoweredOn:(BOOL)a0;
- (void)addFavoriteDevice:(id)a0;
- (void)addLaunchableApplication:(id)a0;
- (id)attributesForDevice:(id)a0;
- (void)deviceWasUpdated:(id)a0;
- (void)postPreferencesChangedNotification;
- (void)removeFavoriteDevice:(id)a0;
- (void)removeLaunchableApplication:(id)a0;
- (void)setDefaultInquiryTime:(unsigned char)a0;
- (void)setInquiryThreshold:(char)a0;
- (id)systemPreferenceForKey:(id)a0;
- (void)updateDeviceAccessTime:(id)a0;
- (void)updatePreferencesInBluetoothd;
- (BOOL)userReallyWantsBTOff;

@end
