@class NSArray, NSMutableDictionary, NSMutableSet, MFRemoteStoreAccount;

@interface MFRemoteStoreSizeEngine : MFSizeEngine {
    NSMutableDictionary *_usageByMailbox;
    NSMutableSet *_mailboxesToSize;
}

@property (readonly) unsigned long long countOfMailboxesToSize;
@property (readonly, copy) NSArray *allUsageByMailboxKeys;
@property (readonly, nonatomic) MFRemoteStoreAccount *account;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (BOOL)_changeUsageInfo:(struct { long long x0; unsigned long long x1; } *)a0 forMailbox:(id)a1 refetchQuotas:(BOOL)a2;
- (void)_handleMailboxSizeChanged:(id)a0;
- (void)_mailboxBecameInvalid:(id)a0;
- (void)_mailboxSizeChanged:(id)a0;
- (BOOL)_prepareToRefresh;
- (void)_refetchListing:(id)a0;
- (void)_sizeChangedForMailbox:(id)a0;
- (void)addMailboxesToSizeFromArray:(id)a0;
- (id)popMailboxToSize;
- (BOOL)shouldStartWorkerThread;
- (id)usageForMailbox:(id)a0;

@end
