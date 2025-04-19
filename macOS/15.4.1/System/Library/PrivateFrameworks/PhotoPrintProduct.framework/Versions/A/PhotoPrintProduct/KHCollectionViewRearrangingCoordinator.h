@class UXCollectionViewLayout, NSString, UXCollectionView, KHCollectionViewLayoutProxy;

@interface KHCollectionViewRearrangingCoordinator : NSObject <KHCollectionViewLayoutProxyDelegate, NSDraggingSource, NSDraggingDestination> {
    struct { unsigned char delegateImplementsTargetIndexPathForMoveFromItemAtIndexPathToProposedIndexPath : 1; } _delegateFlags;
}

@property (readonly, nonatomic) KHCollectionViewLayoutProxy *layoutProxy;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } initialIndexRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } targetIndexRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } movedIndexRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } exchangedIndexRange;
@property (nonatomic) BOOL shouldExchange;
@property (readonly, weak, nonatomic) UXCollectionView *collectionView;
@property (readonly, weak, nonatomic) UXCollectionViewLayout *collectionViewLayout;
@property (nonatomic) BOOL isRearranging;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_indexPathsFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (void).cxx_destruct;
- (id)delegate;
- (void)draggingExited:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithCollectionView:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)updateDraggingItemsForDrag:(id)a0;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)_autoscrollWithWindowLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateRearrangingStateForLocation:(id)a0;
- (void)_beginRearrangingIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_finshRearranging:(BOOL)a0;
- (id)_layoutAttributesForItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_moveItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned long long)a1;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x0; double x1; })a0 inLayoutAttributes:(id)a1;

@end
