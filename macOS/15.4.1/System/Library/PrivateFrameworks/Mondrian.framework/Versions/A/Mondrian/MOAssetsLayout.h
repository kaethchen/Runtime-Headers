@class NSSet;

@interface MOAssetsLayout : MOPhotosMomentsLayout

@property (retain, nonatomic) NSSet *hiddenIndexPaths;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (long long)dropPositionForPoint:(struct CGPoint { double x0; double x1; })a0 withIndexPaths:(id)a1 movedToIndexPath:(id)a2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withIndexPaths:(id)a1 movedToIndexPath:(id)a2 atPoint:(struct CGPoint { double x0; double x1; })a3;
- (id)proposedDropIndexPathForDraggingPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)_dropPositionForPoint:(struct CGPoint { double x0; double x1; })a0 indexPath:(id)a1 allowedPositions:(long long)a2;
- (id)_layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 includingIndexPaths:(id)a1;

@end
