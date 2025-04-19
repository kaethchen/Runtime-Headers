@class NSString, NSImage, NSObject;
@protocol RWIPairableDelegate, OS_dispatch_source, RWIDeviceDelegate;

@interface RWIDevice : RWIMobileDeviceTargetBase <RWIPairable> {
    NSObject<OS_dispatch_source> *_deviceAccessQueuePairingTimer;
    NSString *_loggingIdentifier;
    BOOL _hasBuildVersion;
    BOOL _wirelessEnabled;
    BOOL _attemptedPair;
    long long _automationAvailability;
    NSImage *_icon;
    NSImage *_symbolImage;
    long long _deviceClass;
}

@property (weak, nonatomic) id<RWIDeviceDelegate> deviceDelegate;
@property (readonly, nonatomic, getter=isRemoteInspectionEnabled) BOOL remoteInspectionEnabled;
@property (readonly, nonatomic, getter=isWirelessEnabled) BOOL wirelessEnabled;
@property (readonly, nonatomic) BOOL alwaysAllowsNetworkDebugging;
@property (readonly, nonatomic, getter=isPasscodeLocked) BOOL passcodeLocked;
@property (readonly, nonatomic) long long pairingProgress;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (weak, nonatomic) id<RWIPairableDelegate> pairingDelegate;
@property (readonly, nonatomic) long long pairingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isReady;
- (void)pair;
- (id)icon;
- (long long)deviceClass;
- (BOOL)paired;
- (BOOL)isDevice;
- (void)connectionEstablished;
- (BOOL)isSimulator;
- (id)symbolImage;
- (BOOL)isIOS;
- (void)disableWireless;
- (void)enableWireless;
- (void)handleUserIntentForInteractingWithDevice;
- (void)unpair;
- (id)_copyRemoteInspectionEnabledValueFromDevice:(struct _AMDevice { } *)a0;
- (id)_copyWirelessEnabledValueFromDevice:(struct _AMDevice { } *)a0;
- (void)_fetchDeviceInformationFromMobileDeviceConnection:(id)a0 shouldDelayServiceConnection:(BOOL)a1;
- (void)_queueAttemptingPairWithProgressCallback:(id /* block */)a0;
- (BOOL)_shouldAllowDebuggingOnThisAMDeviceRef:(struct _AMDevice { } *)a0 udid:(id)a1;
- (BOOL)_supportsRemoteInspectorForDeviceClass:(long long)a0 productVersion:(id)a1;
- (void)addMobileDeviceConnection:(id)a0;
- (long long)automationAvailability;
- (void)connectionLost;
- (void)deviceNameChanged;
- (id)initWithMobileDeviceConnection:(id)a0 manager:(id)a1;
- (void)lockStatusChanged;
- (void)markAsHavingBuildVersion;
- (BOOL)needsAutomationAvailabilityFallback;
- (void)removeMobileDeviceConnection:(id)a0;
- (void)setAutomationAvailability:(long long)a0;
- (void)setDeviceName:(id)a0 udid:(id)a1 buildVersion:(id)a2 productVersion:(id)a3 deviceClass:(long long)a4 paired:(long long)a5 wirelessEnabled:(BOOL)a6 supported:(BOOL)a7;
- (void)setPasscodeLocked:(BOOL)a0;
- (BOOL)supportsWebDriver;
- (void)webInspectorServiceDisabled;
- (void)webInspectorServiceEnabled;
- (void)wirelessCapabilitiesChanged;

@end
