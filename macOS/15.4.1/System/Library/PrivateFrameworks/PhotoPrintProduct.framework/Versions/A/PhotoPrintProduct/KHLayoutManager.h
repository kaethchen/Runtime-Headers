@class NSMapTable, NSArray, NSMutableSet, NSMutableArray;

@interface KHLayoutManager : NSObject {
    long long _numRows;
    long long _numColumns;
    NSArray *_rows;
    NSArray *_columns;
}

@property (retain, nonatomic) NSMapTable *layoutItemToObjMapTable;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (retain, nonatomic) NSMutableArray *gridCells;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } minimumItemSize;
@property (nonatomic, getter=isFillMode) BOOL fillMode;
@property (retain, nonatomic) NSMutableSet *managedViews;

- (void).cxx_destruct;
- (void)addLayoutItem:(id)a0 forObject:(id)a1;
- (id)availableLayoutRectsForContentTypes:(unsigned long long)a0;
- (void)clearTargetFrame;
- (void)commitEditingLayoutItem:(id)a0 completion:(id /* block */)a1;
- (id)gridCellForRow:(long long)a0 column:(long long)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 rows:(id)a1 columns:(id)a2;
- (void)initializeRectsWithRows:(id)a0 columns:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largestAvailableRectInLayoutRects:(id)a0;
- (id)layoutItemForObject:(id)a0;
- (id)layoutRectsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentTypes:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nextAvailableRect;
- (void)removeLayoutItemForObject:(id)a0;
- (void)setTargetFrameForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)setTargetRectForLayoutItem:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRectEnclosingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 touchPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRectForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionLayoutRects:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionRects:(id)a0;

@end
