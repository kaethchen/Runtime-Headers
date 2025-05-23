@class NSMutableArray, NSString, NSURL, FindBanner, BannerContainerView, TabContentViewController, SearchableWKView, HeaderFooterPrintRenderer, WKWebsiteDataStore, WKWebViewConfiguration;

@interface WebViewController : NSViewController <FindBannerDelegate, _WKFindDelegate, BannerContainerViewDelegate, BannerDelegate, SearchableWKViewFullScreenDelegate> {
    struct RefPtr<Safari::WebViewControllerWKAdapter, WTF::RawPtrTraits<Safari::WebViewControllerWKAdapter>, WTF::DefaultRefDerefTraits<Safari::WebViewControllerWKAdapter>> { struct WebViewControllerWKAdapter *m_ptr; } _webViewControllerWKAdapter;
    NSMutableArray *_bannerActionQueue;
    BannerContainerView *_bannerContainerView;
    BOOL _isDeferringViewInWindowChanges;
}

@property (nonatomic, setter=_setZoomFactor:) double zoomFactor;
@property (readonly, copy, nonatomic) WKWebViewConfiguration *configuration;
@property (readonly, nonatomic) unsigned long long browsingMode;
@property (readonly, nonatomic) WKWebsiteDataStore *websiteDataStore;
@property (readonly, nonatomic) void *webViewControllerWKAdapter;
@property (readonly, nonatomic) BOOL usesPrivateBrowsing;
@property (readonly, nonatomic) NSURL *committedURL;
@property (readonly, copy, nonatomic) NSString *pageTitle;
@property (readonly, nonatomic, getter=isShowingStandaloneImage) BOOL showingStandaloneImage;
@property (readonly, nonatomic) SearchableWKView *webView;
@property (readonly, nonatomic) struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; } page;
@property (readonly, nonatomic) int webProcessIdentifier;
@property (readonly, nonatomic) TabContentViewController *tabContentViewController;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic) BOOL canPrint;
@property (readonly, nonatomic) HeaderFooterPrintRenderer *headerFooterPrintRenderer;
@property (readonly, copy, nonatomic) NSMutableArray *installedBanners;
@property (readonly, nonatomic) FindBanner *findBanner;
@property (readonly, nonatomic, getter=isShowingFindInPageBanner) BOOL showingFindInPageBanner;
@property (readonly, nonatomic) BOOL canShowFindInPageBanner;
@property (readonly, nonatomic) BOOL canHideFindInPageBanner;
@property (readonly, nonatomic) BOOL canFocusContentSearchField;
@property (readonly, nonatomic) BOOL canFindNextInPage;
@property (readonly, nonatomic) BOOL canFindPreviousInPage;
@property (readonly, nonatomic, getter=_isCurrentPageSearchable) BOOL _currentPageSearchable;
@property (nonatomic) double topContentInset;
@property (readonly, nonatomic, getter=isTopContentInsetCurrentlyUsed) BOOL topContentInsetCurrentlyUsed;
@property (readonly, nonatomic) BOOL canShowWebInspector;
@property (readonly, copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *customUserAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)invalidate;
- (id).cxx_construct;
- (void)_close;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)canMakeTextSmaller;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)endDeferringViewInWindowChanges;
- (double)_textZoomFactor;
- (void)_setTextZoomFactor:(double)a0;
- (void)_webView:(id)a0 didCountMatches:(unsigned long long)a1 forString:(id)a2;
- (void)_webView:(id)a0 didFailToFindString:(id)a1;
- (void)_webView:(id)a0 didFindMatches:(unsigned long long)a1 forString:(id)a2 withMatchIndex:(long long)a3;
- (void)beginDeferringViewInWindowChanges;
- (void)dismissContentRelativeChildWindows;
- (void)endDeferringViewInWindowChangesSync;
- (void)makeTextSmaller;
- (BOOL)canMakeTextBigger;
- (void)makeTextBigger;
- (void)resetZoom;
- (void)zoomWithFactor:(id)a0;
- (void)zoomOut;
- (void)_createBannerContainerViewIfNeeded;
- (id)_createFindInPageBanner;
- (id)_createWebViewWithConfiguration:(id)a0;
- (void)_defaultPageZoomDidChange:(id)a0;
- (BOOL)_fullPageZoomEnabled;
- (void)_hideAllBannerOverlays;
- (BOOL)_isWebViewInFullScreenMode;
- (void)_perSitePageZoomDidChange:(id)a0;
- (void)_queueBanner:(id)a0 withActionType:(long long)a1 animated:(BOOL)a2;
- (void)_startNextQueuedBannerAction;
- (void)_updateFocusAfterBannerUninstall;
- (id)_viewBelowBanner;
- (void)_willClosePage;
- (void)_zoomPreferencesDidLoad:(id)a0;
- (BOOL)_zoomsTextOnly;
- (void)bannerContainerView:(id)a0 didInstallBanner:(id)a1;
- (void)bannerContainerView:(id)a0 didUninstallBanner:(id)a1;
- (void)bannerContainerView:(id)a0 installAnimationDidEndForBanner:(id)a1;
- (void)bannerContainerView:(id)a0 willInstallBanner:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)bannerContainerView:(id)a0 willUninstallBanner:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)bannerContainerViewDidUninstall:(id)a0;
- (void)bannerContainerViewDidUpdateLayoutDuringAnimation:(id)a0 forBanner:(id)a1;
- (BOOL)canResetZoom;
- (BOOL)contentIsCapableOfZoom;
- (struct Ref<Safari::WebViewControllerWKAdapter, WTF::RawPtrTraits<Safari::WebViewControllerWKAdapter>, WTF::DefaultRefDerefTraits<Safari::WebViewControllerWKAdapter>> { struct WebViewControllerWKAdapter *x0; })createContentViewController;
- (id)currentZoomPreference;
- (void)findBanner:(id)a0 highlightAllMatchesForString:(id)a1 findOptions:(unsigned long long)a2 maximumNumberOfMatches:(unsigned long long)a3;
- (void)findBanner:(id)a0 startFindingString:(id)a1 findOptions:(unsigned long long)a2 maximumNumberOfMatches:(unsigned long long)a3;
- (void)findNextInPage;
- (void)findPreviousInPage;
- (void)focusContentSearchField;
- (void)focusContentSearchFieldWithSearchText:(id)a0;
- (void)hideAllBannersAnimated:(BOOL)a0;
- (void)hideFindInPageBannerAnimated:(BOOL)a0;
- (void)hideFindOverlayForBanner:(id)a0;
- (id)initWithConfiguration:(id)a0 browsingMode:(unsigned long long)a1;
- (BOOL)isBannerInstalled:(id)a0;
- (BOOL)isReadyToFindForBanner:(id)a0;
- (void)moveBannerContainerToFollowWebContent;
- (void)queueInstallationOfBanner:(id)a0 animated:(BOOL)a1;
- (void)queueUninstallationOfBanner:(id)a0 animated:(BOOL)a1;
- (void)registerSiteZoomPreference;
- (BOOL)setCustomUserAgent:(id)a0 reloadPage:(BOOL)a1;
- (BOOL)shouldUpdateFindPasteboardForBanner:(id)a0;
- (void)showFindInPageBannerAnimated:(BOOL)a0;
- (void)toggleWebInspector;
- (BOOL)tryClose;
- (void)uninstallBanner:(id)a0 animated:(BOOL)a1;
- (void)updateSiteZoomPreference;
- (void)zoomIn;

@end
