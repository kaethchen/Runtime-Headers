@interface MailUI.AboutCategoriesStatisticsProvider : NSObject <EMCollectionChangeObserver> {
    void /* unknown type, empty encoding */ daemonInterface;
    void /* unknown type, empty encoding */ maxSenderNameCount;
    void /* unknown type, empty encoding */ queryTimeout;
}

- (id)init;
- (void).cxx_destruct;
- (void)collection:(id)a0 addedItemIDs:(id)a1 before:(id)a2;
- (void)collection:(id)a0 movedItemIDs:(id)a1 before:(id)a2;
- (void)collection:(id)a0 addedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 changedItemIDs:(id)a1;
- (void)collection:(id)a0 deletedItemIDs:(id)a1;
- (void)collection:(id)a0 movedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 replacedExistingItemID:(id)a1 withNewItemID:(id)a2;

@end
