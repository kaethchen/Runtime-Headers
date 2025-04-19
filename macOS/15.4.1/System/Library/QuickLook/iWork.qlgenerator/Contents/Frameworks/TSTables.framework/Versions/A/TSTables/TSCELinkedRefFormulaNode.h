@interface TSCELinkedRefFormulaNode : TSCEFormulaNode

@property (nonatomic) unsigned char linkTag;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;

- (void)appendToNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1 symbolTable:(void *)a2 calcEngine:(id)a3;
- (id)initWithLinkTable:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithLinkTable:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 linkTag:(unsigned char)a1;

@end
