@class NSString, MFMailbox, MFEWSDeleteMailboxTaskOperation, MFEWSMailboxReconcileTaskOperation, NSMutableDictionary, MFEWSPersistMessageMetadataOperation, NSMutableArray, NSProgress, NSMutableSet, MFEWSAccount;
@protocol MFEWSMailboxDataCache;

@interface MFEWSMailboxSyncTask : MFEWSTask <MFEWSMailboxReconcileTaskOperationDelegate, MFEWSFetchMessageMetadataOperationDelegate, MFEWSPersistMessageMetadataOperationDelegate> {
    MFEWSMailboxReconcileTaskOperation *_reconcileOperation;
    MFEWSPersistMessageMetadataOperation *_persistMetadataOperation;
    NSMutableArray *_batchesNeedingFetch;
    NSMutableSet *_currentFetchOperations;
    NSMutableDictionary *_batchesToPersistByInitialSyncState;
    BOOL _userInitiated;
}

@property (copy, nonatomic) NSString *syncStateToReconcile;
@property (copy, nonatomic) NSString *syncStateToPersist;
@property (retain, nonatomic) MFEWSMailboxReconcileTaskOperation *reconcileOperation;
@property (retain, nonatomic) MFEWSPersistMessageMetadataOperation *persistMetadataOperation;
@property (retain, nonatomic) MFEWSDeleteMailboxTaskOperation *deleteMailboxOperation;
@property (readonly, nonatomic) NSProgress *checkProgress;
@property (readonly, nonatomic) MFEWSAccount *account;
@property (nonatomic) BOOL needsDelete;
@property (nonatomic) BOOL foundNewUnreadInboxMessage;
@property (nonatomic) BOOL isPrimaryMailbox;
@property (nonatomic) BOOL isInitialSync;
@property (nonatomic) BOOL needToPersistInitialSync;
@property (readonly, nonatomic) MFMailbox *mailbox;
@property (copy, nonatomic) NSString *folderIDString;
@property (weak, nonatomic) id<MFEWSMailboxDataCache> mailboxDataCache;
@property (nonatomic) BOOL userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)end;
- (void)operationFinished:(id)a0;
- (id)initWithMailbox:(id)a0;
- (void)_addFetchOperation:(id)a0;
- (void)_finishCheckingForMailProgress;
- (void)_incrementFoundMessages:(unsigned long long)a0;
- (void)_removeFetchOperation:(id)a0;
- (void)_sendMailboxDidStartSyncTaskNotification;
- (void)_setFoundNewUnreadMessageInInbox;
- (void)fetchMessageMetadataOperation:(id)a0 didPopulateBatch:(id)a1;
- (void)mailboxReconcileTaskOperation:(id)a0 receivedBatch:(id)a1;
- (void)mailboxReconcileTaskOperationFolderIsInvalid:(id)a0;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (void)persistMessageMetadataOperation:(id)a0 didPersistBatch:(id)a1;
- (void)recalculatePriorities;
- (void)reconcileMailboxWithSyncState:(id)a0;

@end
