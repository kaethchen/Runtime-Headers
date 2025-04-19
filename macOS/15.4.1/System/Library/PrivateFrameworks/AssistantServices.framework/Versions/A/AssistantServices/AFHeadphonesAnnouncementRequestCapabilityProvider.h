@class NSString, AFSiriAudioRoute, AFSettingsConnection, AFNotifyObserver, NSObject, NSHashTable;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFHeadphonesAnnouncementRequestCapabilityProvider : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate, AFSiriHeadphonesMonitorDelegate, AFAnnouncementRequestCapabilityProviding> {
    BOOL _localVoiceAssetAvailable;
    AFSettingsConnection *_settingsConnection;
    AFNotifyObserver *_pairedInfoChangeObserver;
    AFNotifyObserver *_forcedUpdateObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    unsigned long long _lastKnownAvailableAnnouncementRequests;
    unsigned long long _lastKnownEligibleAnnouncementRequests;
    NSHashTable *_delegates;
}

@property (retain, nonatomic) AFSiriAudioRoute *currentAnnouncementRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)platform;
+ (id)provider;
+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;
+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;

- (void).cxx_destruct;
- (id)_init;
- (void)addDelegate:(id)a0;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)_fetchEligibleAnnouncementRequestTypesAndNotifyObserversAndShouldRelyOnCachedStateIfIneligble:(BOOL)a0;
- (void)_fetchInitialState;
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(id /* block */)a0;
- (id)_getCurrentAnnouncementRoute;
- (id)_headphonesMonitor;
- (void)_notifyObserversOfEligibleAnnouncementRequestTypes:(unsigned long long)a0;
- (id)_settingsConnection;
- (void)_settingsConnectionDidDisconnect;
- (void)_updateAudioRouteAvailabilityAndBroadcast:(BOOL)a0;
- (id)currentlyRoutedHeadphonesBTAddress;
- (id)currentlyRoutedHeadphonesProductID;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)fetchEligibleAnnouncementRequestTypesAndNotifyObservers:(id)a0;
- (void)fetchEligibleAnnouncementRequestTypesAndNotifyObserversAndShouldRelyOnCachedStateIfIneligble:(BOOL)a0;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)fetchLocalVoiceAssetAvailabilityWithCompletion:(id /* block */)a0;
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;
- (void)notifyObserversOfAvailableAnnouncementRequestTypes;
- (void)privateAudioSessionStateDidChange:(unsigned long long)a0;

@end
