@interface CKDaemonPreferencesController : NSObject

+ (id)sharedInstance;

- (void)postPreferencesChangedNotification;
- (void)_preferencesChanged:(id)a0;
- (void)startObservingPreferenceChanges;
- (void)stopObservingPreferenceChanges;

@end
