@class NSMutableArray, NSTouchBarItemTreeNode, NSTouchBarItemTreeItemNode;
@protocol NSTouchBarItemTreeParentNode;

@interface _NSTouchBarItemTreeSeenItemIdentifierValue : NSObject

@property (retain) NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode> *parentNode;
@property (retain) NSTouchBarItemTreeItemNode *itemNode;
@property (retain) NSMutableArray *nodeList;
@property long long responderBarLevel;

- (void)dealloc;

@end
