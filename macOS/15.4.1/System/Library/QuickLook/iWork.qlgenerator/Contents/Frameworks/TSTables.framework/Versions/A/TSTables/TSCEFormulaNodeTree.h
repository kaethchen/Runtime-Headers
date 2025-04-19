@class TSCECalculationEngine, TSCEFormulaNode;

@interface TSCEFormulaNodeTree : NSObject {
    TSCECalculationEngine *_calcEngine;
    struct TSCECellRef { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } coordinate; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; } _hostCellRef;
}

@property (retain, nonatomic) TSCEFormulaNode *root;
@property (nonatomic) struct TSCEFormulaTranslationFlags { unsigned char _flags; } translationFlags;
@property (readonly) BOOL hasHostCell;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } hostTableUID;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } hostColumnUID;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } hostRowUID;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)convertToFormula:(id *)a0;
- (id)initWithFormula:(id)a0 calcEngine:(id)a1 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a2;
- (id)initWithFormula:(id)a0 options:(unsigned int)a1 partialResults:(id)a2 calcEngine:(id)a3 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a4;
- (id)initWithRootNode:(id)a0 calcEngine:(id)a1 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a2;
- (void)resolveIdentifiers;
- (id)variableUsageError;

@end
