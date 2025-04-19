@protocol NSUICollectionViewDelegate;

@interface GKDashboardSelectionDelegatingCollectionViewController : GKDashboardCollectionViewController

@property (weak, nonatomic) id<NSUICollectionViewDelegate> selectionDelegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
