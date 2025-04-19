@class NSArray, IKImageBrowserLayoutManager, NSMutableIndexSet;

@interface IKImageBrowserSubsetLayoutManager : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _frame;
    struct { double width; double height; } _contentSize;
    struct __IKImageBrowserLayoutParameter { id x0; struct CGSize { double x0; double x1; } x1; unsigned int x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; int x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; int x11; float x12; struct CGSize { double x0; double x1; } x13; struct CGSize { double x0; double x1; } x14; } *_layoutParameters;
    NSArray *_groups;
    NSMutableIndexSet *_ghostIndexes;
    int _collapsedCellCount;
    id _parentGroup;
    int _headerHeight;
    IKImageBrowserLayoutManager *_parent;
}

@property BOOL visuallyCollapsed;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)groups;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setGroups:(id)a0;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setContentSize:(struct { double x0; double x1; })a0;
- (id)cellAtIndex:(int)a0;
- (int)columnAtIndex:(int)a0;
- (int)headerHeight;
- (void)setHeaderHeight:(int)a0;
- (BOOL)updateLayout;
- (void)setParentGroup:(id)a0;
- (void)_updateFrameSize;
- (int)additionalHeightAtRow:(int)a0;
- (void)adjustHorizontalOffsetIfNeeded;
- (struct CGSize { double x0; double x1; })adjustedMargin;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })cellFrameAtIndex:(unsigned long long)a0;
- (int)cellIndexAtColumn:(int)a0 andRow:(int)a1;
- (id)cellIndexesAtLocation:(struct { double x0; double x1; })a0;
- (id)cellIndexesInRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (int)clientIndexToGridIndex:(int)a0;
- (void)collapsedStateChanged:(id)a0;
- (struct { double x0; double x1; })computeContentSize;
- (void)computeGroupIndexTransformations;
- (void)computeRowsCount;
- (struct { double x0; double x1; })contentOrigin;
- (void)endGesture:(id)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })gridFrame;
- (int)gridIndexToClientIndex:(int)a0;
- (id)gridIndexesToClientIndexes:(id)a0;
- (struct { double x0; double x1; })gridSize;
- (long long)groupIndexForClientIndex:(int)a0;
- (long long)groupIndexForGridIndex:(int)a0;
- (double)headerOffset;
- (int)indexOfHeaderMasterCell;
- (unsigned long long)indexToRenderForNonOrderedIndex:(unsigned long long)a0;
- (id)initWithParameters:(struct __IKImageBrowserLayoutParameter { id x0; struct CGSize { double x0; double x1; } x1; unsigned int x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; int x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; int x11; float x12; struct CGSize { double x0; double x1; } x13; struct CGSize { double x0; double x1; } x14; } *)a0 parent:(id)a1;
- (void)invalidateCacheAtIndexes:(id)a0;
- (BOOL)isGridBased;
- (long long)nearestCellOfPosition:(struct { double x0; double x1; })a0;
- (id)parentGroup;
- (id)parentLayoutManager;
- (void)parentWillDie;
- (void)prepareRenderingOrderingWithIndexes:(id)a0;
- (void)resetHorizontalOffset;
- (int)screenColumnAtIndex:(unsigned long long)a0;
- (void)scrollWheel:(id)a0 gesture:(BOOL)a1;
- (void)setGridOrigin:(struct { double x0; double x1; })a0;
- (void)spaceOutSubmanagerCellsForDropAtIndex:(unsigned long long)a0 nearestCell:(unsigned long long)a1 isMoreThanHalfwayAcrossCell:(BOOL)a2;
- (double)tailOffset;
- (struct CGPoint { double x0; double x1; })topLeftItemPosition;
- (double)zAtIndex:(unsigned long long)a0;
- (void)zSortWithZValues:(double *)a0;

@end
