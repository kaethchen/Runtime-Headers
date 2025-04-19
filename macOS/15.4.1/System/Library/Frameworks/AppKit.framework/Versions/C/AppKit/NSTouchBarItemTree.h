@class NSArray, NSTouchBarItemTreeBarProviderNode, NSTouchBarItemTreeNode;

@interface NSTouchBarItemTree : NSObject <NSCopying>

@property (readonly, copy) NSArray *leafNodes;
@property (readonly, copy) NSArray *layoutOrderedLeafNodes;
@property (readonly, copy) NSArray *centeredLeafNodes;
@property (readonly, copy) NSArray *prioritizedLeafNodes;
@property (readonly, copy) NSTouchBarItemTreeBarProviderNode *rootNode;
@property (readonly, copy) NSTouchBarItemTreeNode *centeredRootNode;

+ (id)itemTreeWithDefaultPresetTouchBars:(id)a0;
+ (id)itemTreeWithTouchBars:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (BOOL)customization_nodeCanBeRemoved:(id)a0;
- (id)positionOfNode:(id)a0;
- (id)treeByMovingNode:(id)a0 toBeAfterNode:(id)a1;
- (id)_spliceTreeFromRootNode:(id)a0 centerNode:(id)a1 foundCenter:(BOOL *)a2;
- (BOOL)customization_itemWithIdentifier:(id)a0 canBeInsertedAfterNode:(id)a1;
- (BOOL)customization_node:(id)a0 canBeMovedAfterNode:(id)a1;
- (BOOL)customization_nodeCanBeReordered:(id)a0;
- (id)initWithRootNode:(id)a0 centeredRootNode:(id)a1;
- (unsigned long long)lastLeafPositionForInsertingItemFromTouchBar:(id)a0;
- (unsigned long long)lastLeafPositionForInsertingItemWithIdentifier:(id)a0;
- (unsigned long long)lastLeafPositionForMovingNode:(id)a0;
- (id)nodeForBar:(id)a0;
- (id)nodeForItem:(id)a0;
- (id)parentItemNodeForNode:(id)a0;
- (id)parentNodeForNode:(id)a0;
- (id)parentNodeForNode:(id)a0 outIndex:(long long *)a1;
- (BOOL)persistBar:(id)a0 toDomain:(id)a1;
- (BOOL)persistBarNode:(id)a0 toDomain:(id)a1;
- (void)persistTreeToDomain:(id)a0;
- (id)positionForInsertingItemFromTouchBar:(id)a0 toBeAfterNode:(id)a1;
- (id)positionForInsertingItemWithIdentifier:(id)a0 toBeAfterNode:(id)a1;
- (id)positionForInsertingItemWithPredicate:(id /* block */)a0 toBeAfterNode:(id)a1;
- (id)positionForMovingNode:(id)a0 toBeAfterNode:(id)a1;
- (id)treeByInsertingItem:(id)a0 toBeAfterNode:(id)a1;
- (id)treeByRemovingItemIdentifier:(id)a0;
- (id)treeByRemovingNode:(id)a0;
- (id)treeByReplacingNode:(id)a0 withNode:(id)a1;
- (id)treeByReplacingNode:(id)a0 withNodes:(id)a1;

@end
