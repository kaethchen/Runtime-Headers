@interface VideosUI.FlowcaseViewCell : VideosUI.CarouselViewCell {
    void /* unknown type, empty encoding */ itemId;
    void /* unknown type, empty encoding */ visibilitySubscription;
    void /* unknown type, empty encoding */ flowcaseLayout;
    void /* unknown type, empty encoding */ backgroundMediaController;
    void /* unknown type, empty encoding */ showcasePlaybackManager;
    void /* unknown type, empty encoding */ scrollViewMonitor;
    void /* unknown type, empty encoding */ imageViewModel;
    void /* unknown type, empty encoding */ alphaImageViewModel;
    void /* unknown type, empty encoding */ previousSize;
    void /* unknown type, empty encoding */ imageViewContext;
    void /* unknown type, empty encoding */ playbackDidStartObserver;
    void /* unknown type, empty encoding */ playbackDidStopObserver;
    void /* unknown type, empty encoding */ playbackDidPlayToEndObserver;
    void /* unknown type, empty encoding */ userInterfaceStyleToRestore;
    void /* unknown type, empty encoding */ waitingToShowImageWhilePaused;
    void /* unknown type, empty encoding */ ignorePlaybackStop;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellWillBeDisplayed;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;

@end
