@class IMAPDownloadCache, IMAPSyncBodiesOperation, NSString, NSMutableArray, NSMutableDictionary, IMAPTaskManager, NSObject, NSMutableSet, NSMutableIndexSet, NSMutableOrderedSet;
@protocol OS_os_log, IMAPMessageDataSource;

@interface IMAPBodyFetchTask : IMAPTask <EFSignpostable, IMAPGetMessagesOperationDelegate, IMAPSyncBodiesOperationDelegate, IMAPPersistBodiesOperationDelegate, IMAPGetAttachmentsDownloadsOperationDelegate, IMAPSyncAttachmentsOperationDelegate> {
    NSMutableIndexSet *_mandatoryUIDsToFetch;
    NSMutableIndexSet *_discretionaryUIDsToFetch;
    NSMutableIndexSet *_userRequestedUIDsToFetch;
    NSMutableDictionary *_messagesToFetch;
    NSMutableIndexSet *_mandatoryUIDsBeingFetched;
    NSMutableIndexSet *_discretionaryUIDsBeingFetched;
    NSMutableIndexSet *_userRequestedUIDsBeingFetched;
    NSMutableSet *_messagesBeingFetched;
    NSMutableOrderedSet *_bodyDownloadsToPersist;
    NSMutableOrderedSet *_userRequestedDownloadsToPersist;
    NSMutableSet *_discretionaryBodySyncOperations;
    NSMutableArray *_messagesWithAttachmentsToProcess;
    NSMutableArray *_messagesWithAttachmentsBeingProcessed;
    NSMutableArray *_mandatoryAttachmentsDownloadsToFetch;
    NSMutableArray *_discretionaryAttachmentsDownloadsToFetch;
    NSMutableDictionary *_attachmentsDownloadsBeingFetched;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) IMAPTaskManager *taskManager;
@property (retain, nonatomic) IMAPDownloadCache *downloadCache;
@property (nonatomic) BOOL needToCheckForIncompleteMessages;
@property (nonatomic) BOOL checkingForIncompleteMessages;
@property (nonatomic) BOOL persistingMessages;
@property (nonatomic) BOOL gettingMessagesToFetch;
@property (retain, nonatomic) IMAPSyncBodiesOperation *userRequestedSyncBodiesOperation;
@property (readonly, nonatomic) BOOL dataSourceIsInboxOrAllMail;
@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;
@property (nonatomic) unsigned int uidNext;
@property (readonly, nonatomic) BOOL hasMessagesToFetch;
@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)cancel;
- (void)end;
- (void)operationFinished:(id)a0;
- (void)addMessages:(id)a0;
- (id)initWithMailboxName:(id)a0;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (void)recalculatePriorities;
- (id)initWithDataSource:(id)a0 taskManager:(id)a1;
- (id)_messagesInProgress;
- (long long)_nextBatchPriorityDeferDiscretionaryWork:(BOOL)a0;
- (long long)_nextNetworkPriorityAndOperation:(id *)a0;
- (unsigned long long)_numberOfUIDsToFetch;
- (long long)_priorityOfUIDsToGet;
- (BOOL)_shouldConfigureNextNetworkOperationForUIDs:(id)a0;
- (id)_uidsOfMessagesToGet;
- (void)checkForIncompleteMessages;
- (void)getAttachmentsDownloadsOperation:(id)a0 gotDownloads:(id)a1 missedMessages:(id)a2;
- (void)getMessagesOperation:(id)a0 gotMessages:(id)a1;
- (id)mailboxNameWithoutPII;
- (void)persistBodiesOperation:(id)a0 persistedDownloads:(id)a1;
- (void)removeUIDs:(id)a0;
- (void)setUserRequestedMessages:(id)a0;
- (void)syncAttachmentsOperation:(id)a0 syncedAttachmentsForDownloads:(id)a1;
- (void)syncBodiesOperation:(id)a0 syncedBodiesForMessages:(id)a1 downloadsToPersist:(id)a2 messagesNeedingAttachments:(id)a3;

@end
