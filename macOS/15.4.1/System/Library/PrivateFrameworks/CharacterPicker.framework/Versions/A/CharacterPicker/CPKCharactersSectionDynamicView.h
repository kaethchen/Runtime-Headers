@class CPKCollectionView, NSString, NSScrollView, CPKDraggableView, NSCache;

@interface CPKCharactersSectionDynamicView : CPKCharactersSectionView <NSCollectionViewDataSource, NSCollectionViewDelegate, CPKMouseEventDelegate>

@property (retain, nonatomic) CPKCollectionView *collectionView;
@property (copy, nonatomic) NSString *currentlySelectedIdentifier;
@property (retain, nonatomic) CPKDraggableView *currentlySelectedView;
@property (retain, nonatomic) NSScrollView *staticScrollView;
@property (retain, nonatomic) NSCache *stickerViewCache;
@property (readonly, nonatomic) double initialPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setContentType:(unsigned long long)a0;
- (unsigned long long)numberOfItems;
- (void)collectionView:(id)a0 willDisplayItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 acceptDrop:(id)a1 indexPath:(id)a2 dropOperation:(long long)a3;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (void)collectionView:(id)a0 draggingSession:(id)a1 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a2 forItemsAtIndexPaths:(id)a3;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndexPath:(id)a1;
- (unsigned long long)collectionView:(id)a0 validateDrop:(id)a1 proposedIndexPath:(id *)a2 dropOperation:(long long *)a3;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelectedIndex:(long long)a0;
- (BOOL)isRTL;
- (id)identifierAtIndex:(unsigned long long)a0;
- (double)horizontalPadding;
- (id)emojiViewForEntity:(id)a0 atIndexPath:(id)a1;
- (void)mouseUp:(id)a0 sender:(id)a1;
- (id)cellFromEvent:(id)a0;
- (void)confirmCurrentSelection;
- (id)entityAtIndex:(unsigned long long)a0;
- (id)firstAXElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectAtIndex:(long long)a0 withDrawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForSkinToneSelectorAtIndex:(unsigned long long)a0;
- (void)highlightIndex:(long long)a0 byMouse:(BOOL)a1;
- (BOOL)index:(long long *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)insertSelectedItem:(id)a0;
- (void)insertSelectedItem:(id)a0 byDrag:(BOOL)a1;
- (void)mouseDown:(id)a0 sender:(id)a1;
- (void)playErrorSound;
- (void)setVisiblySelected:(BOOL)a0 forIndex:(unsigned long long)a1;
- (id)stickerViewForEntity:(id)a0 atIndexPath:(id)a1 shouldCreate:(BOOL)a2;
- (BOOL)viewIsShowingPlaceholderItem:(id)a0;

@end
