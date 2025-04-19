@class NSString, NSArray, VisualTabPickerTransitionAnimator, NSOperationQueue, VisualTabPickerTransitionCoordinator, NSImage, CustomViewSnapshotCache, VisualTabPickerRootView;
@protocol VisualTabPickerDelegate;

@interface VisualTabPickerViewController : NSViewController <VisualTabPickerSearchFieldDelegate, VisualTabPickerTransitionAnimatorDelegate, VisualTabPickerTransitionCoordinatorDelegate, VisualTabPickerGridViewDataSource, VisualTabPickerGridViewDelegate> {
    VisualTabPickerRootView *_rootView;
    NSArray *_orderedTabViewItems;
    NSArray *_filteredTabViewItems;
    NSOperationQueue *_filterQueue;
    NSString *_searchText;
    BOOL _isPostponingClosingVisualTabPickerWhenNewTabIsInserted;
    BOOL _didReportPerformSearch;
    BOOL _isClosingBySelectingOrCreatingTab;
    VisualTabPickerTransitionAnimator *_transitionAnimator;
    VisualTabPickerTransitionCoordinator *_transitionCoordinator;
    double _transitionProgress;
    BOOL _didStartExitAnimation;
}

@property (nonatomic) BOOL tabsShouldBeClosable;
@property (readonly, nonatomic) CustomViewSnapshotCache *snapshotCache;
@property (weak, nonatomic) id<VisualTabPickerDelegate> delegate;
@property (readonly, nonatomic, getter=isAddingNewTab) BOOL addingNewTab;
@property (retain, nonatomic) NSImage *tabBarSnapshot;
@property (retain, nonatomic) NSImage *sidebarSnapshot;
@property (readonly, nonatomic, getter=isExitAnimationInProgress) BOOL exitAnimationInProgress;
@property (readonly, nonatomic) BOOL shouldAdjustForTopBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)springAnimationForVisualTabPicker;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_doesSearchResultsContainSelectedTab;
- (void)_performAsynchronousFilter;
- (void)_reloadLocalTabData;
- (void)_resetFilterState;
- (id)_tabFilterInfoForOrderedTabs;
- (void)_updateTabsShouldBeClosable;
- (void)closeVisualTabPicker;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentLayoutRect;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)createNewTabForVisualTabPickerGridView:(id)a0;
- (BOOL)entryOrExitAnimationInProgress;
- (void)focusSearchField;
- (unsigned long long)indexOfSelectedTab;
- (BOOL)isSearching;
- (void)loadView;
- (void)magnifyWithEvent:(id)a0;
- (id)orderedTabItemsInVisualTabPickerGridView:(id)a0;
- (void)postponeClosingVisualTabPickerWhenNewTabIsInserted;
- (void)reloadTabViewItem:(id)a0;
- (void)removeVisualTabPickerFromViewHierarchy;
- (id)selectedTabItemInVisualTabPickerGridView:(id)a0;
- (BOOL)shouldDisplayRealWebViews;
- (void)startEntryAnimation;
- (double)tabPickerAnimationDuration;
- (double)tilesHeightToWidthRatioInVisualTabPickerGridView:(id)a0;
- (void)visualTabPickerGridView:(id)a0 selectTab:(id)a1;
- (void)visualTabPickerGridViewCloseTabViewItem:(id)a0;
- (void)visualTabPickerSearchFieldTextDidChange:(id)a0;
- (void)_browserTabViewItemDidChangeIcon:(id)a0;
- (void)_didFinishExitAnimation;
- (void)_reloadGridViewWhileFiltering;
- (void)audioPlayingStateOrMutedStateDidChangeForBrowserTabViewItem:(id)a0;
- (void)beginTransitionWithEvent:(id)a0;
- (void)browserTabViewItemsDidChange;
- (void)didInsertBrowserTabViewItem:(id)a0;
- (id)initWithSnapshotCache:(id)a0;
- (void)prepareForEntryAnimation;
- (void)searchVisualTabPickerWithString:(id)a0;
- (void)transitionAnimator:(id)a0 didReachFixedPoint:(float)a1 isStable:(BOOL)a2;
- (void)transitionCoordinatorWillUpdateDestination:(id)a0;
- (void)updateTransitionWithEvent:(id)a0;
- (BOOL)visualTabPickerGridView:(id)a0 canCloseTab:(id)a1;
- (void)visualTabPickerGridViewToggleMuteButtonInTab:(id)a0;
- (void)willBeginTransitionInTransitionAnimator:(id)a0;
- (void)willInsertBrowserTabViewItem;

@end
