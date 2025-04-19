@class EMRemoteContentURLCache, EDMessagePersistence, EDMailboxActionPersistence, EDCategorizationSyncManager, EDActivityPersistence, EDReadLaterPersistence, EDConversationPersistence, EDVIPManager, EDDataDetectionPersistence, EDServerMessagePersistenceFactory, EDPersistenceHookRegistry, EDListUnsubscribeHandler, EDGmailLabelPersistence, EDSearchableIndexDiagnosticsController, MEContentRuleListManager, EMBlockedSenderManager, EDMailboxPersistence, EDBusinessCloudStorage, EDCategoryPersistence, EDSearchableIndexManager, EDRemoteContentCacheConfiguration, EDBIMIManager, EDMessageChangeManager, EDThreadPersistence, EDLocalActionPersistence, EDRemindMeNotificationController, NSObject, NSString, EDSenderPersistence, EDPersistenceDatabase, EDRemoteContentManager, EFXPCAlarmScheduler, EDRichLinkPersistence, EDBusinessPersistence, EDRemoteContentPersistence, EMRemoteContentURLSession, EDAttachmentPersistenceManager;
@protocol OS_os_log, EMUserProfileProvider, EDAccountsProvider, EDSearchProvider;

@interface EDPersistence : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (retain) EDVIPManager *vipManager;
@property (retain, nonatomic) EDListUnsubscribeHandler *listUnsubscribeHandler;
@property (readonly, nonatomic) EDBIMIManager *bimiManager;
@property (readonly) EDPersistenceDatabase *database;
@property (readonly) EDConversationPersistence *conversationPersistence;
@property (readonly) EDLocalActionPersistence *localActionPersistence;
@property (readonly) EDServerMessagePersistenceFactory *serverMessagePersistenceFactory;
@property (readonly) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly) EDThreadPersistence *threadPersistence;
@property (readonly) EDSenderPersistence *senderPersistence;
@property (readonly, nonatomic) EDMailboxActionPersistence *mailboxActionPersistence;
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (readonly) EDMessagePersistence *messagePersistence;
@property (readonly) EDMessageChangeManager *messageChangeManager;
@property (readonly) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly) EDSearchableIndexManager *searchableIndexManager;
@property (readonly, nonatomic) id<EDSearchProvider> searchProvider;
@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager;
@property (readonly) EDActivityPersistence *activityPersistence;
@property (readonly) EDRemoteContentManager *remoteContentManager;
@property (readonly) EDRemoteContentPersistence *remoteContentPersistence;
@property (readonly) EDAttachmentPersistenceManager *attachmentPersistenceManager;
@property (readonly, nonatomic) EDRemoteContentCacheConfiguration *remoteContentCacheConfiguration;
@property (retain, nonatomic) EMRemoteContentURLCache *remoteContentURLCache;
@property (retain, nonatomic) EMRemoteContentURLSession *remoteContentURLSession;
@property (readonly, nonatomic) MEContentRuleListManager *contentRuleListManager;
@property (readonly) EDReadLaterPersistence *readLaterPersistence;
@property (readonly) EDCategoryPersistence *categoryPersistence;
@property (readonly) EDDataDetectionPersistence *dataDetectionPersistence;
@property (readonly) EDRichLinkPersistence *richLinkPersistence;
@property (readonly) EDBusinessPersistence *businessPersistence;
@property (readonly, nonatomic) EDBusinessCloudStorage *businessCloudStorage;
@property (readonly, nonatomic) EDCategorizationSyncManager *categorizationSyncManager;
@property (readonly, nonatomic) EDRemindMeNotificationController *remindMeNotificationController;
@property (readonly, nonatomic) EFXPCAlarmScheduler *alarmScheduler;
@property (readonly, nonatomic) EDSearchableIndexDiagnosticsController *diagnosticsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)persistenceStateWithStatistics:(id)a0;
- (id)persistenceStatistics;
- (void)scheduleRecurringActivity;
- (id)searchableIndexStatistics;
- (void)test_tearDown;

@end
