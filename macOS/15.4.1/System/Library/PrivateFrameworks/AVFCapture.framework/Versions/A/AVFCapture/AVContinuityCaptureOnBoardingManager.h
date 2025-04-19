@class NSArray;

@interface AVContinuityCaptureOnBoardingManager : NSObject {
    NSArray *_activeClientPIDsForOnboarding;
    id /* block */ _completionHandler;
}

+ (void)initialize;
+ (void)_removeRemindLaterActiveForAllClients;
+ (id)getAVFFaceTimeBundleIdentifier;
+ (BOOL)getAppObservingSystemPreferredCameraStatusForBundlePath:(id)a0 bundleID:(id)a1;
+ (BOOL)onBoardingCurrentlyInProgress;
+ (BOOL)onBoardingUIDefaultsPreferenceIsAlreadySet;
+ (BOOL)onBoardingUIFeatureFlagEnabled;
+ (BOOL)remindLaterActiveForPID:(int)a0;
+ (void)removeRemindLaterActiveForPID:(int)a0;
+ (void)resetPIDsListForRemindLaterActiveTracking;

- (void)dealloc;
- (void)handleOnBoardingUIButtonClick:(id)a0;
- (id)initWithCompletionHandler:(id /* block */)a0 activeClientPIDs:(id)a1;
- (void)showContinuityCaptureOnBoardingUIIfNeeded:(BOOL)a0 deviceSupportsAllVideoEffectsFeatures:(BOOL)a1 forceOpenDialog:(BOOL)a2;

@end
