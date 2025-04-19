@class _NSFlowLayoutSection, NSMutableArray;

@interface _NSFlowLayoutRow : NSObject {
    BOOL _isValid;
    int _verticalAlignement;
    int _horizontalAlignement;
}

@property (weak, nonatomic) _NSFlowLayoutSection *section;
@property (nonatomic) struct CGSize { double width; double height; } rowSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rowFrame;
@property (nonatomic) struct CGPoint { double x; double y; } rowOffsetForDropTargetInsertionGap;
@property (nonatomic) long long index;
@property (readonly, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL complete;
@property (nonatomic) BOOL fixedItemSize;
@property (nonatomic) double availableSpace;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)snapshot;
- (void)addItem:(id)a0 atEnd:(BOOL)a1;
- (id)copyFromSection:(id)a0;
- (long long)indexOfNearestItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)insertItem:(id)a0 atIndex:(long long)a1;
- (void)layoutRow;
- (void)removeItemAtIndex:(long long)a0;

@end
