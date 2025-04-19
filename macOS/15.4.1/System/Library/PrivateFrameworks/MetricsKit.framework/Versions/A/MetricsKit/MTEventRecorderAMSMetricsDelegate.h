@class NSString, NSMutableDictionary, AMSPromise, NSObject;
@protocol AMSBagProtocol, OS_os_transaction;

@interface MTEventRecorderAMSMetricsDelegate : NSObject <MTEventRecorderDelegate>

@property (retain) NSString *containerId;
@property (retain) id<AMSBagProtocol> amsBag;
@property (retain) AMSPromise *metricsBagPromise;
@property (retain) NSMutableDictionary *amsMetricsByTopic;
@property (retain) NSMutableDictionary *periodicQueuesByTopic;
@property long long numberOfPendingEvents;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property BOOL monitorsLifecycleEvents;
@property (getter=isTransactionEnabled) BOOL transactionEnabled;
@property long long flushMode;
@property double flushTimeInterval;
@property (getter=isFlushTimerEnabled) BOOL flushTimerEnabled;
@property long long maximumBatchSize;
@property BOOL personalizedWithItunesAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)amsMetricsObjectCache;

- (void).cxx_destruct;
- (void)_beginTransaction;
- (void)_endTransaction;
- (void)_flushEvents:(id)a0 topic:(id)a1;
- (id)_recordEvent:(id)a0 toTopic:(id)a1;
- (id)_sortedEventsFromBatch:(id)a0;
- (id)activeItunesAccount;
- (id)amsContainerIdForTopic:(id)a0;
- (id)amsMetricsForTopic:(id)a0;
- (id)flushUnreportedEvents;
- (id)initWithContainerId:(id)a0 amsBag:(id)a1;
- (id)initWithContainerId:(id)a0 profileName:(id)a1 profileVersion:(id)a2;
- (id)lookupItunesAccount:(id)a0;
- (id)periodicQueueForTopic:(id)a0;
- (id)recordEvent:(id)a0 toTopic:(id)a1;
- (id)sendMethod;

@end
