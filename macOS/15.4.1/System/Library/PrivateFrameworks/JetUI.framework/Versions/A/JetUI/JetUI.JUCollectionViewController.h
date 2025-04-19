@class NSString;

@interface JetUI.JUCollectionViewController : NSViewController <NSCollectionViewDataSource, NSCollectionViewDelegate, JetUI.JUCollectionViewDelegate> {
    void /* unknown type, empty encoding */ scrollViewIfLoaded;
    void /* unknown type, empty encoding */ collectionViewIfLoaded;
    void /* unknown type, empty encoding */ collectionViewLayout;
    void /* unknown type, empty encoding */ clearsSelectionOnViewWillAppear;
}

@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)collectionView:(id)a0 willDisplayItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingSupplementaryView:(id)a1 forElementOfKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (id)collectionView:(id)a0 contextMenuForItemAt:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;

@end
