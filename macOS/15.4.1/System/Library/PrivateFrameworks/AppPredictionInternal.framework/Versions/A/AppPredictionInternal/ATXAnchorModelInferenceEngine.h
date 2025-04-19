@class NSUserDefaults, ATXCoreDuetContextHelper, ATXAnchorModelPredictionScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXAnchorModelInferenceEngine : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXAnchorModelPredictionScheduler *_predictionScheduler;
    _Atomic BOOL _started;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)currentDuetEventForAnchor:(id)a0;
- (id /* block */)entranceCallbackForAnchor:(id)a0;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)handleAnchorEventForAnchor:(id)a0;
- (void)handleAnchorEventForGymArrival;
- (void)handleAnchorEventForIdleTimeBegin;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (void)handleAnchorExitEventForGymArrival;
- (void)handleInferenceEvent:(id)a0;
- (void)handleLOIEntrance;
- (void)handleLOIExit;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)queueHandleInferenceEvent:(id)a0;
- (void)registerAnchorEventListenerForAnchor:(id)a0;
- (void)registerAnchorEventListeners;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (void)registerForAnchorExit:(id)a0 cdContext:(id)a1;
- (void)registerForWakingNotificationForAnchor:(id)a0 cdContext:(id)a1;
- (void)retryPreviouslyIncompleteInference;
- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (id)supportedAnchorsForInference;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void)unregisterAnchorEventListeners;

@end
