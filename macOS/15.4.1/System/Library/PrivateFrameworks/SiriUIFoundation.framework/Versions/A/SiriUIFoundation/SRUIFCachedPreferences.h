@class NSUserDefaults, NSString, NSDictionary, NSHashTable, UAFAssetUtilities, NSObject, UAFAssetStatus;
@protocol OS_dispatch_queue;

@interface SRUIFCachedPreferences : NSObject <UAFAssetUtilitiesDelegate> {
    NSUserDefaults *_textInputDefaults;
    BOOL _isHoldToTalkForTextInputEnabled;
    BOOL _isStreamingDictationEnabled;
    BOOL _isSiriSafeForLockScreen;
    BOOL _announceNotificationsInCarPlayTemporarilyDisabled;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    UAFAssetUtilities *_assetUtilities;
}

@property (retain, nonatomic) UAFAssetStatus *assetStatus;
@property (nonatomic) BOOL understandingOnDeviceAssetsAvailable;
@property (retain, nonatomic) NSDictionary *assistantUODStatus;
@property (readonly, nonatomic) BOOL isHoldToTalkForTextInputEnabled;
@property (readonly, nonatomic) BOOL isStreamingDictationEnabled;
@property (readonly, nonatomic) BOOL isSiriSafeForLockScreen;
@property (readonly, nonatomic) BOOL announceNotificationsInCarPlayTemporarilyDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updatePreferences;
- (BOOL)assetsNeedSpace;
- (void)_notifyObserversOfSettingsChangeWithBlock:(id /* block */)a0;
- (void)_setAnnounceNotificationsInCarPlayTemporarilyDisabled:(BOOL)a0;
- (BOOL)assetsDownloading;
- (void)handleAssetStatusUpdated;
- (void)siriUODAvailabilityDidChange:(BOOL)a0;
- (void)siriUODStatusDidChange;

@end
