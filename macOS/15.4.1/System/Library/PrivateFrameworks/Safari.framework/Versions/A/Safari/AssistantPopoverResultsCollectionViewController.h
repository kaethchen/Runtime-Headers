@class AssistantPopoverResultsCollectionView, NSScrollView, NSArray, AssistantPopoverViewController, AssistantPopoverResultsCollectionViewLayout, NSCollectionViewDiffableDataSource, NSLayoutConstraint, NSIndexSet;
@protocol AssistantPopoverViewControllerDelegate;

@interface AssistantPopoverResultsCollectionViewController : NSViewController {
    NSCollectionViewDiffableDataSource *_resultsCollectionViewDataSource;
    AssistantPopoverResultsCollectionView *_resultsCollectionView;
    NSScrollView *_resultsScrollView;
    NSArray *_resultCollectionViewSections;
    NSLayoutConstraint *_resultsCollectionViewInitialHeight;
    AssistantPopoverResultsCollectionViewLayout *_resultsCollectionViewLayout;
    NSIndexSet *_rowActionCellTypes;
    NSIndexSet *_platteredCustomCellTypes;
    NSIndexSet *_nonPlatteredCustomCellTypes;
}

@property (retain, nonatomic) AssistantPopoverViewController *popoverController;
@property (weak, nonatomic) id<AssistantPopoverViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)_cellForAssistantResult:(id)a0 indexPath:(id)a1 collectionView:(id)a2;
- (void)_configureDataSource;
- (BOOL)_isLastItemInSection:(id)a0;
- (id)_itemForEntityResult:(id)a0 indexPath:(id)a1 collectionView:(id)a2;
- (id)_itemForPageMenuResult:(id)a0 indexPath:(id)a1 collectionView:(id)a2;
- (id)_layoutSectionForCollectionViewCells:(double)a0;
- (id)_layoutSectionForPageMenu:(unsigned long long)a0;
- (id)_resultsCollectionViewLayout;
- (void)_setupResultsCollectionView;
- (void)_setupResultsScrollView;
- (void)updateAssistantPopoverDimensions;
- (void)updateAssistantPopoverElasticity;
- (void)updateAssistantResultsForSections:(id)a0 animate:(BOOL)a1;
- (void)updateCellSpacingForSections:(id)a0;

@end
