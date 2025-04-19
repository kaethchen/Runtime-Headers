@class AMSMutablePromise;
@protocol AMSMetricsFlushStrategy;

@interface AMSMetricsFlushOperation : AMSMetricsOperation

@property (readonly) id<AMSMetricsFlushStrategy> strategy;
@property (readonly) AMSMutablePromise *promise;

- (void).cxx_destruct;
- (id)initWithStrategy:(id)a0 promise:(id)a1;

@end
