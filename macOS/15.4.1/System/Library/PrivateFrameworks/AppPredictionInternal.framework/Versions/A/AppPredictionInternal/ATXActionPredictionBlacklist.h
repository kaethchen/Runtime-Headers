@class _PASLock, ATXAppPredictionBlacklist;

@interface ATXActionPredictionBlacklist : NSObject {
    _PASLock *_lock;
    id _blacklistNotificationToken;
    ATXAppPredictionBlacklist *_appPredictionBlacklist;
    int _prefsChangeNotificationToken;
}

+ (id)sharedInstanceWithAppPredictionBlacklist;
+ (id)sharedInstanceWithoutAppPredictionBlacklist;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1 forPrimaryShortcuts:(BOOL)a2;
- (id)initWithAppPredictionBlacklist:(id)a0;
- (void)_handlePrefsChange;
- (id)_prefsDisabledApps;
- (void)addToBlacklists:(id)a0 blacklistAppList:(id)a1 blacklistActionList:(id)a2 blacklistAppAndActionList:(id)a3;
- (id)disabledBundlesInSettings;
- (id)homeScreenDisabledShortcutsInSettings;
- (BOOL)isBundleIdBlacklisted:(id)a0;
- (void)setBlacklistFromAssetData:(id)a0 predictionBlacklist:(id)a1 shortcutBlacklist:(id)a2 primaryShortcutBlacklist:(id)a3;
- (BOOL)shouldPredictBundleId:(id)a0 action:(id)a1;
- (id)shouldPredictBundleIdHelper:(id)a0 action:(id)a1;

@end
