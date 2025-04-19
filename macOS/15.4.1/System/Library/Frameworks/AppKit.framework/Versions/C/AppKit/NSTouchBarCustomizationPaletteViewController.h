@class NSArray, NSString, NSCollectionView;
@protocol NSTouchBarCustomizationPaletteViewControllerDelegate;

@interface NSTouchBarCustomizationPaletteViewController : NSViewController <NSTouchBarCustomizationPaletteLayoutDelegate, NSCollectionViewDataSource> {
    NSArray *_touchBars;
    NSArray *_visiblePaletteBarItems;
    NSArray *_barPresets;
    NSCollectionView *_paletteCollectionView;
    BOOL _showNonCustomizableItems;
}

@property (copy) NSArray *touchBars;
@property struct CGSize { double width; double height; } presetSize;
@property double presetScale;
@property Class presetRepresentedObjectClass;
@property double visualCenterXOffset;
@property BOOL showNonCustomizableItems;
@property (weak) id<NSTouchBarCustomizationPaletteViewControllerDelegate> delegate;
@property double scaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_discardCachedVisiblePaletteBarItems;
- (BOOL)_viewControllerSupports10_10Features;
- (id)_visibleBarPresets;
- (id)_visiblePaletteBarItems;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (id)collectionView:(id)a0 draggingImageForItemsAtIndexPaths:(id)a1 withEvent:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (void)collectionView:(id)a0 draggingSession:(id)a1 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a2 forItemsAtIndexPaths:(id)a3;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 maxSizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 minSizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 writeItemsAtIndexPaths:(id)a1 toPasteboard:(id)a2;
- (id)dragImageForItem:(id)a0;
- (id)itemTree;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;

@end
