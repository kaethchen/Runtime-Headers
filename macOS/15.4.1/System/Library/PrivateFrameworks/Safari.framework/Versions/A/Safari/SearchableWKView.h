@class WebViewController, NSString, BrowserViewController, WKWebsiteDataStore, _WKRemoteObjectRegistry;
@protocol SearchableWKViewCancelDelegate, SearchableWKViewFullScreenDelegate, SearchableWKViewPlaybackControlsPresenter;

@interface SearchableWKView : WKWebView <_WKFullscreenDelegate> {
    BOOL _isInFullscreenMode;
}

@property (weak, nonatomic) id<SearchableWKViewFullScreenDelegate> fullScreenDelegate;
@property (weak, nonatomic) id<SearchableWKViewPlaybackControlsPresenter> playbackControlsPresenter;
@property (weak, nonatomic) id<SearchableWKViewCancelDelegate> cancelDelegate;
@property (readonly, nonatomic) unsigned long long browsingMode;
@property (readonly, nonatomic) WKWebsiteDataStore *websiteDataStore;
@property (readonly, nonatomic) BrowserViewController *presentingBrowserViewController;
@property (readonly, weak, nonatomic) WebViewController *webViewController;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic) _WKRemoteObjectRegistry *remoteObjectRegistry;
@property (nonatomic) BOOL drawsTransparentBackground;
@property (readonly) struct OpaqueWKPage { } *pageRef;
@property (readonly, nonatomic) unsigned long long pageID;
@property (readonly, nonatomic) BOOL isUsingUISideCompositing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (void)viewDidMoveToSuperview;
- (BOOL)writeSelectionToPasteboard:(id)a0 types:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (id)fullScreenPlaceholderView;
- (void)reloadFromOrigin:(id)a0;
- (void)endDeferringViewInWindowChanges;
- (void)saveBackForwardSnapshotForItem:(struct OpaqueWKBackForwardListItem { } *)a0;
- (void)_addMediaPlaybackControlsView:(id)a0;
- (void)_dismissContentRelativeChildWindows;
- (void)_gestureEventWasNotHandledByWebCore:(id)a0;
- (id)_immediateActionAnimationControllerForHitTestResult:(id)a0 withType:(long long)a1 userData:(id)a2;
- (void)_removeMediaPlaybackControlsView;
- (void)_webViewDidEnterFullscreen:(id)a0;
- (void)_webViewDidExitFullscreen:(id)a0;
- (void)_webViewWillEnterFullscreen:(id)a0;
- (void)beginDeferringViewInWindowChanges;
- (id)createFullScreenWindow;
- (void)disableFrameSizeUpdates;
- (void)enableFrameSizeUpdates;
- (void)endDeferringViewInWindowChangesSync;
- (id)_browserWindow;
- (id)initWithWebViewController:(id)a0 configuration:(id)a1;
- (void)pageDidClose;
- (id)safari_owningWebViewController;

@end
