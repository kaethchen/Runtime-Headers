@class IASAnalyzerErrors, NSUUID, NSString, NSObject, IASSessionManager;
@protocol OS_dispatch_queue;

@interface IASAnalyzer : NSObject <IASAnalyzerProtocol>

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } depthRange;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) NSUUID *analyzerSessionId;
@property (weak, nonatomic) IASSessionManager *sessionManagerDelegate;
@property (retain, nonatomic) IASAnalyzerErrors *sessionErrors;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)periodic24HourEvents;

- (void).cxx_destruct;
- (void)consumeAction:(id)a0;
- (id)createTimerWithDelay:(double)a0 handler:(id /* block */)a1;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)shouldBeGarbageCollected;

@end
