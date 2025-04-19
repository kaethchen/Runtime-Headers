@class NSTreeNode;

@interface _NSTreeNodeChildNodesArrayProxy : NSObject {
    NSTreeNode *_treeNode;
}

- (unsigned long long)countOfSubNodes;
- (void)insertObject:(id)a0 inSubNodesAtIndex:(unsigned long long)a1;
- (void)getSubNodes:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithTreeNode:(id)a0;
- (void)insertObjects:(id)a0 inSubNodesAtIndexes:(id)a1;
- (id)objectInSubNodesAtIndex:(unsigned long long)a0;
- (void)removeObjectFromSubNodesAtIndex:(unsigned long long)a0;
- (void)removeSubNodesAtIndexes:(id)a0;
- (id)subNodesAtIndexes:(id)a0;

@end
