@class NSDictionary, NSData, BMSource;

@interface USApplicationUsageMonitor : _DKMonitor

@property void *notificationID;
@property unsigned long long activityNotificationHandle;
@property (copy, nonatomic) NSDictionary *activeApplicationEvents;
@property (copy, nonatomic) NSData *frontmostAuditToken;
@property (copy, nonatomic) NSDictionary *frontmostApplicationUsage;
@property (copy, nonatomic) NSDictionary *inUseApplicationEvents;
@property (retain, nonatomic) BMSource *appUsageSource;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)_eventWithBundleIdentifier:(id)a0 startDate:(id)a1 usageType:(long long)a2 usageTrusted:(BOOL)a3;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)invalidateInstantState;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (void)_obtainCurrentValueWithActivityState:(unsigned long long)a0;
- (void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)a0 clearAll:(BOOL)a1;
- (void)registerForAppChangeNotifications;
- (void)updateAppDataInContextStore;
- (void)updateFrontmostAuditTokenData:(id)a0 frontmostAppUsage:(id)a1;
- (void)updateInUseApplications:(id)a0 activeApplications:(id)a1;

@end
