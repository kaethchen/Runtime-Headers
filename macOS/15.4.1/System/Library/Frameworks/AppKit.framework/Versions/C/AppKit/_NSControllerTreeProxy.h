@interface _NSControllerTreeProxy : NSTreeNode <_NSBindingTree> {
    id _controller;
}

- (unsigned long long)count;
- (id)indexPath;
- (id)parentNode;
- (void)_invokeSelector:(SEL)a0 withArguments:(id)a1 onKeyPath:(id)a2 ofObjectAtIndexPath:(id)a3;
- (void)_setValue:(id)a0 forKeyPath:(id)a1 ofObjectAtIndexPath:(id)a2;
- (BOOL)_validateValue:(id *)a0 forKeyPath:(id)a1 ofObjectAtIndexPath:(id)a2 error:(id *)a3;
- (id)_valueForKeyPath:(id)a0 ofObjectAtIndexPath:(id)a1;
- (id)childNodes;
- (unsigned long long)countForIndexPath:(id)a0;
- (unsigned long long)countOfChildNodes;
- (id)descendantNodeAtIndexPath:(id)a0;
- (id)initWithController:(id)a0;
- (BOOL)isExpandableAtArrangedObjectIndexPath:(id)a0;
- (BOOL)isLeaf;
- (id)mutableChildNodes;
- (id)nodeAtIndexPath:(id)a0;
- (id)objectAtIndexPath:(id)a0;
- (id)objectInChildNodesAtIndex:(unsigned long long)a0;
- (id)representedObject;
- (void)sortWithSortDescriptors:(id)a0 recursively:(BOOL)a1;

@end
