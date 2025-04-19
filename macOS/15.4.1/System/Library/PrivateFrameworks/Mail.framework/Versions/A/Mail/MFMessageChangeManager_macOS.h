@class NSString;

@interface MFMessageChangeManager_macOS : EDMessageChangeManager <EDMessageChangeManagerSubClassMethods, EDMessageChangeHookResponder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountForMailboxURL:(id)a0;
- (void)actionHasChangedAccount:(id)a0;
- (id)addLabels:(id)a0 removeLabels:(id)a1 toMessagesInDatabase:(id)a2;
- (id)addNewMessages:(id)a0 mailboxURL:(id)a1 userInitiated:(BOOL)a2;
- (id)applyFlagChange:(id)a0 toMessagesInDatabase:(id)a1;
- (void)applyVIPStatus:(BOOL)a0 toMessagesInDatabase:(id)a1;
- (void)checkForNewActionsInMailboxID:(long long)a0;
- (id)copyMessages:(id)a0 destinationMailboxURL:(id)a1 userInitiated:(BOOL)a2;
- (void)deletePersistedMessages:(id)a0;
- (void)displayErrorForTransferAction:(id)a0 withResults:(id)a1;
- (BOOL)haveCompleteMIMEForMessage:(id)a0;
- (id)iterateMessagesInMailboxURLs:(id)a0 excludingMessages:(id)a1 batchSize:(unsigned long long)a2 returnMessagesForFlagChange:(id)a3 handler:(id /* block */)a4;
- (long long)mailboxDatabaseIDForURL:(id)a0;
- (BOOL)mailboxIsAllMail:(id)a0;
- (BOOL)mailboxPartOfAllMail:(id)a0;
- (id)messageForDatabaseID:(long long)a0;
- (void)messageWasAppended:(id)a0;
- (id)messagesForRemoteIDs:(id)a0 mailboxURL:(id)a1;
- (id)moveMessages:(id)a0 destinationMailboxURL:(id)a1 userInitiated:(BOOL)a2;
- (BOOL)persistNewMessages:(id)a0 mailboxURL:(id)a1 oldMessagesByNewMessage:(id)a2 fromSyncing:(BOOL)a3;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)resetStatusCountsForMailboxWithURL:(id)a0;
- (void)setData:(id)a0 onMessage:(id)a1;
- (void)setRemoteID:(id)a0 onMessageWithDatabaseID:(long long)a1;
- (id)transferMessages:(id)a0 transferType:(long long)a1 destinationMailboxURL:(id)a2 userInitiated:(BOOL)a3;
- (BOOL)mailboxIsTrash:(id)a0;
- (id)_gmailStoreForMailboxURL:(id)a0;

@end
