@class TSCEErrorsAndWarnings, TSCEWholeOwnerDependencies, TSCERangeDependencies, TSCESpanningDependencies, TSCEUuidReferences, TSCESpillSizes, TSCECellDependencies, TSCEDependencyTracker, TSCEVolatileDependencies;
@protocol TSCECalculationEngineRegistration, TSCEFormulaOwning;

@interface TSCEFormulaOwnerDependencies : TSPObject

@property (readonly, nonatomic) unsigned short formulaOwnerId;
@property (nonatomic) unsigned short ownerIndex;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } formulaOwnerUid;
@property (nonatomic) TSCEDependencyTracker *dependencyTracker;
@property (readonly, nonatomic) TSCECellDependencies *cellDependencies;
@property (readonly, nonatomic) TSCERangeDependencies *rangeDependencies;
@property (readonly, nonatomic) TSCESpanningDependencies *spanningColumnDependencies;
@property (readonly, nonatomic) TSCESpanningDependencies *spanningRowDependencies;
@property (readonly, nonatomic) TSCEVolatileDependencies *volatileDependencies;
@property (readonly, nonatomic) TSCEWholeOwnerDependencies *wholeOwnerDependencies;
@property (readonly, nonatomic) TSCEErrorsAndWarnings *errors;
@property (readonly, nonatomic) TSCESpillSizes *spillSizes;
@property (readonly, nonatomic) TSCEUuidReferences *uuidReferences;
@property (retain, nonatomic) id<TSCEFormulaOwning> formulaOwner;
@property (retain, nonatomic) id<TSCECalculationEngineRegistration> calcEngineRegistrationObject;
@property (nonatomic) BOOL saveAsEmbiggenedFormat;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } embiggenedCellCoord;
@property (nonatomic) BOOL isRegisteredWithCalcEngine;

- (void)dealloc;
- (void).cxx_destruct;
- (void)willClose;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (BOOL)duringSubOwnerUIDUpgrade;
- (id)initWithContext:(id)a0 dependencyTracker:(id)a1 ownerID:(unsigned short)a2 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a3 owner:(id)a4 ownerIndex:(unsigned short)a5;
- (void)pushRangeAndSpanningDependents:(id)a0 fromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 cellIsInACycle:(BOOL)a2;
- (void)resetOwnerUIDForUpgrade:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 forBaseOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 ownerKind:(unsigned short)a2;
- (void)unpackAfterUnarchive;

@end
