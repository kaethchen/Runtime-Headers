@class NSRecursiveLock, NSString, NSMapTable, NSTimer, CTXPCServiceSubscriptionContext, PCSimpleTimer, CoreTelephonyClient;

@interface PCPersistentInterfaceManager : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceMonitorDelegate> {
    NSRecursiveLock *_lock;
    NSMapTable *_delegatesAndQueues;
    struct __CFSet { } *_WiFiAutoAssociationDelegates;
    PCSimpleTimer *_WiFiAutoAssociationDisableTimer;
    struct __CFSet { } *_wakeOnWiFiDelegates;
    PCSimpleTimer *_wakeOnWiFiDisableTimer;
    void *_interfaceAssertion;
    NSString *_WWANInterfaceName;
    BOOL _isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    BOOL _isWWANInterfaceDataActive;
    BOOL _ctIsWWANInHomeCountry;
    BOOL _isWWANInterfaceSuspended;
    BOOL _isPowerStateDetectionSupported;
    BOOL _isWWANInterfaceInProlongedHighPowerState;
    BOOL _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    BOOL _isInCall;
    BOOL _isWakeOnWiFiSupported;
    BOOL _isWakeOnWiFiEnabled;
    CoreTelephonyClient *_ctClient;
    CTXPCServiceSubscriptionContext *_currentDataSimContext;
    void *_ctServerConnection;
}

@property (readonly) BOOL isPowerStateDetectionSupported;
@property (readonly) BOOL isWWANInterfaceInProlongedHighPowerState;
@property (readonly) BOOL isInCall;
@property (readonly) BOOL isWWANInterfaceActivationPermitted;
@property (readonly) BOOL areAllNetworkInterfacesDisabled;
@property (readonly, nonatomic) BOOL isWWANInterfaceUp;
@property (readonly, nonatomic) BOOL isWWANInHomeCountry;
@property (readonly, nonatomic) BOOL isWWANBetterThanWiFi;
@property (readonly, nonatomic) BOOL isWWANInterfaceSuspended;
@property (readonly, nonatomic) BOOL hasWWANStatusIndicator;
@property (readonly, nonatomic) BOOL doesWWANInterfaceExist;
@property (readonly, nonatomic) NSString *WWANInterfaceName;
@property (readonly, nonatomic) BOOL isInternetReachableViaWiFi;
@property (readonly, nonatomic) BOOL isWakeOnWiFiSupported;
@property (readonly, nonatomic) BOOL isInternetReachable;
@property (readonly, nonatomic) BOOL allowBindingToWWAN;
@property (readonly, nonatomic) NSString *currentLinkQualityString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleMachMessage:(void *)a0;
- (void)removeDelegate:(id)a0;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWakeOnWiFi;
- (void)_adjustWakeOnWiFiLocked;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_createCTConnection;
- (void)_ctConnectionAttempt;
- (void)_inCallWWANOverrideTimerFired;
- (BOOL)_isInternetReachableLocked;
- (BOOL)_isWWANInHomeCountryLocked;
- (BOOL)_isWiFiUsable;
- (void)_mainThreadCTConnectionAttempt;
- (id)_nonCellularMonitor;
- (void)_scheduleCalloutsForSelector:(SEL)a0;
- (void)_updateCTIsWWANInHomeCountry:(BOOL)a0 isWWANInterfaceDataActive:(BOOL)a1;
- (void)_updateWWANInterfaceAssertions;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceUpStateLocked;
- (BOOL)_wantsWWANInterfaceAssertion;
- (BOOL)_wantsWakeOnWiFiEnabled;
- (BOOL)_wifiIsPoorLinkQuality;
- (BOOL)_wwanIsPoorLinkQuality;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)cutWiFiManagerDeviceAttached:(id)a0;
- (void)enableWakeOnWiFi:(BOOL)a0 forDelegate:(id)a1;
- (void)enableWiFiAutoAssociation:(BOOL)a0 forDelegate:(id)a1;
- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)interfaceReachabilityChanged:(id)a0;

@end
