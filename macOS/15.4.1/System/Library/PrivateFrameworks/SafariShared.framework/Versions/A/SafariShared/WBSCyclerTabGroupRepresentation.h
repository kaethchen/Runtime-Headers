@class WBSCyclerBookmarkLeafRepresentation;

@interface WBSCyclerTabGroupRepresentation : WBSCyclerItemListRepresentation

@property (readonly, nonatomic) unsigned long long numberOfTabs;
@property (readonly, nonatomic) WBSCyclerBookmarkLeafRepresentation *randomTabDescendant;

@end
