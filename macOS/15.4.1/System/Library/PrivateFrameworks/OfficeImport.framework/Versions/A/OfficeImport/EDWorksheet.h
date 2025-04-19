@class EDPane, EDWarnings, EDRowBlocks, NSMutableDictionary, EDMergedCellCollection, EDReference, EDCollection, EDColumnInfoCollection;

@interface EDWorksheet : EDSheet {
    EDRowBlocks *mRowBlocks;
    EDColumnInfoCollection *mColumnInfos;
    EDCollection *mConditionalFormattings;
    EDCollection *mHyperlinks;
    EDCollection *mTables;
    EDCollection *mPivotTables;
    EDMergedCellCollection *mMergedCells;
    EDPane *mPane;
    EDWarnings *mWorksheetWarnings;
    double mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    unsigned long long mMaxRowOutlineLevel;
    unsigned long long mMaxColumnOutlineLevel;
    BOOL mFitToPage;
    EDReference *mMaxCellReferencedInFormulas;
    NSMutableDictionary *mContentOutOfLassoBoundsCache;
    NSMutableDictionary *mMergedRows;
    NSMutableDictionary *mMergedCols;
    EDReference *mImplicitCellArea;
}

- (id)description;
- (void).cxx_destruct;
- (void)teardown;
- (double)defaultColumnWidth;
- (void)setDefaultColumnWidth:(double)a0;
- (void)setup;
- (id)pane;
- (void)setPane:(id)a0;
- (id)columnInfos;
- (id)conditionalFormattings;
- (id)contentOutOfLassoBoundsCache;
- (unsigned short)defaultRowHeight;
- (BOOL)fitToPage;
- (BOOL)hasMergedCells;
- (BOOL)hasMergedCol;
- (BOOL)hasMergedRow;
- (id)hyperlinks;
- (id)implicitCellArea;
- (BOOL)isColMerged:(unsigned int)a0;
- (BOOL)isRowMerged:(unsigned int)a0;
- (id)maxCellReferencedInFormulas;
- (unsigned long long)maxColumnOutlineLevel;
- (unsigned long long)maxRowOutlineLevel;
- (id)mergedCells;
- (id)mergedColRef:(unsigned int)a0;
- (id)mergedRowRef:(unsigned int)a0;
- (id)pivotTables;
- (void)reduceMemoryIfPossible;
- (id)rowBlocks;
- (void)setDefaultRowHeight:(unsigned short)a0;
- (void)setFitToPage:(BOOL)a0;
- (void)setImplicitCellArea:(id)a0;
- (void)setMaxColumnOutlineLevel:(unsigned long long)a0;
- (void)setMaxRowOutlineLevel:(unsigned long long)a0;
- (void)setMergedColsRef:(id)a0 from:(unsigned int)a1 to:(unsigned int)a2;
- (void)setMergedRowsRef:(id)a0 from:(unsigned int)a1 to:(unsigned int)a2;
- (id)tables;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)a0;
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned long long)a0;
- (id)worksheetWarnings;

@end
