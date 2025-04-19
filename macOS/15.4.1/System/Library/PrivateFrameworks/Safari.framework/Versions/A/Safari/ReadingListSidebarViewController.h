@class SidebarScrollView, NSString, NSSearchField, ReadingListContentProvider, NSArray, SidebarPlaceholderViewController, ReadingListSegmentedControl;

@interface ReadingListSidebarViewController : ReadingListSidebarViewControllerBase <ReadingListTableViewControllerDelegate, SidebarScrollViewAccessibilityDelegate, CustomKeyViewLoop, ReadingListSegmentedControlDelegate, ReadingListSidebarViewDragAndDropDelegate, SidebarContentFiltering, SidebarSearchFieldViewDelegate> {
    SidebarPlaceholderViewController *_placeholderViewController;
    ReadingListSegmentedControl *_segmentedControl;
    SidebarScrollView *_scrollView;
    BOOL _shouldUpdatePlaceholderViewVisibilityAfterTableViewAnimation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sidebarBoundsUponInstallation;
    BOOL _shouldHideSaveForOfflineRowAction;
    BOOL _hasNetworkReachability;
}

@property (retain, nonatomic) ReadingListContentProvider *contentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSearchField *searchField;
@property (readonly, nonatomic) NSArray *allFilteringControls;

+ (BOOL)_userLikelyHasNetworkReachability;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)setWindowController:(id)a0;
- (void)viewDidLoad;
- (void)tableViewController:(id)a0 receivedNavigationActionWithPolicy:(long long)a1 forItem:(id)a2;
- (void)_setUpAllUnreadSegmentedControl;
- (id)safari_keyViews;
- (id)_contentFilter;
- (void)_didReceiveNetworkChangeNotification:(id)a0;
- (void)_loadReadingListItem:(id)a0 withPolicy:(long long)a1;
- (id)_menuItemForRemovalOfReadingListItem:(id)a0;
- (void)_presentClearAllDialog;
- (void)_readingListSaveArticlesOfflineAutomaticallyPreferenceDidChange:(id)a0;
- (id)_readingListTableView;
- (void)_removeReadingListItem:(id)a0;
- (BOOL)_shouldHideSaveOfflineControlsForReadingListItem:(id)a0;
- (BOOL)_shouldShowRemoveArchiveControlsForReadingListItem:(id)a0;
- (void)_thumbnailWasLoaded:(id)a0;
- (void)_toggleReadStateOfReadingListItem:(id)a0;
- (void)_toggleSaveOfflineForReadingListItem:(id)a0;
- (void)_updateNetworkReachability;
- (void)_updatePlaceholderDescriptionGivenUserIsUsingAutomaticArchiving:(BOOL)a0;
- (void)_updatePlaceholderViewVisibility;
- (void)_updateSegmentedControlSelectionFromContentProvider;
- (void)_updateViewsForNetworkReachabilityChange;
- (void)clearAllItems:(id)a0;
- (void)displayedItemsDidChange:(id)a0 isAnimating:(BOOL)a1;
- (void)readingListSegmentedControlDidBecomeFirstResponder:(id)a0;
- (void)readingListSegmentedControlSelectionDidChange:(id)a0;
- (unsigned long long)readingListSidebarView:(id)a0 draggingEntered:(id)a1;
- (BOOL)readingListSidebarView:(id)a0 performDragOperation:(id)a1;
- (void)selectCurrentlyLoadedReadingListItem;
- (id)sideBarScrollViewAccessibilityChildren:(id)a0;
- (void)sidebarSearchFieldViewSearchStringDidChange:(id)a0;
- (id)tableViewController:(id)a0 accessibilityDescriptionForItem:(id)a1;
- (void)tableViewController:(id)a0 animationsDidFinishForRows:(id)a1;
- (void)tableViewController:(id)a0 didActivateItem:(id)a1;
- (id)tableViewController:(id)a0 menuForEvent:(id)a1 withExistingMenu:(id)a2 andItem:(id)a3;
- (void)tableViewController:(id)a0 receivedRemoveActionForItem:(id)a1;
- (id)tableViewController:(id)a0 rowActionsForRow:(long long)a1 item:(id)a2 edge:(long long)a3 completionHandler:(id /* block */)a4;
- (void)updateCurrentBrowserURL;
- (void)willBeInstalledBySidebarViewController:(id)a0;

@end
