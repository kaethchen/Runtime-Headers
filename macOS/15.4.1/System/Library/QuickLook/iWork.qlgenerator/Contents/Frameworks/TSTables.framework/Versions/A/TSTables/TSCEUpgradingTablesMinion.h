@class NSString, TSCEFormulasToSet, TSCECalculationEngine;

@interface TSCEUpgradingTablesMinion : NSObject <TSCEFormulaReplacing> {
    TSCEFormulasToSet *_formulasToSet;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)flushAllChanges;
- (void)removeAllFormulasFromOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)removeFormulaAt:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)replaceFormulaAt:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 precedents:(id)a2 replaceOptions:(struct TSCEReplaceFormulaOptions { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x6; id x7; })a3;
- (void)resetFormulaAt:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)initWithCalcEngine:(id)a0;
- (void)markCellRefAsDirty:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)markRangeRefAsDirty:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)removeFormulasAt:(const void *)a0;
- (void)replaceFormula:(id)a0 atCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)replaceFormula:(id)a0 atCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 replaceOptions:(struct TSCEReplaceFormulaOptions { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x6; id x7; })a3;

@end
