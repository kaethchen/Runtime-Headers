@class NSString, GKGameRecord, UXViewController;

@interface GKGameLayerCollectionDataSource : NSObject <NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout>

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (readonly, nonatomic) NSString *title;
@property (weak, nonatomic) UXViewController *presentationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)itemCount;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (double)cellSpacing;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (void)prepareCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)handleSelectionInCollectionView:(id)a0 forItemAtIndexPath:(id)a1;
- (id)initWithGameRecord:(id)a0;
- (void)setupCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })standardCellSizeForCollectionView:(id)a0;

@end
