@class NSString, NSProgress, IMAPTaskManager, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_os_log, IMAPAccount;

@interface IMAPAccountSyncTask : IMAPTask <EFSignpostable, IMAPFetchMailboxStatusOperationDelegate> {
    NSMutableArray *_mailboxesNeedingStatus;
    NSMutableSet *_missedMailboxes;
    BOOL _userInitiated;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly) id<IMAPAccount> account;
@property (readonly) IMAPTaskManager *taskManager;
@property (readonly, nonatomic) NSProgress *checkProgress;
@property (nonatomic) BOOL userInitiated;
@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)end;
- (void)operationFinished:(id)a0;
- (id)initWithMailboxName:(id)a0;
- (id)nextNetworkOperation;
- (void)recalculatePriorities;
- (long long)_nextNetworkPriorityAndOperation:(id *)a0;
- (void)fetchMailboxStatusOperation:(id)a0 fetchedStatusesForMailboxNames:(id)a1;
- (void)fetchMailboxStatusOperation:(id)a0 missedMailboxes:(id)a1;
- (id)initWithAccount:(id)a0 taskManager:(id)a1;
- (id)mailboxNameWithoutPII;

@end
