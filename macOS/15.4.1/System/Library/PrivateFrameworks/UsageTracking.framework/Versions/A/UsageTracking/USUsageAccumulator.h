@class NSMutableDictionary, NSDictionary, NSDate, NSMutableArray;

@interface USUsageAccumulator : NSObject

@property (readonly, copy) NSDictionary *applicationCategories;
@property (readonly, copy) NSDictionary *webCategories;
@property (copy) NSDate *backlightStartDate;
@property (readonly) NSMutableDictionary *applicationUsageStartDates;
@property (readonly) NSMutableDictionary *webUsageStartDatesByWebBrowser;
@property (copy) NSDate *mediaNowPlayingStartDate;
@property (readonly) NSMutableDictionary *webUsageStateByUniqueID;
@property int quickLookVideoNowPlayingState;
@property (retain) NSMutableDictionary *mediaUsageByUniqueID;
@property (readonly) NSMutableArray *backlightIntervals;
@property (readonly) NSMutableDictionary *applicationUsageIntervals;
@property (readonly) NSMutableDictionary *webUsageIntervals;
@property (readonly) NSMutableDictionary *categoryUsageIntervals;
@property (readonly) NSMutableDictionary *canonicalApplicationUsageIntervals;
@property (readonly) NSMutableDictionary *primaryWebUsageIntervals;
@property (readonly) NSMutableDictionary *notifications;
@property (copy) NSDate *lastEventDate;
@property (getter=isStandByEnabled) BOOL standByEnabled;
@property (getter=isDeviceBacklit) BOOL deviceBacklit;

- (void).cxx_destruct;
- (void)_accumulateAppMediaUsage:(id)a0 timestamp:(id)a1;
- (void)_accumulateAppUsage:(id)a0 timestamp:(id)a1;
- (void)_accumulateAppWebUsage:(id)a0 timestamp:(id)a1;
- (void)_accumulateApplication:(id)a0 timestamp:(id)a1 starting:(BOOL)a2 isUsageTrusted:(BOOL)a3;
- (void)_accumulateDeviceBacklight:(id)a0 timestamp:(id)a1;
- (void)_accumulateDeviceBacklightWithIsBacklit:(BOOL)a0 timestamp:(id)a1;
- (void)_accumulateMediaNowPlaying:(id)a0 timestamp:(id)a1;
- (void)_accumulateMediaNowPlayingWithTimestamp:(id)a0 starting:(BOOL)a1;
- (void)_accumulateNotificationUsage:(id)a0;
- (void)_accumulateWebDomain:(id)a0 bundleIdentifier:(id)a1 timestamp:(id)a2 starting:(BOOL)a3 isUsageTrusted:(BOOL)a4;
- (void)_aggregateAppMediaUsage:(id)a0 timestamp:(id)a1;
- (void)_aggregateApplicationUsageInterval:(id)a0 identifier:(id)a1;
- (void)_aggregateCanonicalApplicationUsageInterval:(id)a0 canonicalIdentifier:(id)a1;
- (void)_aggregateCategoryUsageInterval:(id)a0 identifier:(id)a1;
- (void)_aggregatePrimaryWebUsageInterval:(id)a0 primaryIdentifier:(id)a1;
- (void)_aggregateStartDatesUsingEndDate:(id)a0;
- (void)_aggregateWebUsageInterval:(id)a0 identifier:(id)a1;
- (void)_resetAggregations;
- (void)_stopAllUsageWithEndDate:(id)a0;
- (void)_stopAllWebUsageForWebBrowser:(id)a0 endDate:(id)a1;
- (void)accumulateEvent:(id)a0 timestamp:(id)a1;
- (void)aggregateUsageForInterval:(id)a0 usageReportHandler:(id /* block */)a1;
- (id)initWithApplicationCategories:(id)a0 webCategories:(id)a1;

@end
