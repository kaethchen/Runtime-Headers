@interface VideosUI.SearchTemplateController : VideosUI.VUIViewController <VUIToolbarSearchFieldInteractingProtocol, VideosUI.VUIDeeplinkURLHandlingInterceptor> {
    void /* unknown type, empty encoding */ searchHistoryCompletion;
    void /* unknown type, empty encoding */ hasFinishedFetchingBubbleTipMessage;
    void /* unknown type, empty encoding */ hasQueryDescriptionBanner;
    void /* unknown type, empty encoding */ searchTopResultsServiceRequest;
    void /* unknown type, empty encoding */ hintsCollectionViewModel;
    void /* unknown type, empty encoding */ recentlySearchedDataManager;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ searchHintsServiceRequest;
    void /* unknown type, empty encoding */ currentSearchTextInputSource;
    void /* unknown type, empty encoding */ resultsServiceRequest;
    void /* unknown type, empty encoding */ resultsViewController;
    void /* unknown type, empty encoding */ landingPageViewController;
    void /* unknown type, empty encoding */ searchRequestCancellables;
    void /* unknown type, empty encoding */ activeSearchState;
    void /* unknown type, empty encoding */ pageMetrics;
    void /* unknown type, empty encoding */ searchFieldTextDidChangeFireDelay;
    void /* unknown type, empty encoding */ pendingHintsRequestWorkItem;
    void /* unknown type, empty encoding */ searchHintsCompletion;
    void /* unknown type, empty encoding */ searchHintsSelectedBlock;
    void /* unknown type, empty encoding */ searchHintsFinishedLayoutBlock;
    void /* unknown type, empty encoding */ searchHintsStackViewController;
    void /* unknown type, empty encoding */ hintsTemplateViewModel;
    void /* unknown type, empty encoding */ currentSearchDisplayTerm;
    void /* unknown type, empty encoding */ topResultsCollectionViewModel;
    void /* unknown type, empty encoding */ pagePerformanceProvider;
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ loadingConfiguration;
    void /* unknown type, empty encoding */ hintsCollectionImpressioner;
    void /* unknown type, empty encoding */ hintsWindowIsVisible;
    void /* unknown type, empty encoding */ shouldUseHintsImpressioner;
    void /* unknown type, empty encoding */ isSubmitOrHintClickInProgress;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)accountChanged:(id)a0;
- (void)hintsWindowControllerDidDismiss;
- (void)vui_viewDidLoad;
- (BOOL)deeplinkURLWasHandled:(id)a0;
- (void)toolbarSearchFieldDidCommandMoveDown;
- (void)toolbarSearchFieldDidCommandMoveUp;
- (void)toolbarSearchFieldRequestPerformSearch:(id)a0 completion:(id /* block */)a1;
- (void)toolbarSearchFieldTextDidChange:(id)a0 searchHintCompletion:(id /* block */)a1 searchHintSelected:(id /* block */)a2 searchHintsFinishedLayout:(id /* block */)a3;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_loadView;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;

@end
