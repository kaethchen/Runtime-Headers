@class NSString, NSTreeController;

@interface NSTreeControllerTreeNode : NSTreeNode {
    NSString *_childrenKeyPath;
    NSString *_leafKeyPath;
    NSString *_countKeyPath;
    NSTreeController *_treeController;
    struct __NSTreeControllerTreeNodeFlags { unsigned char _observingIsSetup : 1; unsigned char _isUpdatingChildNodes : 1; unsigned char _observingRepresentedObjectChildren : 1; unsigned int reserved : 29; } _NSTreeControllerTreeNodeFlags;
}

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setupObserving;
- (id)childrenKeyPath;
- (unsigned long long)countOfSubNodes;
- (void)insertObject:(id)a0 inSubNodesAtIndex:(unsigned long long)a1;
- (void)_configureObservingForChildNodesWithOption:(unsigned long long)a0;
- (void)_configureObservingWithOption:(unsigned long long)a0;
- (void)_detachFromParent;
- (long long)_leafState;
- (void)_removeSubNodesAtIndexes:(id)a0;
- (void)_tearDownObserving;
- (id)countKeyPath;
- (id)initWithRepresentedObject:(id)a0 treeController:(id)a1;
- (BOOL)isLeaf;
- (id)leafKeyPath;
- (void)removeObjectFromSubNodesAtIndex:(unsigned long long)a0;
- (void)updateChildNodesForKeyPath:(id)a0 affectedIndexPaths:(id)a1;
- (void)willAccessChildNodes;

@end
