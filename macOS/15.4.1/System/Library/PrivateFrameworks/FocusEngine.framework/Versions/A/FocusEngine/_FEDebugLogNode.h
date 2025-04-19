@class NSMutableArray, _FEDebugLogNodeTreeStyle;

@interface _FEDebugLogNode : _FEDebugLogMessage {
    NSMutableArray *_childMessages;
}

@property (retain, nonatomic) _FEDebugLogNodeTreeStyle *treeStyle;
@property (readonly, nonatomic) BOOL hasMessages;

+ (id)rootNode;

- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)addMessage:(id)a0;
- (BOOL)_isNode;
- (void)__genericAppendChildDescription:(id)a0 withPrefix:(id)a1 inheritedTreeStyle:(id)a2 recursionSelector:(SEL)a3 appendHandler:(id /* block */)a4;
- (void)_appendChildDescription:(id)a0 withPrefix:(id)a1 inheritedTreeStyle:(id)a2;

@end
