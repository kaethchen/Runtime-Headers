@class _EDDisplayNameGroupingTrieNode;

@interface _EDDisplayNameGroupingTrie : NSObject

@property (retain, nonatomic) _EDDisplayNameGroupingTrieNode *root;

- (id)init;
- (void).cxx_destruct;
- (id)findGroups;
- (id)_addressesInGroupWithRoot:(id)a0;
- (id)_findTopLevelGroupsForStart:(id)a0;
- (void)insertDisplayName:(id)a0 addressID:(id)a1;

@end
