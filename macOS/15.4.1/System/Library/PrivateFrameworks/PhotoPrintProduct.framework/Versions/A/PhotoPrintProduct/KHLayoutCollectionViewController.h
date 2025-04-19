@class KHLayoutCollectionDataSource, NSString, NSOperationQueue, NSMutableArray, UXCollectionViewFlowLayout;

@interface KHLayoutCollectionViewController : UXCollectionViewController <KHLayoutCollectionDataSourceDelegate>

@property (readonly, nonatomic) NSOperationQueue *backfillQueue;
@property (retain, nonatomic) NSMutableArray *collectionChanges;
@property (retain, nonatomic) KHLayoutCollectionDataSource *collectionDataSource;
@property (readonly, nonatomic) UXCollectionViewFlowLayout *flowLayout;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } baseItemSize;
@property (readonly, nonatomic) double baseLineSpacing;
@property (readonly, nonatomic) double baseInteritemSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)flowLayoutClass;

- (void)dealloc;
- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)collectionViewDidEndScrolling:(id)a0;
- (void)_layoutCollectionViewDidEndScrolling;
- (void)_performItemChange:(id)a0;
- (void)collectionDataSource:(id)a0 didChangeLayout:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)collectionDataSource:(id)a0 didChangeSection:(id)a1 atIndex:(unsigned long long)a2 forChangeType:(unsigned long long)a3;
- (void)collectionDataSource:(id)a0 didFinishPreviewForProject:(id)a1;
- (void)collectionDataSourceDidChangeContent:(id)a0;
- (void)collectionDataSourceDidChangeMetadata:(id)a0;
- (void)collectionDataSourceDidFinishContentGeneration:(id)a0;
- (void)collectionDataSourceDidReplaceContent:(id)a0;
- (void)collectionDataSourceWillChangeContent:(id)a0;
- (void)configureCell:(id)a0 forLayout:(id)a1;
- (id)initWithCollectionDataSource:(id)a0;
- (void)scrollToLastItemAnimated:(BOOL)a0;
- (id)visibleLayouts;

@end
