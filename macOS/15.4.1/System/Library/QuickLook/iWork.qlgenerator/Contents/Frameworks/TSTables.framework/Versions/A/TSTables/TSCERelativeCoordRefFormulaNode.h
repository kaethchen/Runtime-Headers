@class TSCEUndoTractList;

@interface TSCERelativeCoordRefFormulaNode : TSCEFormulaNode

@property (nonatomic) struct TSCEASTRefFlags { unsigned char _flags; } refFlags;
@property (readonly, nonatomic) struct TSUPreserveFlags { unsigned char x0; } preserveFlags;
@property (nonatomic) struct TSCERelativeCellCoordinate { int _row; short _column; BOOL _preserveRow; BOOL _preserveColumn; } relativeCellCoord;
@property (readonly, nonatomic) struct TSCECrossTableReference { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } x1; } crossTableRef;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;
@property (retain, nonatomic) TSCEUndoTractList *undoTractList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)appendToNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1 symbolTable:(void *)a2 calcEngine:(id)a3;
- (id)initWithTableUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 refFlags:(const struct TSCEASTRefFlags { unsigned char x0; } *)a1 relativeCellCoord:(const struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } *)a2;
- (id)initWithTableUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 refFlags:(const struct TSCEASTRefFlags { unsigned char x0; } *)a1 relativeCellCoord:(const struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } *)a2 undoTractList:(id)a3;

@end
