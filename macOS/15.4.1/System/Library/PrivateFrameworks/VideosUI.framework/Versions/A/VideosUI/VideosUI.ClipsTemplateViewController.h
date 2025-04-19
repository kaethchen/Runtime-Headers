@interface VideosUI.ClipsTemplateViewController : VideosUI.VUIViewController <VUIPlaybackRatioProvider> {
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ previousSubtitle;
    void /* unknown type, empty encoding */ previousAlternateSubtitle;
    void /* unknown type, empty encoding */ playlistViewController;
    void /* unknown type, empty encoding */ collectionTitle;
    void /* unknown type, empty encoding */ collectionViewModel;
    void /* unknown type, empty encoding */ maxMovieContentRating;
    void /* unknown type, empty encoding */ maxTVContentRating;
    void /* unknown type, empty encoding */ ratioUpdateHandler;
    void /* unknown type, empty encoding */ paginateOffset;
    void /* unknown type, empty encoding */ serviceRequest;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ clipType;
    void /* unknown type, empty encoding */ trailersContextData;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLoad;
- (void)registerRatioUpdates:(id /* block */)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;

@end
