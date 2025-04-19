@class NSString, LACDTONotificationManager, NSHashTable, NSObject;
@protocol LACDTORatchetStateProvider, LACDTOPolicyEvaluationIdentifierFactory, LACDTORatchetHandler, _TtP23LocalAuthenticationCore38LACDTOPendingPolicyEvaluationStoreType_, LACDTODeviceInfoProvider, OS_dispatch_queue;

@interface LACDTOPendingPolicyEvaluationController : NSObject <LACDarwinNotificationCenterObserver, LACDTONotificationManagerDelegate, LACDTOPendingPolicyEvaluationController, LACDTOPolicyEvaluationControllerObserver, LACDTOEventHandler> {
    NSHashTable *_observers;
    id<LACDTODeviceInfoProvider> _device;
    id<_TtP23LocalAuthenticationCore38LACDTOPendingPolicyEvaluationStoreType_> _evaluationStore;
    id<LACDTORatchetStateProvider> _ratchetStateProvider;
    id<LACDTOPolicyEvaluationIdentifierFactory> _evaluationIdentifierFactory;
    BOOL _shouldPostRestartRatchetPrompt;
    id<LACDTORatchetHandler> _ratchetHandler;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) LACDTONotificationManager *notificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)startController;
- (void)notificationCenter:(id)a0 didReceiveNotification:(struct __CFString { } *)a1;
- (void)_forEachObserver:(id /* block */)a0;
- (void)_scheduleNotificationForPendingEvaluationRecord:(id)a0 after:(double)a1 validity:(double)a2;
- (void)_addPendingEvaluationRecord:(id)a0 currentState:(id)a1;
- (void)_addPendingEvaluationRecordForRequest:(id)a0 currentState:(id)a1;
- (BOOL)_canFinishPendingEvaluationsForRatchetState:(id)a0;
- (void)_cancelPreviousNotificationForPendingEvaluationRecord:(id)a0 scheduledOnly:(BOOL)a1;
- (void)_cancelPreviousNotificationForRatchetRestartWithRatchetState:(id)a0;
- (void)_checkIsRatchetStateIn:(id)a0 completion:(id /* block */)a1;
- (void)_checkShouldAddPendingEvaluationRecordForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_checkShouldKeepPendingEvaluationRecordForResult:(id)a0 completion:(id /* block */)a1;
- (id)_coolOffStartedTimestampForIdentifier:(id)a0 currentState:(id)a1;
- (void)_handleRatchetStateChanged:(id)a0;
- (void)_handleSwitchToCoolOffState:(id)a0;
- (void)_handleSwitchToFinalState:(id)a0;
- (BOOL)_hasPendingEvaluationRecordForRequest:(id)a0;
- (BOOL)_isRatchetRestartRequest:(id)a0;
- (void)_loadPendingEvaluations;
- (void)_postNotificationForRatchetRestartIfNeeded;
- (void)_pruneInvalidatedEvaluations;
- (void)_prunePendingEvaluationsWithUUID:(id)a0;
- (void)_registerNotificationObservers;
- (void)_removePendingEvaluationRecordForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_removePendingEvaluationRecordWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_rescheduleNotifications;
- (void)_resetRatchetWithCompletion:(id /* block */)a0;
- (void)_restartRatchetForInvalidatedEvaluations;
- (void)_scheduleNotificationForRatchetRestart;
- (BOOL)_shouldPrunePendingEvaluation:(id)a0 uuid:(id)a1;
- (void)_updatePendingEvaluationsWithBlock:(id /* block */)a0;
- (void)_updatePendingEvaluationsWithUpdateBlock:(id /* block */)a0 observerFilter:(id /* block */)a1;
- (void)cancelPendingEvaluationForClient:(id)a0 ratchetIdentifier:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)handleEvent:(id)a0 sender:(id)a1;
- (id)initWithRatchetStateProvider:(id)a0 ratchetHandler:(id)a1 device:(id)a2 evaluationIdentifierFactory:(id)a3 persistentStore:(id)a4 workQueue:(id)a5;
- (void)notificationManager:(id)a0 didReceiveUserAction:(id)a1 completionHandler:(id /* block */)a2;
- (void)policyController:(id)a0 didFinishPolicyEvaluation:(id)a1 result:(id)a2;
- (void)policyController:(id)a0 willStartPolicyEvaluation:(id)a1;

@end
