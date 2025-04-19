@class KHPagingViewCell, NSArray, UXView, NSString, NSIndexPath;
@protocol KHPagingViewControllerDelegate;

@interface KHPagingViewController : KHEditorViewController <KHSelectionObserver, KHGridPageTransitionViewControllerProtocol> {
    BOOL _deferLoading;
    NSIndexPath *_centerIndexPath;
    NSIndexPath *_previousCenterIndexPath;
    NSIndexPath *_liveResizeIndexPath;
}

@property (readonly, nonatomic) NSArray *leadingBarButtonItems;
@property (readonly, nonatomic) NSArray *trailingBarButtonItems;
@property (weak, nonatomic) KHPagingViewCell *centerCell;
@property (nonatomic) double maximumZoomScale;
@property (weak, nonatomic) id<KHPagingViewControllerDelegate> delegate;
@property (readonly, nonatomic) UXView *selectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)displayMode;
+ (id)editorCollectionViewLayout;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateTitle;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)deleteItemsAtIndexes:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)insertItemsAtIndexes:(id)a0;
- (void)moveItemAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)reloadItemsAtIndexes:(id)a0;
- (id)undoManager;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillLayoutSubviews;
- (void)deselectAll;
- (void)updateMetadata;
- (void)_updateContentInsets;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionViewDidEndScrolling:(id)a0;
- (void)collectionViewDidScroll:(id)a0;
- (void)collectionViewWillBeginScrolling:(id)a0;
- (void)viewDidLiveResize;
- (void)viewWillLiveResize;
- (void)dismissViewForEditorController:(id)a0;
- (id)initWithEditor:(id)a0;
- (id)_pagingIndexesForLayoutIndexes:(id)a0;
- (BOOL)_collectionViewIsScrolling;
- (void)_commitCollectionChanges;
- (void)_containController:(id)a0;
- (struct CGSize { double x0; double x1; })_referenceSizeWithLayoutCountPerPage:(unsigned long long)a0;
- (void)_trackCenterCell;
- (id)availableLayoutsForEditorController:(id)a0;
- (double)bestFitZoomForLayouts:(id)a0 atScale:(double)a1 bestFitScale:(double *)a2;
- (id)collectionView:(id)a0 indexPathForLiveResizeInLayout:(id)a1;
- (id)contextualUndoManager;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })destinationRectForTransitionFromViewController:(id)a0;
- (void)didTransitionFromController:(id)a0;
- (void)didTransitionToController:(id)a0;
- (void)didUpdateAccessoryViewControllers;
- (void)editor:(id)a0 updateWithTitleContext:(id)a1;
- (id)editorController:(id)a0 anchorViewForLayoutAtIndex:(long long)a1;
- (void)editorController:(id)a0 didApplyDisplayFilter:(id)a1;
- (void)editorControllerDeselectAll:(id)a0;
- (id)pagingLayout;
- (id)presentingNavigationControllerForEditorController:(id)a0;
- (id)presentingViewControllerForEditorController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForLayout:(id)a0;
- (void)selectionManager:(id)a0 didAddSelections:(id)a1;
- (BOOL)shouldBeginInteractiveTransitionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitioningRectForAnimatedTransitionInView:(id *)a0 snapshot:(id *)a1;
- (void)updateAccessoryViewControllersForEditor:(id)a0;
- (id)visibleLayouts;
- (id)visibleLayoutsForEditorController:(id)a0;
- (void)willTransitionFromController:(id)a0;
- (void)willTransitionToController:(id)a0;
- (void)zoomChanged:(id)a0;

@end
