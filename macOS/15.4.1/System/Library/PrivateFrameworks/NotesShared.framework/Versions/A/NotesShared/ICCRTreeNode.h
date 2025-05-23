@class NSArray, ICCRWeakReference, ICCRTree;

@interface ICCRTreeNode : ICCRObject

@property (weak, nonatomic) ICCRTree *tree;
@property (weak, nonatomic) ICCRTreeNode *parent;
@property (retain, nonatomic) ICCRWeakReference *parentRef;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSArray *children;

+ (id)CRProperties;

- (void).cxx_destruct;
- (void)removeNode:(id)a0;
- (id)parentReference;
- (id)initWithValue:(id)a0 parent:(id)a1 tree:(id)a2;
- (void)insertNode:(id)a0 atIndex:(unsigned long long)a1;
- (id)insertNodeWithValue:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)isInLoop;
- (BOOL)isLoopNode;
- (void)moveNode:(id)a0 toIndex:(unsigned long long)a1;

@end
