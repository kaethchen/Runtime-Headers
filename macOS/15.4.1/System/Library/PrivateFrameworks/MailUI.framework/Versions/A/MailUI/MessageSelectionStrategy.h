@protocol MessageSelectionStrategyDataSource;

@interface MessageSelectionStrategy : NSObject

@property (readonly, weak, nonatomic) id<MessageSelectionStrategyDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)_itemIDToSelectFromItemID:(id)a0 deletedMessageIDs:(id)a1 withDirection:(int)a2;
- (id)itemIDToSelectAfterDeletedMessageItemIDs:(id)a0;
- (id)itemIDToSelectFromItemID:(id)a0 withDirection:(int)a1;
- (BOOL)shouldChangeSelectionAfterDeletedMessageItemIDs:(id)a0 selectedItemIDs:(id)a1;

@end
