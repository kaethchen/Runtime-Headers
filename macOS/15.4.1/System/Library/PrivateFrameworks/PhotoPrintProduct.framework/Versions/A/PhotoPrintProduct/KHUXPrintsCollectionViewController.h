@class NSString, KHProjectSubgroup, NSOrderedSet, NSMutableDictionary, NSMenu, KHUXCollectionViewFlowLayout, KHSelectionManager;

@interface KHUXPrintsCollectionViewController : KHLayoutCollectionViewController <KHSelectionObserver, KHLayoutViewDelegate, NSMenuDelegate, NSMenuItemValidation, KHSplitViewControllerDelegate> {
    NSMenu *_actionMenu;
}

@property (readonly, nonatomic) KHUXCollectionViewFlowLayout *printsFlowLayout;
@property (readonly, nonatomic) double itemSpacing;
@property (readonly, nonatomic) double itemBaseLength;
@property (readonly, nonatomic) double itemPosterLength;
@property (readonly, nonatomic) double horizontalContentInset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentItemSize;
@property (readonly, nonatomic) NSMenu *actionMenu;
@property (readonly, nonatomic) KHProjectSubgroup *projectSubgroup;
@property (readonly, nonatomic) NSOrderedSet *selectedLayouts;
@property (retain, nonatomic) NSMutableDictionary *sectionHeaders;
@property (nonatomic) BOOL frameOptionsEnabled;
@property (nonatomic) BOOL masterViewControllerHidden;
@property (readonly, nonatomic) KHSelectionManager *selectionManager;
@property (readonly, nonatomic) NSOrderedSet *actionProjectLayouts;
@property (copy, nonatomic) id /* block */ actionMenuProvider;
@property (copy, nonatomic) id /* block */ deletionHandler;
@property (copy, nonatomic) id /* block */ collectionBorderChangeHandler;
@property (copy, nonatomic) id /* block */ collectionFinishChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)collectionViewClass;
+ (Class)flowLayoutClass;

- (void).cxx_destruct;
- (void)delete:(id)a0;
- (void)deleteBackward:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingSupplementaryView:(id)a1 forElementOfKind:(id)a2 atIndexPath:(id)a3;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)keyDown:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)mouseDown:(id)a0;
- (void)selectAll:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)deselectAllItems;
- (void)collectionView:(id)a0 itemWasRightClickedAtIndexPath:(id)a1 withEvent:(id)a2;
- (void)collectionView:(id)a0 layout:(id)a1 supplementaryViewDidBeginFloatingAtIndexPath:(id)a2 kind:(id)a3;
- (void)collectionView:(id)a0 layout:(id)a1 supplementaryViewDidEndFloatingAtIndexPath:(id)a2 kind:(id)a3;
- (void)setCollectionDataSource:(id)a0;
- (double)baseLineSpacing;
- (void)a_trashItem:(id)a0;
- (double)baseInteritemSpacing;
- (struct CGSize { double x0; double x1; })baseItemSize;
- (void)borderChanged:(id)a0;
- (void)collectionView:(id)a0 sectionIndex:(unsigned long long)a1 willDequeueAccessibilitySection:(id)a2;
- (void)configureSectionHeaderView:(id)a0 forIndexPath:(id)a1;
- (void)finishChanged:(id)a0;
- (id)initWithCollectionDataSource:(id)a0;
- (void)scrollToSelection;
- (void)selectionManager:(id)a0 didAddSelections:(id)a1;
- (void)selectionManager:(id)a0 didRemoveSelections:(id)a1;
- (void)selectionManager:(id)a0 didTouchSelections:(id)a1;
- (id)selectionManagerForLayoutView:(id)a0;
- (BOOL)shouldShowFrameOptionsForItemAtIndexPath:(id)a0;
- (void)splitViewController:(id)a0 willHideMasterViewController:(id)a1;
- (void)splitViewController:(id)a0 willShowMasterViewController:(id)a1;
- (void)updateSectionHeaders;

@end
