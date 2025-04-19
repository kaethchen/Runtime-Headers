@class EMInMemoryThreadCollection, NSSet, EMObjectID, EMMessageRepository, EMThreadReloadSummaryHelper, NSObject, NSString;
@protocol OS_os_log, EFAssertableScheduler, EMMessageListItemQueryResultsObserver;

@interface EMInMemoryThreadQueryHandler : NSObject <EMInMemoryThreadCollectionDataSource, EMInMemoryThreadCollectionDelegate, EFLoggable> {
    id<EFAssertableScheduler> _threadCollectionScheduler;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, weak, nonatomic) EMMessageRepository *repository;
@property (readonly, weak, nonatomic) id<EMMessageListItemQueryResultsObserver> resultsObserver;
@property (readonly, nonatomic) EMObjectID *observationIdentifier;
@property (readonly, copy, nonatomic) NSSet *mailboxes;
@property (readonly, nonatomic) EMThreadReloadSummaryHelper *reloadSummaryHelper;
@property (readonly, nonatomic) EMInMemoryThreadCollection *threadCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_distinctObjectIDs:(id)a0 queryHandlerLog:(id)a1;
- (id)_extraInfoForThreadObjectIDs:(id)a0 isMove:(BOOL)a1;
- (void)collection:(id)a0 didMergeInThreadsForMove:(BOOL)a1 newObjectIDs:(id)a2 existingObjectID:(id)a3 hasChanges:(BOOL *)a4;
- (id)collection:(id)a0 messagesInConversationIDs:(id)a1 limit:(long long)a2;
- (void)collection:(id)a0 notifyOfOldestThreadsByMailboxObjectIDs:(id)a1;
- (void)collection:(id)a0 notifyReplacedExistingObjectID:(id)a1 newObjectID:(id)a2;
- (BOOL)collection:(id)a0 reportChanges:(id)a1;
- (BOOL)collection:(id)a0 reportChanges:(id)a1 reloadSummaries:(BOOL)a2;
- (BOOL)collection:(id)a0 reportDeletes:(id)a1;
- (void)didSendUpdatesInCollection:(id)a0;
- (void)logThreadObjectIDsChangesWithMessage:(id)a0 newObjectIDs:(id)a1 beforeExistingObjectID:(id)a2;
- (void)logThreadObjectIDsWithMessage:(id)a0 objectIDs:(id)a1;
- (id)mailboxesInCollection:(id)a0;
- (void)prepareToSendUpdatesInCollection:(id)a0;
- (id)initWithQuery:(id)a0 repository:(id)a1 mailboxTypeResolver:(id)a2 resultsObserver:(id)a3 observationIdentifier:(id)a4;
- (void)requestSummaryForMessageObjectIDs:(id)a0;

@end
