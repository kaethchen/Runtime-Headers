@class NSDate, NSString, AMSMetricsFlushOperation, AMSTreatmentStore, AMSBagKeySet, NSObject, NSMutableArray, AMSEngagement, AMSMetricsDatabaseDataSource;
@protocol OS_dispatch_queue, AMSMetricsBagContract, AMSBagProtocol;

@interface AMSMetrics : NSObject <AMSMetricsProtocol, AMSBagConsumer> {
    NSMutableArray *_enqueuedOperations;
    AMSMetricsFlushOperation *_currentFlushOperation;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _enqueuedOperationsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flushModeLock;
    _Atomic BOOL _flushingDisabled;
    Class _flushTaskClass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bagLock;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *sharedTimerQueue;
@property (class, readonly) BOOL appAnalyticsAllowed;
@property (class, readonly) BOOL diagnosticsSubmissionAllowed;
@property (class) BOOL disableBackgroundMetrics;
@property (class) BOOL flushDelayEnabled;
@property (class) BOOL flushTimerEnabled;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSMetricsDatabaseDataSource *databaseSource;
@property long long destination;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } engagementLock;
@property BOOL flushingDisabled;
@property (copy) id /* block */ flushOnDidBecomeActiveBlock;
@property (copy) id /* block */ flushIntervalBlock;
@property (retain) NSDate *flushIntervalStartTime;
@property (retain) AMSEngagement *engagement;
@property (retain) AMSTreatmentStore *treatmentStore;
@property (retain) id<AMSMetricsBagContract> bagContract;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly) NSString *containerId;
@property (readonly) long long eventCount;
@property BOOL flushTimerEnabled;
@property BOOL includeMMeClientInfoAndDeviceHeaders;
@property long long maxBatchSize;
@property long long maxEventsPerBatch;
@property long long maxRequestCount;
@property unsigned long long metricsSigningFlavour;
@property BOOL monitorsLifecycleEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)internalInstanceUsingBag:(id)a0;
+ (BOOL)recordAppAnalyticsForEvent:(id)a0 bugType:(id)a1;
+ (id)serverTimeFromDate:(id)a0;
+ (id)serverTimeFromTimeInterval:(double)a0;
+ (double)timeIntervalFromServerTime:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)enqueueEvent:(id)a0;
- (id)flush;
- (id)flushEvents:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (BOOL)_scheduledFlushAllowedForStyle:(long long)a0;
- (void)_beginFlushIntervalWithStyle:(long long)a0 events:(id)a1;
- (id)_determineFlushStrategyWithDataSource:(id)a0 topic:(id)a1;
- (id)_enqueueFigaroEvents:(id)a0;
- (id)_flushDataSource:(id)a0 topic:(id)a1;
- (void)_flushIntervalInvalidate;
- (double)_flushIntervalWithConfiguration:(id)a0 forEvents:(id)a1;
- (void)_flushTimerEnabledChanged;
- (void)_handleFlushIntervalWithStyle:(long long)a0;
- (id)_modifiedEvents:(id)a0;
- (void)_processOperationQueue;
- (void)_showTTRWithEvent:(id)a0;
- (void)dropEvents;
- (id)enqueueAsyncEvents:(id)a0;
- (void)enqueueEvents:(id)a0;
- (id)flushTopic:(id)a0;
- (id)initWithContainerID:(id)a0 bag:(id)a1;
- (id)initWithContainerID:(id)a0 bag:(id)a1 flushTaskClass:(Class)a2;
- (id)initWithContainerId:(id)a0 bagContract:(id)a1;
- (id)promiseForEnqueueingEvents:(id)a0;

@end
