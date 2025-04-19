@class NSArray, NSView, NSGridRow, NSGridColumn;

@interface NSGridCell : NSObject <NSCoding> {
    NSGridCell *_headOfMergedCell;
    long long _xPlacement;
    long long _yPlacement;
    long long _rowAlignment;
}

@property (class, readonly) NSView *emptyContentView;

@property (retain) NSView *contentView;
@property (readonly, weak) NSGridRow *row;
@property (readonly, weak) NSGridColumn *column;
@property long long xPlacement;
@property long long yPlacement;
@property long long rowAlignment;
@property (copy) NSArray *customPlacementConstraints;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isUnmergedOrHeadOfMergedRegion;
- (long long)_effectiveAlignment;
- (long long)_effectiveXPlacement;
- (long long)_effectiveYPlacement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_findMergeBounds;
- (id)_findMergeTail;
- (id)_headOfMergedCell;
- (BOOL)_isMergeHead;
- (BOOL)_isMerged;
- (id)_optimalContentLayoutRect;
- (void)_removedFromGridView;
- (void)_sanityCheck;
- (void)_verifyConfigurability;
- (id)initWithRow:(id)a0 column:(id)a1;
- (id)layoutRect;
- (void)set_headOfMergedCell:(id)a0;

@end
