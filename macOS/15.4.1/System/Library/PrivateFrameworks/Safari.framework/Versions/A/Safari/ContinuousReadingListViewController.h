@class WebViewController, NSSet, NSString, ContinuousReadingListDataSource, NSMutableDictionary;

@interface ContinuousReadingListViewController : ContinuousBrowserPageViewController <ReaderInstallationTarget> {
    NSMutableDictionary *_continuousReadingListPageItemsToPageViewControllers;
}

@property (nonatomic, getter=isInReaderMode) BOOL inReaderMode;
@property (retain, nonatomic) id currentItemBeforeLoadingNewContinuousReadingListItem;
@property (retain, nonatomic) ContinuousReadingListDataSource *readingListDataSource;
@property (readonly, nonatomic) WebViewController *activeWebViewController;
@property (readonly, copy, nonatomic) NSSet *allBrowserViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_dataSourceClassForReadingListItem:(id)a0;
+ (id)continuousReadingListPageItemForReadingListItem:(id)a0;
+ (id)lastShownReadingListPageItemForBackForwardListItem:(const void *)a0;
+ (void)setLastShownReadingListPageItem:(id)a0 forBackForwardListItem:(const void *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)_updateRubberBandingAttributesForPageItem:(id)a0 headerViewController:(id)a1;
- (void)continuousPageView:(id)a0 pageViewDidParticipateInTransition:(id)a1 pageItem:(id)a2;
- (void)_clearBottomOverhangImageForPageWithHeaderViewController:(id)a0;
- (void)_clearTopOverhangImageForPageWithHeaderViewController:(id)a0;
- (id)_continuousReadingListPageItemFollowingPageItem:(id)a0;
- (id)_continuousReadingListPageItemPrecedingPageItem:(id)a0;
- (id)_dataSourceForContinuousReadingListPageItem:(id)a0;
- (id)_dataSourceForReadingListItem:(id)a0;
- (void)_displayedContentDidChange:(id)a0;
- (void)_goBackFromAboutBlankIfNecessaryForPage:(struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; })a0;
- (id)_pageWithHeaderViewControllerForFrame:(const void *)a0;
- (id)_pageWithHeaderViewControllerForNextItem;
- (id)_pageWithHeaderViewControllerForPage:(const void *)a0;
- (id)_pageWithHeaderViewControllerForPreviousItem;
- (id)_pageWithHeaderViewControllerForReaderContainerViewController:(id)a0;
- (void)_setCurrentlyLoadedReadingListItem:(id)a0 forPageWithHeaderViewController:(id)a1;
- (void)_setOverhangImagesForPageWithHeaderViewController:(id)a0;
- (void)_updateTopContentInsetOfAllWKViews;
- (void)addHistoryOperation:(id)a0 forPage:(struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; })a1;
- (BOOL)continuousPageView:(id)a0 canScrollDownPageView:(id)a1 pageItem:(id)a2;
- (BOOL)continuousPageView:(id)a0 canScrollUpPageView:(id)a1 pageItem:(id)a2;
- (void)continuousPageView:(id)a0 didTransitionToPageView:(id)a1 pageItem:(id)a2 fromPageItem:(id)a3 previousPageItem:(id)a4 nextPageItem:(id)a5;
- (id)continuousPageView:(id)a0 itemAfter:(id)a1;
- (id)continuousPageView:(id)a0 itemBefore:(id)a1;
- (BOOL)continuousPageView:(id)a0 pageViewHasFooterBanner:(id)a1 pageItem:(id)a2;
- (void)continuousPageView:(id)a0 pageViewWillParticipateInTransition:(id)a1 pageItem:(id)a2 role:(int)a3;
- (void)continuousPageView:(id)a0 willTransitionToPageView:(id)a1 pageItem:(id)a2;
- (id)currentContinuousReadingListPageItem;
- (void)didCreateSnapshotForRubberBandingArea:(const void *)a0 forPage:(struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; })a1;
- (void)didFinishLoadForMainFrameForPage:(struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; })a0 committedURL:(id)a1;
- (id)initWithTabContentViewController:(id)a0;
- (void)installReaderContainerViewController:(id)a0;
- (BOOL)isCurrentContinuousReadingListPage:(struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; })a0;
- (void)loadContinuousReadingListPageItem:(id)a0;
- (id)pageWithHeaderViewControllerForItem:(id)a0;
- (void)resetAllPageWithHeaderViewControllers;
- (void)setTopContentInset:(double)a0;
- (BOOL)shouldIgnoreHistoryForAboutBlankForPage:(struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; })a0;
- (void)stopLoadingPage:(struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; })a0;
- (void)uninstallReaderContainerViewController:(id)a0 closedByUser:(BOOL)a1;

@end
