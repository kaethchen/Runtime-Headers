@class NSString, NSArray, WiFiP2PTrafficRegistrationReservation, TUCallCenter, NSMutableSet, WiFiP2PAWDLStateMonitor, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMContinuityCaptureSystemStatus : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_miscellaneousCameraDevices;
    NSMutableArray *_miscellaneousAudioDevices;
    BOOL _clamshellClosed;
    BOOL _deviceScreenLocked;
    BOOL _currentUserLoggedIn;
    BOOL _systemInSleepState;
    long long _wifiReservationState;
    struct IONotificationPort { } *_powerNotificationPort;
    unsigned int _powerNotifier;
    unsigned int _powerNotifierConnect;
    id _systemConfigStore;
    NSString *_consoleUserName;
    unsigned int _consoleUID;
    WiFiP2PAWDLStateMonitor *_wifiP2PMonitor;
    WiFiP2PTrafficRegistrationReservation *_wifiReservation;
    struct IONotificationPort { } *_ioServiceNotificationPort;
    NSMutableSet *_cameraStateIterators;
    TUCallCenter *_callCenter;
    NSMutableArray *_incomingCallUUIDs;
    unsigned int _cgsConnectionID;
    NSObject<OS_dispatch_source> *_cgsEventSource;
    unsigned int _cgsEventPort;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _serviceNotification;
    BOOL _invalidated;
}

@property (readonly, nonatomic) BOOL invalidated;
@property (readonly) NSArray *miscellaneousCameraDevices;
@property (readonly) NSArray *miscellaneousAudioDevices;
@property (readonly) BOOL clamshellClosed;
@property (readonly) BOOL deviceScreenLocked;
@property (readonly) BOOL currentUserLoggedIn;
@property (readonly) BOOL systemInSleepState;
@property (readonly) BOOL externalDisplayPluggedIn;
@property (readonly) long long wifiReservationState;
@property (readonly) NSArray *incomingCallUUIDs;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;

+ (void)invalidate;
+ (id)sharedInstance;
+ (BOOL)clamshellIsClosed;
+ (BOOL)hasExternalDisplay;
+ (unsigned int)copyDeviceForInterface:(unsigned int)a0;
+ (id)deviceInfoForIOService:(unsigned int)a0;
+ (id)embeddedBuilitServiceNames;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)initWithQueue:(id)a0;
- (BOOL)screenLocked;
- (void)powerNotification:(unsigned long long)a0 args:(void *)a1;
- (void)_handleCGSEvent;
- (void)_handleCallNotificationWithName:(id)a0 incomingCallUUID:(id)a1 status:(int)a2 service:(int)a3;
- (void)audioDevicesStateUpdatedCallback;
- (void)cameraPublishedCallback:(unsigned int)a0;
- (void)cameraTerminatedCallback:(unsigned int)a0;
- (void)deviceLockStateChangedCallback;
- (void)displayConfigurationChangedCallback;
- (void)dynamicStoreCallback:(id)a0 consoleUID:(unsigned int)a1;
- (void)handleCallNotification:(id)a0;
- (void)handleClamshellStateChanged:(BOOL)a0;
- (BOOL)holdWifiReservationForSelf;
- (void)listenForService:(id)a0 matching:(struct __CFDictionary { } *)a1 eventType:(const char *)a2;
- (void)releaseWifiReservationForSelf;
- (void)setupCallNotificationsListener;
- (void)setupClamshellNotification;
- (void)setupExternalDisplayListener;
- (void)setupFastUserSwitchListener;
- (void)setupLockScreenListener;
- (void)setupMiscellaneousAudioDeviceListener;
- (void)setupMiscellaneousVideoDeviceListener;
- (BOOL)setupPowerStateListener;
- (void)setupWifiReservation;
- (void)setupWifiReservationMonitor;

@end
