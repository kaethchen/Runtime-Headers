@class NSHashTable, NSString, AFSiriAudioRoute, AFDeviceRingerSwitchObserver, AFSettingsConnection, AFNotifyObserver, NSObject, AFBluetoothHeadphoneInEarDetectionState;
@protocol OS_dispatch_queue;

@interface AFSiriHeadphonesMonitor : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate, AFDeviceRingerSwitchListening> {
    unsigned long long _sessionState;
    unsigned long long _wirelessSplitterSessionActive;
    AFBluetoothHeadphoneInEarDetectionState *_inEarDetectionState;
    BOOL _guestConnected;
    BOOL _inWirelessSplitterSessionStateValid;
    AFSettingsConnection *_settingsConnection;
    AFNotifyObserver *_pairedInfoChangeObserver;
    AFNotifyObserver *_inEarDetectionStateObserver;
    AFNotifyObserver *_wirelessSplitterSessionObserver;
    AFNotifyObserver *_wirelessGuestConnectionObserver;
    AFDeviceRingerSwitchObserver *_ringerSwitchObserver;
    NSString *_btAddress;
    NSString *_routeName;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_btQueue;
    NSHashTable *_delegates;
    id /* block */ _internalGestureTestingHandler;
    long long _scheduledHeadGesture;
}

@property (retain, nonatomic) AFSiriAudioRoute *currentAudioRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)_init;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)_audioRouteDidChange:(id)a0;
- (void)_broadcastInEarDetectionStateChangesFrom:(id)a0 to:(id)a1;
- (void)_broadcastRouteAndAuthenticationCapability;
- (void)_fetchInEarDetectionStateAndStartObservingFromSourceForBTAddress:(id)a0 withCompletion:(id /* block */)a1;
- (void)_fetchInitialState;
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(id /* block */)a0;
- (unsigned long long)_observerID;
- (void)_recomputePrivateSessionStateAndBroadcast:(BOOL)a0;
- (id)_settingsConnection;
- (void)_settingsConnectionDidDisconnect;
- (void)_stopObservingInEarDetectionStateFromSource;
- (void)_updateAnnounceNotificationsOnHearingAidSupportedStatus;
- (BOOL)_updateAudioRouteAvailabilityAndBroadcast:(BOOL)a0;
- (void)_updateInEarDetectionStateAndObserve;
- (void)_updateWirelessSplitterSessionInfoAndObserve;
- (void)deviceRingerObserver:(id)a0 didChangeState:(long long)a1;
- (void)fetchInEarDetctionStateForBTAddress:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchPrivateSessionStateWithCompletion:(id /* block */)a0;
- (void)mockHeadGesture:(long long)a0 schedule:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)registerInternalGestureTestingHandler:(id /* block */)a0;

@end
