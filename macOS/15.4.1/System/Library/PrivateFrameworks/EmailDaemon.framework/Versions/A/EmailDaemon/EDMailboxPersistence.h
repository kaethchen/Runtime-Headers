@class EMCoreAnalyticsCollector, NSIndexSet, NSString, NSBackgroundActivityScheduler, EDMailboxProvider, NSMutableDictionary, NSSet, EDPersistenceHookRegistry, EDPersistenceDatabase, EDMailboxPersistenceStatistics;

@interface EDMailboxPersistence : NSObject <EDMailboxProviderDelegate, EMMailboxTypeResolver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changeObserversByIdentifierLock;
}

@property (retain, nonatomic) NSBackgroundActivityScheduler *statisticsReportingScheduler;
@property (retain, nonatomic) NSMutableDictionary *changeObserversByIdentifier;
@property (readonly, nonatomic) EMCoreAnalyticsCollector *analyticsCollector;
@property (retain, nonatomic) EDMailboxProvider *mailboxProvider;
@property (retain, nonatomic) EDPersistenceDatabase *database;
@property (retain, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) EDMailboxPersistenceStatistics *statistics;
@property (readonly, copy, nonatomic) NSIndexSet *frecentMailboxes;
@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initForTesting:(BOOL)a0;
- (struct EDMailboxRowID_s { unsigned long long x0; })insertDatabaseRowForMailboxURL:(id)a0;
- (struct EDMailboxRowID_s { unsigned long long x0; })mailboxDatabaseIDForMailboxURL:(id)a0;
- (void)_sendCoreAnalyticsForMailboxesPerAccount:(id)a0 accountTypePerAccount:(id)a1;
- (id)mailboxObjectIDsForMailboxType:(long long)a0;
- (id)mailboxURLForMailboxDatabaseID:(struct EDMailboxRowID_s { unsigned long long x0; })a0;
- (BOOL)moveMailbox:(id)a0 newParentMailboxID:(id)a1;
- (void)_reportPersistenceStatistics:(id)a0;
- (void)_sendCoreAnalyticsForLargestMailbox:(long long)a0 messageCountInSecondLargestMailbox:(long long)a1;
- (void)_sendCoreAnalyticsForMessagesPerAccount:(id)a0 accountTypePerAccount:(id)a1;
- (void)_sendCoreAnalyticsForMessagesPerInbox:(id)a0 accountTypePerAccount:(id)a1 accountPerInbox:(id)a2;
- (void)_sendEventToCoreAnalytics:(id)a0 withEventDictionary:(id)a1;
- (void)_startReportingPersistenceStatistics;
- (void)_stopReportingPersistenceStatistics;
- (void)addChangeObserver:(id)a0 withIdentifier:(id)a1;
- (id)allMailboxes;
- (void)allMailboxesWithCompletionHandler:(id /* block */)a0;
- (BOOL)createMailbox:(id)a0 parentMailboxID:(id)a1;
- (BOOL)deleteMailbox:(id)a0;
- (void)fetchMailboxListsWithKind:(long long)a0;
- (id)initWithMailboxProvider:(id)a0 database:(id)a1 hookRegistry:(id)a2;
- (id)legacyMailboxForMailboxURL:(id)a0;
- (id)legacyMailboxForObjectID:(id)a0;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)a0 createIfNecessary:(BOOL)a1;
- (id)mailboxDatabaseIDsForMailboxURLStrings:(id)a0;
- (void)mailboxListInvalidated;
- (long long)mailboxTypeForMailboxObjectID:(id)a0;
- (BOOL)mailboxURLIsGmailLabel:(id)a0;
- (void)recordFrecencyEventWithMailboxesWithIDs:(id)a0;
- (void)removeChangeObserverWithIdentifier:(id)a0;
- (BOOL)renameMailbox:(id)a0 newName:(id)a1;
- (void)scheduleRecurringActivity;
- (void)serverCountsForMailboxScope:(id)a0 block:(id /* block */)a1;
- (void)testRecordFrecencyEventsForAllMailboxes;
- (void)testResetFrecencyForAllMailboxes;
- (void)test_tearDown;
- (id)userCreatedMailboxObjectIDs;

@end
