@interface VideosUI.PostPlayTemplateController : VideosUI.VUIViewController <VUIPlaybackUpNextController> {
    void /* unknown type, empty encoding */ contextData;
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ templateViewModel;
    void /* unknown type, empty encoding */ playlistViewController;
    void /* unknown type, empty encoding */ featuredContentLogo;
    void /* unknown type, empty encoding */ beginTrailerPlayback;
    void /* unknown type, empty encoding */ shouldDismissOncePlaybackEnds;
    void /* unknown type, empty encoding */ playbackUpNextDelegate;
    void /* unknown type, empty encoding */ cancellables;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLoad;
- (double)playbackUpNextViewHeight;
- (void)setPlaybackUpNextContextData:(id)a0;
- (void)setPlaybackUpNextDelegate:(id)a0;
- (void)startAutoPlayAnimation;
- (void)vui_loadView;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;

@end
