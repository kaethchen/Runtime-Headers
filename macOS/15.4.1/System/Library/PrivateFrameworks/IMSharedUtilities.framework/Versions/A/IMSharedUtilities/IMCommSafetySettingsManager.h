@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMCommSafetySettingsManager : NSObject <IMUnlockMonitorListener> {
    int _notificationToken;
}

@property (nonatomic) long long enablementGroup;
@property (retain, nonatomic) id enablementSubscription;
@property (nonatomic) BOOL checkSensitivePhotosAnalyticsEnabled;
@property (nonatomic) BOOL shouldNotifyParentAboutSensitivePhotos;
@property (nonatomic) BOOL childIsYoungAgeGroup;
@property (nonatomic) long long protectedChildAge;
@property (nonatomic) BOOL hasConnected;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, nonatomic, getter=isFeatureEnabled) BOOL featureEnabled;
@property (readonly, nonatomic) BOOL checksForSensitivityOnSend;
@property (readonly, nonatomic) BOOL checksForSensitivityOnReceive;
@property (readonly, nonatomic) BOOL checksForSensitivityOnNicknameReceive;
@property (retain, nonatomic) NSMutableArray *parents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)_updateSettings;
- (void)_configureUserSafetySettingsListener;
- (void)_connectToFamilyCircle:(id /* block */)a0;
- (long long)_fetchEnablementGroup;
- (BOOL)_hasOverriddenEnablementGroup;
- (long long)_overriddenEnablementGroup;
- (BOOL)_shouldUseScreenTimeAndFamilyCircle;

@end
