@class MFEWSFolderHierarchyReconcileTask, MFEWSRetrievePersistedFolderDataTask, MFEWSAccount, NSString, MFEWSBackgroundBodyFetchTask, NSMutableDictionary;
@protocol MFEWSMailboxDataCache;

@interface MFEWSAccountSyncActivity : MCAggregateActivity <MFEWSMailboxDataCache> {
    NSMutableDictionary *_mailboxSyncTasksByMailboxURLString;
    BOOL _userInitiated;
}

@property (retain, nonatomic) MFEWSFolderHierarchyReconcileTask *folderHierarchyReconcileTask;
@property (retain, nonatomic) MFEWSRetrievePersistedFolderDataTask *retrievePersistedFolderDataTask;
@property (retain, nonatomic) MFEWSBackgroundBodyFetchTask *backgroundBodyFetchTask;
@property (readonly, weak, nonatomic) MFEWSAccount *account;
@property (weak, nonatomic) id<MFEWSMailboxDataCache> mailboxDataCache;
@property (readonly, nonatomic) BOOL currentlySynchronizingMailboxContents;
@property (nonatomic) BOOL userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)addMailboxesToReconcile:(id)a0;
- (id)cachedFolderIDForMailboxURL:(id)a0;
- (id)cachedSyncStateForMailboxURL:(id)a0;
- (void)childActivityFinished:(id)a0;
- (void)dataNotFoundForURL:(id)a0;
- (void)recalculatePriorityForMailboxURLString:(id)a0;
- (void)reconcileFolderHierarchyWithSyncState:(id)a0;
- (void)updateCachedFolderID:(id)a0 andSyncState:(id)a1 forMailboxURL:(id)a2;

@end
