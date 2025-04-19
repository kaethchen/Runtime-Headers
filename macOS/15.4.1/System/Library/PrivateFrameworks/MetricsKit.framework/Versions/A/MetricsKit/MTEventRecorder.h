@class NSMutableArray;
@protocol MTEventRecorderDelegate;

@interface MTEventRecorder : MTObject

@property BOOL monitorsLifecycleEvents;
@property (retain) NSMutableArray *eventListeners;
@property (weak) id<MTEventRecorderDelegate> delegate;

+ (id)_compositePromiseWithPromises:(id)a0 resolvingResultFromPromise:(id)a1;
+ (id)_metricsDataApplyingAllowlisting:(id)a0 usingRecorder:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)recordEvent:(id)a0;
- (void)addEventListener:(id)a0;
- (void)removeEventListener:(id)a0;
- (id)_amsDelegate;
- (id)_flushUnreportedEventsUsingRecorder:(id)a0;
- (id)_recordEvent:(id)a0 toTopic:(id)a1 usingRecorder:(id)a2;
- (id)_recordEvent:(id)a0 usingRecorder:(id)a1;
- (id)flushUnreportedEvents;
- (id)initWithMetricsKit:(id)a0;
- (void)maybeSubscribeToFlushNotification;
- (id)recordEvent:(id)a0 shouldSkipValidation:(BOOL)a1;
- (id)recordEvent:(id)a0 toTopic:(id)a1;
- (id)sendMethod;

@end
