@class NSString, TSCECalculationEngine;

@interface TSCESpillOwner : NSObject <TSCEFormulaOwning> {
    TSCECalculationEngine *_calcEngine;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } ownerUID;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } baseTableUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })spillChangedPrecedentForTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 spillOrigin:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;

- (void).cxx_destruct;
- (long long)evaluationMode;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })formulaOwnerUID;
- (void)invalidateForCalcEngine:(id)a0;
- (id)linkedResolver;
- (struct TSCERecalculationState { unsigned char x0; })multiEvaluateFormulasAt:(const void *)a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (unsigned short)ownerKind;
- (void)writeResultsForCalcEngine:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1 forBaseTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)initWithBaseTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithBaseTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (int)registerWithCalcEngine:(id)a0;
- (void)setCalcEngine:(id)a0;
- (void)unregisterFromCalcEngine;

@end
