@class HDProfile, _HKBehavior;

@interface HDCloudSyncPlatformConfiguration : NSObject {
    HDProfile *_profile;
    _HKBehavior *_behavior;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _allowLiteSync;
}

@property (copy, nonatomic) id /* block */ isSleepFocusOn;

- (void).cxx_destruct;
- (BOOL)canLiteSyncPull;
- (const char *)priorityForPeriodicSyncActivity;
- (BOOL)_isSleepFocusOn;
- (long long)_baseIntervalForAppleWatchAllowingLiteSync:(BOOL)a0 tinker:(BOOL)a1;
- (long long)_baseIntervalForRealityDevice;
- (long long)_baseIntervalForiPhoneAllowingLiteSync:(BOOL)a0;
- (long long)baseIntervalForPeriodicSyncActivity;
- (double)cellularSyncThreshold;
- (id)initWithPrimaryProfile:(id)a0 behavior:(id)a1;
- (BOOL)isConfiguredForLiteSync;
- (double)liteSyncThreshold;
- (BOOL)participateInCoordinatedSync;
- (BOOL)requireInexpensiveNetworking;
- (BOOL)shouldRegisterForPeriodicSyncActivities;
- (BOOL)shouldRestrictSyncInSleepFocus;
- (void)unitTest_setAllowLiteSync:(BOOL)a0;

@end
