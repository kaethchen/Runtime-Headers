@class _PASQueueLock, NSUserDefaults, ATXAppClipUsageDuetContextUpdateListener, _ATXAppIconState, NSSet, NSObject, _PASLock;
@protocol OS_dispatch_queue, ATXPETEventTracker2Protocol;

@interface _ATXAppLaunchMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_appLaunchHistoryQueue;
    NSObject<OS_dispatch_queue> *_logQueue;
    _PASQueueLock *_history;
    _PASLock *_cdContext;
    NSUserDefaults *_userDefaults;
    ATXAppClipUsageDuetContextUpdateListener *_appClipChangeListener;
    id<ATXPETEventTracker2Protocol> _tracker;
    _ATXAppIconState *_appIconState;
    NSSet *_predictionUpdateBlacklist;
}

+ (void)mergeAppLaunches:(id)a0 andBacklightTransitions:(id)a1 callingAppLaunchBlock:(id /* block */)a2;
+ (void)_harvestAppPredictionDataForBundleId:(id)a0 response:(id)a1;
+ (void)_logAppLaunch:(id)a0 from:(unsigned long long)a1;
+ (void)_logPredictionForBundleId:(id)a0 poweringAppClipBundleId:(id)a1 urlHash:(id)a2 isClip:(BOOL)a3 appLaunchReason:(id)a4 appClipLaunchReason:(int)a5 consumerType:(unsigned long long)a6 consumerSubType:(unsigned char)a7 context:(id)a8;
+ (int)petClipCaptureTypeFromDuetClipLaunchReason:(int)a0;
+ (id)predictionUpdateBlacklistedBundleIds;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)clearHistory;
- (void)swapDuetHelper:(id)a0;
- (void)_addLaunchWithLockWitness:(id)a0 bundleId:(id)a1 date:(id)a2 timeZone:(id)a3 reason:(id)a4 context:(id)a5;
- (void)_logAppLaunchOverallCaptureRateForBundleId:(id)a0 launchReason:(id)a1;
- (void)_logAppPanelCaptureRateForBundleId:(id)a0;
- (void)_logAppPanelLaunchRatioForBundleId:(id)a0 launchReason:(id)a1;
- (void)_syncForTests;
- (void)_updateAppIconStateForTests:(id)a0;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 reason:(id)a3;
- (id)appIconState;
- (id)appInfoManager;
- (id)appLaunchHistogramManager;
- (id)appLaunchSequenceManager;
- (void)clearIntentHistogramHistory;
- (id)dailyDose;
- (void)handleAppOrClipLaunchNotificationForBundleId:(id)a0 poweringAppClipBundleId:(id)a1 urlHash:(id)a2 isClip:(BOOL)a3 appLaunchReason:(id)a4 appClipLaunchReason:(int)a5 date:(id)a6;
- (void)handleBacklightChangeNotificationWithValue:(int)a0 date:(id)a1;
- (id)initWithAppInfoManager:(id)a0 appLaunchHistogramManager:(id)a1 appLaunchSequenceManager:(id)a2 appDailyDose:(id)a3 duetHelper:(id)a4 contextBuilder:(id)a5 tracker:(id)a6;
- (id)initWithAppInfoManager:(id)a0 appLaunchHistogramManager:(id)a1 appLaunchSequenceManager:(id)a2 appDailyDose:(id)a3 duetHelper:(id)a4 contextBuilder:(id)a5 tracker:(id)a6 predictionUpdateBlacklist:(id)a7 heroPoiManager:(id)a8;
- (id)initWithInMemoryStore;
- (BOOL)isValidAppLaunchBundleId:(id)a0;
- (void)logAppLaunchForBundleId:(id)a0 launchReason:(id)a1;
- (void)processDonationsForPreviousAppSessionEndIfNeeded;
- (void)registerForAppChange;
- (void)registerForAppClipLaunch;
- (void)registerForBacklightChange;
- (void)startDeltaRecording;
- (id)stopDeltaRecording;
- (void)updateLaunchHistoryFromDuet:(double)a0 callback:(id /* block */)a1;

@end
