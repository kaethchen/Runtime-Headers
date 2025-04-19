@class NSIndexPath, NSString, PDFThumbnailView, NSCollectionView;

@interface PDFIconCollectionView : NSView <NSCollectionViewDelegate, NSCollectionViewDataSource> {
    PDFThumbnailView *_thumbnailView;
    NSCollectionView *_collectionView;
    NSIndexPath *_proposedDropIndexPath;
    BOOL _needsLayout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)collectionView;
- (BOOL)collectionView:(id)a0 acceptDrop:(id)a1 indexPath:(id)a2 dropOperation:(long long)a3;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (unsigned long long)collectionView:(id)a0 validateDrop:(id)a1 proposedIndexPath:(id *)a2 dropOperation:(long long *)a3;
- (BOOL)collectionView:(id)a0 writeItemsAtIndexPaths:(id)a1 toPasteboard:(id)a2;
- (void)setBackgroundColor:(id)a0;
- (void)setLabelFont:(id)a0;
- (void)currentPageChanged:(id)a0;
- (void)documentChanged:(id)a0;
- (void)documentMutated:(id)a0;
- (id)initFromThumbnailView:(id)a0;
- (void)pageChanged:(id)a0;
- (id)selectedPages;
- (void)updateIconsImages;

@end
