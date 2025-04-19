@class TSCEFormulaNodeTree, TSCECalculationEngine;

@interface TSCEFormulaNodeIterator : NSObject {
    TSCEFormulaNodeTree *_formula;
    struct vector<TSCEReplacedFormulaNodePair, std::allocator<TSCEReplacedFormulaNodePair>> { struct TSCEReplacedFormulaNodePair *__begin_; struct TSCEReplacedFormulaNodePair *__end_; struct __compressed_pair<TSCEReplacedFormulaNodePair *, std::allocator<TSCEReplacedFormulaNodePair>> { struct TSCEReplacedFormulaNodePair *__value_; } __end_cap_; } _replacedNodes;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } containingCell;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } containingTableUID;
@property (nonatomic) BOOL aborted;
@property (readonly, nonatomic) struct TSCEFormulaRewriteContext { id x0; id x1; struct TSCEFormulaRewriteContextRecord { struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSUColumnRowOffset { int x0; int x1; } x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x2; } *rewriteContext;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)colonTractNode:(id)a0;
- (void)whitespaceNode:(id)a0;
- (void)abortRewrite;
- (void)anyReferenceNode:(id)a0;
- (void)arrayNode:(id)a0;
- (void)binaryInfixOperatorNode:(id)a0;
- (void)booleanNode:(id)a0;
- (void)categoryRefNode:(id)a0;
- (void)colonNode:(id)a0;
- (void)combinedReferenceNode:(id)a0;
- (void)dateNode:(id)a0;
- (void)depthFirstIteration;
- (void)durationNode:(id)a0;
- (void)emptyArgumentNode:(id)a0;
- (void)endScopeNode:(id)a0;
- (id)findReplacementNode:(id)a0;
- (void)functionNode:(id)a0;
- (id)initWithFormulaNodeTree:(id)a0 rewriteContext:(struct TSCEFormulaRewriteContext { id x0; id x1; struct TSCEFormulaRewriteContextRecord { struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSUColumnRowOffset { int x0; int x1; } x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x2; } *)a1;
- (void)intersectionOperatorNode:(id)a0 isPostfix:(BOOL)a1;
- (void)lambdaNode:(id)a0;
- (void)letBindNode:(id)a0;
- (void)linkedRefNode:(id)a0;
- (void)listNode:(id)a0;
- (void)numberNode:(id)a0;
- (void)p_visitChildrenAndNodePostOrder:(id)a0;
- (void)referenceErrorNode:(id)a0;
- (void)referenceErrorWithUidsNode:(id)a0;
- (void)replaceNode:(id)a0 withNode:(id)a1;
- (void)stringNode:(id)a0;
- (void)tokenNode:(id)a0;
- (void)topDownIteration;
- (void)uidReferenceNode:(id)a0;
- (void)unaryOperatorNode:(id)a0 isPostfix:(BOOL)a1;
- (void)unboundIdentNode:(id)a0;
- (void)unknownFunctionNode:(id)a0;
- (void)variableNode:(id)a0;
- (void)viewTractRefNode:(id)a0;
- (void)visitNode:(id)a0;

@end
