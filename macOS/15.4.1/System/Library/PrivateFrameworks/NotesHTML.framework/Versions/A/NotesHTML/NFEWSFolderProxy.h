@class NFEWSAccountProxy, NSString;

@interface NFEWSFolderProxy : ICNFMCMailboxProxy

@property (weak) NFEWSAccountProxy *account;
@property (readonly, weak) NSString *folderId;

- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (void)updateFromServer;
- (BOOL)hasNotes;
- (id)_createOrUpdateItemsWithItemIds:(id)a0;
- (void)_deleteItemIdStrings:(id)a0;
- (id)_getItemsRequestWithIds:(id)a0;
- (id)_htmlFromPlainText:(id)a0;
- (id)_syncFolderItemsRequestWithSyncState:(id)a0 maxChanges:(long long)a1;
- (void)_updateNote:(id)a0 withEWSItem:(id)a1;

@end
