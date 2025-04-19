@class NSArray, NSMutableDictionary, MFIMAPAccount, NSMutableSet;

@interface MFIMAPSizeEngine : MFRemoteStoreSizeEngine {
    unsigned long long _workerThreadCount;
    NSMutableDictionary *_mailboxesByQuotaRoot;
    NSMutableSet *_quotasToFetch;
    NSMutableSet *_observedIMAPMailboxes;
    NSMutableSet *_observedIMAPQuotaRoots;
}

@property (nonatomic) long long quotaStatus;
@property (readonly, copy) NSArray *quotaNames;
@property (readonly, nonatomic) MFIMAPAccount *account;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithAccount:(id)a0;
- (void)_addQuotaRootsFromMailbox:(id)a0;
- (void)_addUsageInfoFromMailbox:(id)a0;
- (void)_changeQuotaRoots:(id)a0 forMailbox:(id)a1;
- (BOOL)_changeUsageInfo:(struct { long long x0; unsigned long long x1; } *)a0 forMailbox:(id)a1 refetchQuotas:(BOOL)a2;
- (void)_getSizeForMailbox:(id)a0;
- (void)_mailboxBecameInvalid:(id)a0;
- (void)_runWorkerThread;
- (id)copyMailboxesForQuotaName:(id)a0;
- (BOOL)mailbox:(id)a0 usesQuotaName:(id)a1;
- (BOOL)shouldStartWorkerThread;
- (id)usageForQuotaName:(id)a0;

@end
