@class NSIndexPath;

@interface AMPCollectionView : NSCollectionView

@property (retain, nonatomic) NSIndexPath *mouseDownTargetPath;
@property (nonatomic) BOOL processingMouseUp;

- (void).cxx_destruct;
- (void)moveUp:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (id)pathToFirstItem;
- (id)pathToLastItem;
- (void)setSelectionIfValidTo:(id)a0;

@end
