@class NSString, GKNoContentView, NSView, GKCollectionDataSource, NSLayoutConstraint, NSUICollectionView, NSMutableIndexSet;

@interface GKDashboardCollectionViewController : GKLoadingViewController <NSPopoverDelegate, UIAdaptivePresentationControllerDelegate, NSUICollectionViewDataSource, NSUICollectionViewDelegate>

@property (retain, nonatomic) NSUICollectionView *collectionView;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsetsBeforeKeyboard;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } scrollInsetsBeforeKeyboard;
@property (weak, nonatomic) NSLayoutConstraint *keyboardConstraint;
@property (nonatomic) double keyboardConstraintDefaultConstant;
@property (weak, nonatomic) NSView *keyboardAdjustedView;
@property (weak, nonatomic) NSView *collectionContainerView;
@property (readonly, nonatomic) BOOL isLoading;
@property (retain, nonatomic) GKCollectionDataSource *dataSource;
@property (nonatomic) BOOL autoWidthUsesTwoColumnsWhenSpace;
@property (retain, nonatomic) NSMutableIndexSet *sectionsToReload;
@property (retain, nonatomic) GKNoContentView *noContentView;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)hasData;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)loadData;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)viewDidLoad;
- (void)windowDidEndSheet:(id)a0;
- (BOOL)isLoading;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)clearSelection;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didFocusItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnfocusItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldDeselectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)createCollectionViewInsideView:(id)a0;
- (void)setNeedsRefresh;
- (void)setupDataSource;
- (void)clearSelectionForCollectionView:(id)a0;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (void)didEnterLoadingState;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)hideNoContentPlaceholder;
- (id)horizontalCollectionViewLayout;
- (void)removeVisualEffectInView:(id)a0;
- (void)setAutoWidthColumns:(long long)a0;
- (void)setToHorizontalLayout:(BOOL)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)showNoContentPlaceholderForError:(id)a0;
- (id)verticalCollectionViewLayout;

@end
