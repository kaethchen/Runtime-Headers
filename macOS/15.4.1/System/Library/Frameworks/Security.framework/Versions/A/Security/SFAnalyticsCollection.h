@class SECSFAVersion, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, SFAnalyticsCollectionAction;

@interface SFAnalyticsCollection : NSObject

@property (retain) NSMutableDictionary *matchingRules;
@property (retain) NSMutableDictionary *allowedEvents;
@property BOOL excludedVersion;
@property (copy) id /* block */ tearDownMetricsHook;
@property (retain) id<SFAnalyticsCollectionAction> actions;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) SECSFAVersion *selfVersion;
@property (retain) NSString *processName;

+ (BOOL)isVersionSameOrNewer:(id)a0 than:(id)a1;
+ (id)parseVersion:(id)a0 platform:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadCollection:(id)a0;
- (void)drainSetupQueue;
- (BOOL)allowedVersionsWithSelf:(id)a0;
- (id)initWithActionInterface:(id)a0 product:(id)a1 build:(id)a2;
- (unsigned int)match:(id)a0 eventClass:(long long)a1 attributes:(id)a2 bucket:(unsigned int)a3 logger:(id)a4;
- (void)onQueue_stopMetricCollection;
- (id)parseCollection:(id)a0 logger:(id)a1;
- (void)setupMetricsHook:(id)a0;
- (void)stopMetricCollection;
- (void)storeCollection:(id)a0 logger:(id)a1;

@end
