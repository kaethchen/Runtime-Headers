@interface SUOSUUserPrefs : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)setAutoUpdateMajorOSVersionPreference;
- (double)_timeIntervalWithPreferenceKey:(id)a0 defaultValue:(double)a1;
- (id)autoUpdateMajorOSVersionPreference;
- (double)availableUpdatesNotificationMinimumInterval;
- (id)availableUpdatesNotificationMinimumIntervalOverride;
- (double)criticalUpdatesNotificationMinimumInterval;
- (id)fakeCloudDevices;
- (BOOL)fakeCurrentOperatingSystemVersion:(struct { long long x0; long long x1; long long x2; } *)a0;
- (id)firstCriticalUpdateNotificationPostedDate;
- (id)lastPostedDDMUpdateNotificationDate;
- (id)lastPostedMDMUpdateRequestedNotificationDate;
- (id)lastPostedRecommendedUpdateNotificationDate;
- (id)lastPostedSimulatedDILFailureNotificationDate;
- (id)lastPostedUpdatesAvailableNotificationDate;
- (id)majorOSNotificationDelay;
- (double)managedUpdatesNotificationMinimumInterval;
- (id)readMajorOSUpdatePrefs;
- (void)recordPostedUpdatesAvailableNotificationWithProduct:(id)a0;
- (void)setFirstCriticalUpdateNotificationPostedToDate:(id)a0;
- (void)setLastPostedDDMUpdateNotificationDateToDate:(id)a0;
- (void)setLastPostedDDMUpdateNotificationDateToNow;
- (void)setLastPostedMDMUpdateRequestedNotificationDateToNow;
- (void)setLastPostedMDMUpdateRequestedNotificationToDate:(id)a0;
- (void)setLastPostedRecommendedUpdateNotificationDateToNow;
- (void)setLastPostedSimulatedDILFailureNotificationDateToNow;
- (void)setLastPostedUpdatesAvailableNotificationDateToNow;
- (void)setLastPostedUpdatesAvailableNotificationToDate:(id)a0;
- (unsigned long long)updatesAvailableNotificationCount;
- (id)updatesAvailableNotificationProductKey;
- (void)writeMajorOSUpdatePrefs:(id)a0;

@end
