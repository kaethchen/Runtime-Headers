@class LACDTOLocationState, NSString, NSObject;
@protocol LACDTOEventBus, LACDTOLocationProvider, OS_dispatch_queue, LACDTOLocationMonitor;

@interface LACDTOLocationController : NSObject <LACDTOLocationMonitorDelegate, LACDTOLocationController, LACDTOEventProducer> {
    id<LACDTOLocationProvider> _locationProvider;
    id<LACDTOLocationMonitor> _monitor;
}

@property (retain, nonatomic) LACDTOLocationState *locationState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<LACDTOEventBus> eventBus;

- (void).cxx_destruct;
- (void)checkIsInFamiliarLocationWithCompletion:(id /* block */)a0;
- (id)initWithLocationProvider:(id)a0 monitor:(id)a1 workQueue:(id)a2;
- (void)locationMonitor:(id)a0 didReceiveLocationState:(id)a1;
- (void)pendingEvaluationController:(id)a0 updatedPendingEvaluation:(id)a1;
- (void)pendingEvaluationControllerDidStartTrackingPendingEvaluations:(id)a0;
- (void)pendingEvaluationControllerDidStopTrackingPendingEvaluations:(id)a0;

@end
