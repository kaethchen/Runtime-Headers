@class NSString, LPYouTubePlayerWebView, LPYouTubePlayerScriptMessageHandler, NSMutableArray;
@protocol LPYouTubePlayerDelegate;

@interface LPYouTubePlayerView : NSView <WKNavigationDelegate, WKUIDelegate> {
    LPYouTubePlayerWebView *_webView;
    NSString *_videoID;
    long long _state;
    LPYouTubePlayerScriptMessageHandler *_scriptMessageHandler;
    BOOL _ready;
    NSMutableArray *_commandsPendingPlayerReadiness;
}

@property (weak, nonatomic) id<LPYouTubePlayerDelegate> delegate;
@property (nonatomic) BOOL startsPlayingAutomatically;
@property (nonatomic) BOOL showsControls;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)pause;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)play;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 preferences:(id)a2 decisionHandler:(id /* block */)a3;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)exitFullScreen;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)_webView:(id)a0 navigation:(id)a1 didFailProvisionalLoadInSubframe:(id)a2 withError:(id)a3;
- (void)enterFullScreen;
- (void)seekTo:(double)a0;
- (void)_evaluatePlayerCommand:(id)a0;
- (id)_parameterScript;
- (BOOL)_shouldUseElementFullScreen;
- (void)createVideoPlayerView;
- (void)didReceiveScriptMessage:(id)a0;
- (void)dispatchErrorWithCode:(long long)a0;
- (void)loadVideoWithEmbedURL:(id)a0;
- (void)loadVideoWithID:(id)a0;
- (void)loadVideoWithURL:(id)a0;

@end
