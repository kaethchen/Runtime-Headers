@class CNObservableContractEnforcement, NSString, _CNObservableEventBufferingStrategy, NSMutableArray;
@protocol CNSchedulerProvider, NSLocking;

@interface CNReplaySubject : CNObservable <CNObserver>

@property (readonly, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) _CNObservableEventBufferingStrategy *recentEventStrategy;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<NSLocking> resourceLock;
@property (readonly, nonatomic) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_removeObserver:(id)a0;
- (id)subscribe:(id)a0;
- (id)resourceLock_removeAllObservers;
- (id)initWithCapacity:(unsigned long long)a0 schedulerProvider:(id)a1;
- (id)initWithQueue:(id)a0 schedulerProvider:(id)a1;
- (id)initWithSchedulerProvider:(id)a0;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)a0;
- (void)observerDidReceiveResult:(id)a0;
- (void)performWithResourceLock:(id /* block */)a0;
- (void)resourceLock_scheduleReplayToObserver:(id)a0;
- (void)resourceLock_swapBufferingStrategiesGivenNewTerminatingEvent:(id)a0;
- (id)resourceLock_upToDateObserverFromObserver:(id)a0;
- (id)resultWithResourceLock:(id /* block */)a0;

@end
