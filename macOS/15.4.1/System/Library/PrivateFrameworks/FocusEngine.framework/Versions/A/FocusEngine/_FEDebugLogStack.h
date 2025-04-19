@class _FEDebugLogNode, NSMutableArray;

@interface _FEDebugLogStack : NSObject {
    NSMutableArray *_stack;
}

@property (readonly, nonatomic) _FEDebugLogNode *rootNode;

- (id)init;
- (void).cxx_destruct;
- (void)addMessage:(id)a0;
- (id)popNode;
- (id)_topNode;
- (void)performWithPushedNode:(id)a0 block:(id /* block */)a1;
- (void)pushNode:(id)a0;

@end
