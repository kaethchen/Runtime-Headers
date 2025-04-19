@class NSString, NSProgress, MFPOPAccount, NSMutableSet, NSMutableIndexSet;

@interface MFPOPStore : MFMessageStore <MFPOPConnectionDelegate, MFRouterStore> {
    NSMutableSet *_skippedMessageIds;
    NSMutableIndexSet *_messageNumbersToDelete;
    BOOL _lastConnectionFailed;
}

@property BOOL routerCancelled;
@property (retain, nonatomic) NSProgress *checkProgress;
@property (readonly, nonatomic) MFPOPAccount *account;
@property (nonatomic) BOOL performingUserInitiatedFetch;
@property (readonly, nonatomic) BOOL connectionShouldPrefetchMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_log;

- (id)init;
- (void).cxx_destruct;
- (id)displayName;
- (void)cancel;
- (id)initWithAccount:(id)a0;
- (void)deleteMessages:(id)a0;
- (BOOL)isOpened;
- (id)mailbox;
- (id)moveMessages:(id)a0 destinationMailboxURL:(id)a1 userInitiated:(BOOL)a2;
- (void)_cancelAutosave;
- (void)_addMessageNumberToDelete:(unsigned long long)a0;
- (id)_authenticatedConnection;
- (void)_backgroundFetchFailed:(id)a0;
- (void)_beginCheckingForMailProgress;
- (void)_clearMessageNumbersToDelete;
- (BOOL)_closeConnection:(id)a0;
- (id)_copyMessageNumbersToDelete;
- (BOOL)_createDirectoryIfNeeded;
- (id)_defaultRouterDestination;
- (void)_deleteMessagesMarkedForDeletionUsingManager:(id)a0;
- (id)_fetchBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 fetchIfNotAvailable:(BOOL)a2 allowPartial:(BOOL)a3;
- (id)_fetchHeaderDataForMessage:(id)a0 fetchIfNotAvailable:(BOOL)a1 allowPartial:(BOOL)a2;
- (void)_finishCheckingForMailProgress;
- (BOOL)_firstAndLast:(unsigned long long)a0 onConnection:(id)a1 alreadySeen:(id)a2;
- (void)_incrementFoundMessages:(unsigned long long)a0;
- (id)_messageIDForNumber:(unsigned long long)a0 serverIdsByNumber:(id)a1 connection:(id)a2;
- (void)_removeDeletedMessagesWithNumbers:(id)a0 fromSeenMessageManager:(id)a1 connection:(id)a2;
- (void)_setFoundNewUnreadMessageInInbox;
- (void)_setNeedsAutosave;
- (BOOL)_shouldDeleteSeenMessage:(id)a0 messageID:(id)a1 deletionPolicy:(long long)a2 cutoffDate:(id)a3 url:(id)a4 inbox:(id)a5;
- (void)connection:(id)a0 didRetrieveData:(id)a1 forMessageNumber:(unsigned long long)a2;
- (void)connection:(id)a0 receivedNumberOfBytes:(unsigned long long)a1;
- (long long)connection:(id)a0 willRetrieveMessageNumber:(unsigned long long)a1 header:(id)a2 size:(unsigned long long)a3;
- (void)deleteMessages:(id)a0 moveToTrash:(BOOL)a1;
- (void)fetchSynchronously;
- (id)initWithMailbox:(id)a0 readOnly:(BOOL)a1 createEmptyStore:(BOOL)a2;
- (void)messageFlagsDidChange:(id)a0 flags:(id)a1;
- (id)messageForMessageID:(id)a0;
- (void)messagesWereRouted:(id)a0;
- (void)messagesWillBeRouted:(id)a0;

@end
