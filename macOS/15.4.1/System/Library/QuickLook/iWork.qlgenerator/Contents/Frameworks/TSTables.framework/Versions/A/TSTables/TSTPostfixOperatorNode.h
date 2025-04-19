@interface TSTPostfixOperatorNode : TSTOperatorNode

- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)addTSTCanvasReferencesToSet:(id)a0 inRangeContext:(unsigned char)a1 withColorHelper:(id)a2 preferringNodesFromStorage:(id)a3 showingSpillRanges:(BOOL)a4 calcEngine:(id)a5 allVisitedNodes:(id)a6;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 symbolTable:(void *)a2;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (void)insertFormulaTextNonRecursive:(id)a0 phase:(unsigned long long)a1 deferredWorkStack:(id)a2;

@end
