@interface MFGmailLabelStore : MFLibraryStore

- (id)lastSyncDate;
- (BOOL)allowsOverwrite;
- (id)moveMessages:(id)a0 destinationMailboxURL:(id)a1 userInitiated:(BOOL)a2;
- (id)_allMailStore;
- (void)_messagesAddedToLibrary:(id)a0;
- (long long)_removeOurLabelFromMessages:(id)a0;
- (void)async_setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (void)deleteMessages:(id)a0 moveToTrash:(BOOL)a1;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)a0 compact:(BOOL)a1;
- (id)lastMessageWithHeaders:(id)a0 inMailbox:(id)a1;
- (id)setFlagsFromDictionary:(id)a0 forMessages:(id)a1;
- (long long)undoAppendOfLibraryIDs:(id)a0;

@end
