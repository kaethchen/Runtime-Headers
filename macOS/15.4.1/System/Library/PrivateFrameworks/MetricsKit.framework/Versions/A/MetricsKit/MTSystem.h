@class NSObject, MTEnvironment, MTEventRecorder;
@protocol OS_dispatch_queue, MTEventFilter;

@interface MTSystem : MTObject

@property (retain) MTEnvironment *environment;
@property (retain) MTEventRecorder *eventRecorder;
@property (retain) id<MTEventFilter> eventFilter;
@property (retain) id<MTEventFilter> treatmentFilter;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithMetricsKit:(id)a0;
- (void)setEventFilterWithJavaScriptFunction:(id)a0 context:(id)a1 operationQueue:(id)a2;

@end
