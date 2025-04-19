@class ACMonitoredAccountStore, CNCoalescingSchedulerDecorator, NSString, CNUnfairLock;

@interface CNAccountCollectionUpdateWatcher : NSObject <ACMonitoredAccountStoreDelegateProtocol>

@property (retain, nonatomic) ACMonitoredAccountStore *accountStore;
@property (nonatomic) unsigned long long state;
@property (readonly) CNUnfairLock *lock;
@property (readonly) CNCoalescingSchedulerDecorator *clientScheduler;
@property (readonly, weak) id target;
@property (readonly) SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void).cxx_destruct;
- (void)startObserving;
- (void)stopObserving;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (void)accountWasRemoved:(id)a0;
- (id)currentAccounts;
- (id)initWithTarget:(id)a0 action:(SEL)a1 schedulerProvider:(id)a2;
- (BOOL)mayHandleEvent;
- (void)sendCurrentAccountsToTarget;
- (void)sendCurrentAccountsToTargetOnScheduler:(id)a0;
- (void)startObservingAccountStore:(id)a0;
- (void)updateTargetWithAccounts:(id)a0;

@end
