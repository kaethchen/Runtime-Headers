@class NSString, NSArray, IMAPConnection, IMAPMailbox, IMAPNetworkTaskHandler;

@interface IMAPServerInterface : NSObject <ECIMAPServerInterface>

@property (readonly, nonatomic) IMAPConnection *connection;
@property (retain, nonatomic) NSString *mailboxName;
@property (readonly) IMAPNetworkTaskHandler *networkTaskHandler;
@property (readonly) IMAPMailbox *selectedIMAPMailbox;
@property (readonly, nonatomic) BOOL hasValidConnection;
@property (readonly, copy, nonatomic) NSString *separatorChar;
@property (readonly, copy) NSArray *capabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)check:(id *)a0;
- (BOOL)expunge;
- (void)unselect;
- (BOOL)supportsCapability:(unsigned long long)a0;
- (void)logout;
- (BOOL)storeGmailLabels:(id)a0 state:(BOOL)a1 forUIDs:(id)a2;
- (BOOL)appendData:(id)a0 toMailboxNamed:(id)a1 flags:(id)a2 dateReceived:(id)a3 appendInfo:(id *)a4 error:(id *)a5;
- (BOOL)copyUIDs:(id)a0 toMailboxNamed:(id)a1 copyInfo:(id *)a2 error:(id *)a3;
- (BOOL)expungeUIDs:(id)a0;
- (BOOL)moveUIDs:(id)a0 toMailboxNamed:(id)a1 copyInfo:(id *)a2 error:(id *)a3;
- (BOOL)storeFlagChange:(id)a0 forUIDs:(id)a1;
- (BOOL)deleteMailbox:(id)a0;
- (id)initWithConnection:(id)a0 mailboxName:(id)a1;
- (BOOL)createMailbox:(id)a0;
- (void)fetchQuotaRootNamesForMailboxes:(id)a0;
- (BOOL)listingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (BOOL)renameMailbox:(id)a0 toMailbox:(id)a1;
- (BOOL)subscribeMailbox:(id)a0;
- (BOOL)subscribedListingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (BOOL)unsubscribeMailbox:(id)a0;
- (BOOL)selectMailboxIfNeededWithError:(id *)a0;
- (BOOL)_batchUIDs:(id)a0 block:(id /* block */)a1;
- (BOOL)_setError:(id *)a0 fromCommand:(id)a1;
- (void)_setErrorFromCommand:(id)a0 overwriteExistingError:(BOOL)a1;
- (id)_sourceUIDsToDestinationUIDsFromMessageInfo:(id)a0;
- (BOOL)_transferUIDs:(id)a0 toMailboxNamed:(id)a1 isMove:(BOOL)a2 copyInfo:(id *)a3 error:(id *)a4;
- (BOOL)capabilityIsEnabled:(unsigned long long)a0;
- (void)closeAndLogout;
- (BOOL)executeClientCommand:(id)a0;
- (void)fetchTotalSizeAndMessageCount;
- (BOOL)getQuotaForRootName:(id)a0;
- (id)initWithNetworkTaskHandler:(id)a0 mailboxName:(id)a1;
- (id)mailboxNameIfSelected:(BOOL)a0;
- (BOOL)selectMailbox:(id)a0 error:(id *)a1;
- (void)startIdle;

@end
