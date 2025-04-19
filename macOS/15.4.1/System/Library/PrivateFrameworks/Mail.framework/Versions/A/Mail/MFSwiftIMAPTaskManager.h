@class NSString;

@interface MFSwiftIMAPTaskManager : NSObject <IMAPTaskManager> {
    void /* unknown type, empty encoding */ workloopKey;
    void /* unknown type, empty encoding */ workloop;
    void /* unknown type, empty encoding */ callbackQueue;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ makeEngineAndAdaptor;
    void /* unknown type, empty encoding */ _engineAndAdaptor;
    void /* unknown type, empty encoding */ bodyFetchContext;
}

@property (nonatomic, copy) NSString *defaultIdleMailboxName;
@property (nonatomic, copy) NSString *secondaryIdleMailboxName;
@property (nonatomic, readonly) BOOL connected;
@property (nonatomic) unsigned int firstNewInboxUID;
@property (nonatomic, readonly) BOOL hasActivity;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)terminate:(id /* block */)a0;
- (id)initWithAccount:(id)a0;
- (BOOL)connectToServer;
- (void)accountDidChange:(id)a0;
- (void)closeAllConnections;
- (BOOL)deleteMailbox:(id)a0;
- (void)test_tearDown;
- (void)addLocalAction:(id)a0;
- (void)expungeMailbox:(id)a0;
- (id)fetchNamespaces;
- (void)beginPerformingLocalActionsIfNeeded;
- (void)cancelMailboxSyncTaskForMailboxName:(id)a0;
- (void)checkForNewLocalActions;
- (BOOL)createMailbox:(id)a0;
- (id)downloadBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 allowPartial:(BOOL)a2 error:(id *)a3;
- (id)downloadHeaderDataForMessage:(id)a0;
- (BOOL)expungeMailbox:(id)a0 ifSelected:(BOOL)a1;
- (void)expungeUIDs:(id)a0 inMailbox:(id)a1;
- (void)fetchQuotaForRootName:(id)a0;
- (void)fetchQuotaRootNamesForMailboxes:(id)a0;
- (id)fetchSeparatorChar;
- (BOOL)fetchTotalSizeAndMessageCountForMailbox:(id)a0;
- (void)goOffline;
- (BOOL)listingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (void)localMailboxesDidChange;
- (BOOL)mailboxIsInSync:(id)a0;
- (BOOL)mailboxIsSyncing:(id)a0;
- (id)newBodyFetchContext;
- (void)removeInvalidConnections;
- (BOOL)renameMailbox:(id)a0 toMailbox:(id)a1;
- (void)resetMaximumConnectionCount;
- (void)resyncMailboxWithName:(id)a0;
- (BOOL)subscribeMailbox:(id)a0;
- (BOOL)subscribedListingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (BOOL)supportsQuotas;
- (void)syncAccountForceFullSync:(BOOL)a0 userInitiated:(BOOL)a1;
- (void)unselectMailboxConnectionsWithName:(id)a0 expunge:(BOOL)a1;
- (BOOL)unsubscribeMailbox:(id)a0;
- (void)updateGlobalListOfUserSelectedMailboxes:(id)a0;

@end
