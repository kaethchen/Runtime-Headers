@class NSMapTable, NSMutableDictionary, NSOperationQueue, NSString;
@protocol CSKStreamTasksSchedulerDelegate;

@interface CSKStreamTasksScheduler : NSObject <CSKStreamTaskOperationDelegate>

@property (nonatomic) long long scheduledTasks;
@property (nonatomic) long long finishedTasks;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL cancelled;
@property (weak, nonatomic) NSMapTable *observers;
@property (readonly, nonatomic) NSOperationQueue *dataOperationQueue;
@property (readonly, nonatomic) NSMutableDictionary *observersOperationQueues;
@property (weak, nonatomic) id<CSKStreamTasksSchedulerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithObservers:(id)a0;
- (void)_safeIncrementScheduledTasksAndMessageDelegateForResumeIfNeeded;
- (void)_cancelOperationsWithName:(id)a0 initiatorIdentifier:(id)a1 operationQueue:(id)a2;
- (id)_currentObserverIdentifiers;
- (id /* block */)_dataAdditionTaskCompletionForObserverIdentifiers:(id)a0;
- (id /* block */)_dataRemovalTaskCompletionForObserverIdentifiers:(id)a0;
- (id /* block */)_dataTaskCompletionForObserverIdentifier:(id)a0;
- (void)_enumerateObserversWithIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)_observerDataBatchDirectionFromDataDirection:(unsigned long long)a0;
- (id)_operationQueueForObserver:(id)a0;
- (void)_safeIncrementFinishedTasksAndMessageDelegateForPauseIfNeeded;
- (void)_scheduleAdditionObserverTasksFromActivities:(id)a0 messages:(id)a1 direction:(unsigned long long)a2 toObserversWithIdentifiers:(id)a3 initiator:(id)a4;
- (void)_scheduleRemovalObserverTasksFromActivities:(id)a0 messages:(id)a1 toObserversWithIdentifiers:(id)a2 initiator:(id)a3;
- (void)_scheduleResetAndAdditionObserverTasksFromBatches:(id)a0 toObserverWithIdentifier:(id)a1 initiator:(id)a2;
- (void)_scheduleTask:(id)a0 priority:(long long)a1 operationQueue:(id)a2;
- (void)_scheduleTask:(id)a0 priority:(long long)a1 operationQueue:(id)a2 initiatorIdentifier:(id)a3 cancelPendingOnes:(BOOL)a4;
- (void)cancelAllObserversTasks;
- (void)scheduleDataAdditionTask:(id)a0 observerIdentifiers:(id)a1;
- (void)scheduleDataDirectionModifierTask:(id)a0;
- (void)scheduleDataRemovalTask:(id)a0 observerIdentifiers:(id)a1;
- (void)scheduleDataTask:(id)a0 observerIdentifier:(id)a1;
- (void)scheduleObserverResetTask:(id)a0;
- (void)streamTaskOperationDidFinish:(id)a0;

@end
