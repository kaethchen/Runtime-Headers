@interface JetEngine.AMSMetricsWithInspection : AMSMetrics {
    void /* unknown type, empty encoding */ scanner;
    void /* unknown type, empty encoding */ urlSession;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithContainerID:(id)a0 bag:(id)a1;
- (id)initWithContainerId:(id)a0 bagContract:(id)a1;
- (id)promiseForEnqueueingEvents:(id)a0;

@end
