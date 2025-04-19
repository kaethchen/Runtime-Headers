@class NSString, EMMailboxCategoryCloudStorage, EMMailboxRepository, EMAccountRepository, MCCCategoryRulesController;
@protocol EFScheduler;

@interface EMCategorizationSyncManager : NSObject <MCCCategoryRulesDelegate, EMMailboxCategoryCloudStorageObserver> {
    id<EFScheduler> _icloudSyncScheduler;
}

@property (readonly, nonatomic) MCCCategoryRulesController *rulesController;
@property (readonly, nonatomic) EMMailboxCategoryCloudStorage *mailboxCategoryCloudStorage;
@property (readonly, nonatomic) EMMailboxRepository *mailboxRepository;
@property (readonly, nonatomic) EMAccountRepository *accountRepository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)categoryRulesController:(id)a0 didReceiveNewOldTimestamps:(id)a1;
- (void)loadiCloudMCCKit;
- (void)categoryCloudStorage:(id)a0 didChangeLastSeenDate:(id)a1 lastSeenDisplayDate:(id)a2 forCategoryType:(id)a3 inMailboxWithExternalURL:(id)a4 originator:(unsigned long long)a5;
- (id)initWithMailboxCategoryCloudStorage:(id)a0 mailboxRepository:(id)a1 accountRepository:(id)a2;
- (id)primaryIcloudMailbox;

@end
