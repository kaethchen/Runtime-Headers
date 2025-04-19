@class KHProjectLayout, NSArray, NSString, UXCollectionView, NSMutableArray;
@protocol KHLayoutPickerDelegate;

@interface KHLayoutPickerController : UXViewController <UXCollectionViewDelegate, UXCollectionViewDataSource, KHTreatmentPickerDelegate> {
    KHProjectLayout *_observedLayout;
    BOOL _needsToSyncSelection;
}

@property (readonly, nonatomic) BOOL leftFacing;
@property (retain) UXCollectionView *collectionView;
@property BOOL ignoreSelectionChange;
@property (retain) NSMutableArray *layoutInfoCache;
@property BOOL useSquareCell;
@property (retain, nonatomic) NSArray *projectLayouts;
@property (weak, nonatomic) NSArray *selectedCollectionItems;
@property id<KHLayoutPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidAppear;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 layout:(id)a1 supplementaryViewDidBeginFloatingAtIndexPath:(id)a2 kind:(id)a3;
- (void)collectionView:(id)a0 layout:(id)a1 supplementaryViewDidEndFloatingAtIndexPath:(id)a2 kind:(id)a3;
- (void)collectionView:(id)a0 sectionIndex:(unsigned long long)a1 willDequeueAccessibilitySection:(id)a2;
- (id)indexPathOfLayout:(id)a0;
- (id)initWithProjectLayouts:(id)a0;
- (id)projectLayoutsToChangeForMaster:(id)a0;
- (void)syncCollectionViewSelection;
- (void)treatmentPicker:(id)a0 didSelectTreatment:(id)a1;
- (void)updateLayoutInfoCache;

@end
