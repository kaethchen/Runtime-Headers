@class TSCECategoryRef, TSTUIDRectRef;

@interface TSCECombinedReferenceFormulaNode : TSCEFormulaNode

@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } tableUID;
@property (retain, nonatomic) TSTUIDRectRef *uidRectRef;
@property (retain, nonatomic) TSCECategoryRef *categoryRef;
@property (readonly) struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } baseTopLeftCoord;
@property (readonly) struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } baseBottomRightCoord;
@property (readonly) struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } baseBoundingBox;
@property (readonly, nonatomic) unsigned char basePreserveFlags;
@property (readonly, nonatomic) unsigned char viewPreserveFlags;
@property (readonly, nonatomic) BOOL spansAllColumns;
@property (readonly, nonatomic) BOOL spansAllRows;
@property (readonly, nonatomic) BOOL isSingleColumnSpanningReference;
@property (readonly, nonatomic) BOOL isSingleRowSpanningReference;
@property (readonly, nonatomic) BOOL isCategoryRef;
@property (readonly, nonatomic) BOOL isCategorySummaryRef;
@property (readonly, nonatomic) BOOL isRangeExpression;
@property (nonatomic) struct TSCECellRef { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } coordinate; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; } hostCellRef;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithUidRectRef:(id)a0 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;
- (void)appendToNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 forCoord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 preserveFlags:(unsigned char)a2 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a3 calcEngine:(id)a4;
- (void)appendToNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1 symbolTable:(void *)a2 calcEngine:(id)a3;
- (id)convertCategoryRefToRelativeForHostCell:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0 calcEngine:(id)a1;
- (id)initWithCategoryRef:(id)a0 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;
- (id)initWithReferenceStart:(id)a0 referenceEnd:(id)a1 calcEngine:(id)a2;

@end
