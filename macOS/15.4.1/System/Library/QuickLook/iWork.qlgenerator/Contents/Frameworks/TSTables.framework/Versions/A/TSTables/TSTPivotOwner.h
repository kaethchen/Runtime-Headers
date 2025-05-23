@class TSTGroupBySet, NSString, TSCECellTractRef, TSCECalculationEngine, TSTGroupingColumnList, TSTFormula, TSTFormulaStore, TSTColumnAggregateList, TSTTableModel, TSTPivotGroupingColumnOptionsMap;

@interface TSTPivotOwner : TSPObject <TSCEFormulaOwning, TSCETableNameChangeProtocol> {
    TSCECalculationEngine *_calcEngine;
    TSTPivotGroupingColumnOptionsMap *_groupingColumnOptionsMap;
    struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } _sortedColumnUids;
    struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } _sortedRowUids;
    BOOL _resetHeaderLabelsAfterSort;
    BOOL _invalidateAfterAsyncSort;
    BOOL _autoImplicitSort;
    BOOL _isHidingGrandTotalColumns;
    BOOL _isHidingGrandTotalRows;
}

@property (readonly, nonatomic) TSTGroupingColumnList *columnGroupings;
@property (readonly, nonatomic) TSTGroupingColumnList *rowGroupings;
@property (readonly, nonatomic) TSTColumnAggregateList *aggregates;
@property (readonly, nonatomic) long long flatteningDimension;
@property (readonly, nonatomic) TSTGroupBySet *groupBySet;
@property (readonly, nonatomic) BOOL isEmptyPivot;
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) BOOL hasHeaderColumnForAggregateNames;
@property (readonly, nonatomic) BOOL hasHeaderRowForAggregateNames;
@property (readonly, nonatomic) TSTPivotGroupingColumnOptionsMap *groupingColumnOptionsMapCopy;
@property (readonly, nonatomic) TSTFormulaStore *formulaStore;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } ownerUID;
@property (readonly, nonatomic) struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } pivotRowUIDs;
@property (readonly, nonatomic) struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } pivotColumnUIDs;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } pivotSourceTableUID;
@property (retain, nonatomic) NSString *pivotSourceTableName;
@property (nonatomic) double pivotDataRefreshTimestamp;
@property (retain, nonatomic) TSCECellTractRef *pivotSourceBodyTract;
@property (retain, nonatomic) TSCECellTractRef *pivotSourceHeaderTract;
@property (readonly, nonatomic) TSTFormula *pivotSourceBodyReferenceEmbeddedInFormula;
@property (nonatomic) struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x0; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x1; } pivotSourceBodyUidTract;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } pivotDataRefreshUID;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } pivotRowColumnRuleChangeUID;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } pivotAggregateRuleChangeUID;
@property (nonatomic) BOOL shouldSkipNextAsyncSort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enclosingGroupNameForGroupCellValue:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)evaluationMode;
- (id)initWithTableModel:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (struct TSCERecalculationState { unsigned char x0; })evaluateFormulaAt:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (void)invalidateForCalcEngine:(id)a0;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (void)writeResultsForCalcEngine:(id)a0;
- (void)documentLocaleDidChange;
- (void)clearAllPivotHiddenAndFiltered:(BOOL)a0;
- (void)didRemoveTableName:(id)a0 forTableUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (int)linkToCalcEngine:(id)a0 forTableModel:(id)a1;
- (void)rewriteForPaste;
- (void)collapseExpandChanged:(id)a0 forState:(id)a1;
- (void)setFilterSet:(id)a0 forPivotDataTable:(id)a1;
- (struct TSUModelColumnIndex { unsigned short x0; })baseColumnIndexForGroupingAtColumnIndex:(unsigned short)a0;
- (struct TSUModelColumnIndex { unsigned short x0; })baseColumnIndexForGroupingAtRowIndex:(unsigned int)a0;
- (unsigned char)columnGroupLevelForHeaderRow:(struct TSUViewRowIndex { unsigned int x0; })a0;
- (void)didAddTableName:(id)a0 forTableUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (void)didChangeTableName:(id)a0 fromTableName:(id)a1 forTableUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a2;
- (id)enclosingGroupNameForColumnIndex:(unsigned short)a0 level:(unsigned char)a1;
- (id)enclosingGroupNameForRowIndex:(unsigned int)a0 level:(unsigned char)a1;
- (id)filterSetForPivotDataTable:(id)a0;
- (void)filterSetUpdated;
- (void)filteringChanged:(id)a0 forDimension:(long long)a1;
- (BOOL)groupingColumnUidExists:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (void)handlePivotSorting:(BOOL)a0;
- (id)hiddenStatesForPivotDataTable:(id)a0;
- (id)indexesForLeadingColumns;
- (id)indexesForLeadingColumnsAtGroupLevel:(unsigned char)a0;
- (id)indexesForLeadingRows;
- (id)indexesForLeadingRowsAtGroupLevel:(unsigned char)a0;
- (id)indexesForLeadingSummaryColumnsAtGroupLevel:(unsigned char)a0;
- (id)indexesForLeadingSummaryRowsAtGroupLevel:(unsigned char)a0;
- (BOOL)isHidingGrandTotalColumns;
- (BOOL)isHidingGrandTotalRows;
- (id)lowestCategoryLevelAsLeadingColumnGroupName:(unsigned short)a0;
- (id)lowestCategoryLevelAsLeadingRowGroupName:(unsigned int)a0;
- (BOOL)p_commitSort;
- (BOOL)p_commitSortAsync;
- (void)p_ensureHiddenStatesExistsWithPivotDataTable:(id)a0;
- (id)p_formulaForCellCoord:(struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a0 runningTotalContext:(id)a1;
- (id)p_referenceNodeFromTractRef:(id)a0;
- (void)p_resetAllHiddenTotals;
- (void)p_resetHiddenGrandTotals;
- (void)p_resetHiddenTotalsForGroupingColumnUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 hideTotals:(BOOL)a1;
- (void)p_resetSortingStructures;
- (void)p_resetSummaryFormulasForRunningTotalsOnly:(BOOL)a0 preservingStyles:(BOOL)a1;
- (void)p_setEmptyPivotTableLabels;
- (void)p_setPivotHeaderCellsResettingPivotHidden:(BOOL)a0 preservingStyles:(BOOL)a1;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })p_sortColumnsInMode:(unsigned long long)a0 sortDirection:(int)a1 rowIndex:(unsigned int)a2 level:(unsigned char)a3 aggregateIndex:(unsigned long long)a4 resetLabels:(BOOL *)a5;
- (void)p_sortFullTable:(unsigned long long)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })p_sortRowsInMode:(unsigned long long)a0 sortDirection:(int)a1 columnIndex:(unsigned int)a2 level:(unsigned char)a3 aggregateIndex:(unsigned long long)a4 resetLabels:(BOOL *)a5;
- (id)pivotOptionsForColumnGroupsAtLevel:(unsigned char)a0;
- (id)pivotOptionsForGroupingColumn:(id)a0;
- (id)pivotOptionsForGroupingColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)pivotOptionsForRowGroupsAtLevel:(unsigned char)a0;
- (id)pivotSourceRangeName;
- (id)pivotSourceRangeNameWithTractRef:(id)a0;
- (int)registerWithCalcEngine:(id)a0 forTableModel:(id)a1 baseOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)remapTableUIDsInFormulasWithMap:(const void *)a0 calcEngine:(id)a1;
- (BOOL)requiresTrailingAlignment:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (BOOL)requiresUnwrapping:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)resetBaseOwnerUID;
- (void)resetCellsForNewPivotOrder;
- (void)resetCellsForNewPivotRules;
- (unsigned char)rowGroupLevelForHeaderColumn:(struct TSUViewColumnIndex { unsigned short x0; })a0;
- (void)setHidingGrandTotalColumns:(BOOL)a0;
- (void)setHidingGrandTotalRows:(BOOL)a0;
- (void)setPivotOptions:(id)a0 groupingColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 forSortingOptions:(BOOL)a2 redoSort:(BOOL)a3;
- (void)setTableModelDuringUnarchive:(id)a0;
- (void)setupAfterUnarchiveForPivotTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 pivotDataTable:(id)a1;
- (void)sortColumnsByRowIndex:(unsigned int)a0 level:(unsigned char)a1 aggregateIndex:(unsigned long long)a2 sortDirection:(int)a3;
- (void)sortRowsByColumnIndex:(unsigned int)a0 level:(unsigned char)a1 aggregateIndex:(unsigned long long)a2 sortDirection:(int)a3;
- (void)unregisterFromCalcEngine;
- (void)upgradeSourceTractsForAbsoluteRefs;
- (void)upgradeSourceTractsForHostCellChange;

@end
