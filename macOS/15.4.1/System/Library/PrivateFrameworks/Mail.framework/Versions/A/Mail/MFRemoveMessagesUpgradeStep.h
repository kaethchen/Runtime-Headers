@class NSArray;

@interface MFRemoveMessagesUpgradeStep : MFLibraryUpgradeStep

@property (nonatomic) BOOL shouldRecalculateMessageCounts;
@property (readonly, copy, nonatomic) NSArray *accounts;

- (void).cxx_destruct;
- (id)initWithDatabaseConnection:(id)a0;
- (void)cleanUpAfterRemovingMessagesWithRowIDs:(id)a0 subjects:(id)a1 senders:(id)a2 recalculateMessageCounts:(BOOL)a3;
- (id)initWithDatabaseConnection:(id)a0 accounts:(id)a1;
- (void)removeMessagesWithRowIDs:(id)a0 rowIDsByMailboxURLStrings:(id)a1;

@end
