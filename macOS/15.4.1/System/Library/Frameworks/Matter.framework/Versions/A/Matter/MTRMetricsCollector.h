@class NSMutableDictionary;

@interface MTRMetricsCollector : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_metricsDataCollection;
    struct DarwinTracingBackend { void /* function */ **_vptr$Backend; struct IntrusiveListNodePrivateBase *mPrev; struct IntrusiveListNodePrivateBase *mNext; id /* block */ mClientCallback; } _tracingBackend;
    BOOL _tracingBackendRegistered;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)resetMetrics;
- (id)metricSnapshot:(BOOL)a0;
- (void)handleMetricEvent:(struct MetricEvent { int x0; char *x1; struct Value { union Store { int x0; unsigned int x1; } x0; unsigned char x1; } x2; })a0;
- (void)registerTracingBackend;
- (void)unregisterTracingBackend;

@end
