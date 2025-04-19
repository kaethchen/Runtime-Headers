@class NSMutableIndexSet;

@interface IKImageBrowserGrid : IKImageBrowserSubsetLayoutManager {
    NSMutableIndexSet *_validTranslationsRows;
    NSMutableIndexSet *_validAdditionalHeightPerRows;
    int _cellsLayoutInfoLength;
    struct { double x0; double x1; int x2; int x3; } *_cellsLayoutInfo;
    int _rowsCount;
    long long _indexOfDropSpacing;
    unsigned long long _nearestCellForDropSpacing;
    BOOL _dropPastHalfwayAcrossCell;
    BOOL _dropSpacingIsVertical;
    unsigned long long _iOSExpendedGroupIndex;
}

@property double headerOffset;
@property double tailOffset;

- (void)dealloc;
- (void)finalize;
- (void)invalidate;
- (void)clear;
- (int)columnCount;
- (struct CGSize { double x0; double x1; })cellSize;
- (int)columnAtIndex:(int)a0;
- (struct CGSize { double x0; double x1; })margin;
- (int)rowAtIndex:(int)a0;
- (int)rowsCount;
- (int)rowAtY:(double)a0;
- (double)yAtRow:(int)a0;
- (struct { double x0; double x1; })cellBoundingBoxPositionAtIndex:(long long)a0;
- (id)_cellIndexesInRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (int)_rowAtY:(double)a0;
- (int)additionalHeightAtRow:(int)a0;
- (struct CGSize { double x0; double x1; })adjustedCellMargin;
- (struct CGSize { double x0; double x1; })adjustedMargin;
- (BOOL)automaticallyMinimizeRowMargin;
- (double)boundingBoxYAtRow:(int)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })cellFrameAtIndex:(unsigned long long)a0;
- (int)cellIndexAtColumn:(int)a0 andRow:(int)a1;
- (id)cellIndexesAtLocation:(struct { double x0; double x1; })a0;
- (id)cellIndexesInRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })cellMargin;
- (void)checkAllocCellLayoutInfo;
- (void)collapsedStateChanged:(id)a0;
- (int)columnAtX:(double)a0;
- (struct { double x0; double x1; })computeContentSize;
- (void)computeRowsCount;
- (id)initWithParameters:(struct __IKImageBrowserLayoutParameter { id x0; struct CGSize { double x0; double x1; } x1; unsigned int x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; int x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; int x11; float x12; struct CGSize { double x0; double x1; } x13; struct CGSize { double x0; double x1; } x14; } *)a0 parent:(id)a1;
- (void)invalidateCacheAtIndexes:(id)a0;
- (BOOL)isGridBased;
- (long long)nearestCellOfPosition:(struct { double x0; double x1; })a0;
- (double)spaceOutSizeVertical:(BOOL)a0;
- (void)spaceOutSubmanagerCellsForDropAtIndex:(unsigned long long)a0 nearestCell:(unsigned long long)a1 isMoreThanHalfwayAcrossCell:(BOOL)a2;
- (int)totalAdditionalHeightAtRow:(int)a0;
- (double)translationRatioAtRow:(int)a0;
- (void)validateAdditionalHeightToRow:(int)a0;
- (void)validateRowsTranslationsToRowIndex:(int)a0;
- (double)xAtColumn:(int)a0;

@end
