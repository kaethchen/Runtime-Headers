@class NSString, ReaderViewController, _WKRemoteObjectInterface;
@protocol ReaderBundlePageMessageReceiver;

@interface ReaderWKView : SearchableWKView <ReaderControllerMessageReceiver> {
    id<ReaderBundlePageMessageReceiver> _readerBundlePageMessageReceiverProxy;
    _WKRemoteObjectInterface *_readerControllerMessageReceiverInterface;
}

@property (readonly, nonatomic) id<ReaderBundlePageMessageReceiver> readerBundlePageMessageReceiver;
@property (readonly, nonatomic) ReaderViewController *readerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)accessibilityParent;
- (id)accessibilityWindow;
- (void)scrollWheel:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)presentingBrowserViewController;
- (void)reportReaderEvent:(long long)a0 dataToReport:(id)a1;
- (void *)_readerController;
- (void)articleScrolled:(id)a0;
- (void)contentIsReadyForDisplayWithScrollOffset:(double)a0 articleText:(id)a1;
- (void)didChangeNextPageLoadingState;
- (void)didGetPrintingFrame:(id)a0;
- (BOOL)handleScrollEventAsSwipeGesture:(id)a0;
- (id)initWithReaderViewController:(id)a0 configuration:(id)a1;
- (id)initWithWebViewController:(id)a0 configuration:(id)a1;
- (void)requestOnDeviceSummary;
- (id)safari_owningBrowserViewController;
- (void)setArticleBaseURL:(id)a0;
- (void)setReaderTestComparisonDataWithPath:(id)a0 title:(id)a1 nextPageURLString:(id)a2 multiPageContentElementsPathString:(id)a3 adoptableHTML:(id)a4 fullHTML:(id)a5;
- (id)tabContentView;

@end
