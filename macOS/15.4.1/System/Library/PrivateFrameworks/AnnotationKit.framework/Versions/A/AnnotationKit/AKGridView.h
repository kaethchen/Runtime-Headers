@class AKGridViewController;

@interface AKGridView : NSCollectionView

@property (weak) AKGridViewController *gridViewController;
@property BOOL itemsAllowDrag;
@property BOOL itemsShowSelection;

- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)newItemForRepresentedObject:(id)a0;
- (void)selectAll:(id)a0;
- (void)updateTrackingAreas;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)removeAllTrackingAreas;
- (struct CGPoint { double x0; double x1; })mousePositionInView;

@end
