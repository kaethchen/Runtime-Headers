@interface VideosUI.PlaylistViewController : VideosUI.VUIViewController {
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ playbackState;
    void /* unknown type, empty encoding */ metadataViewModels;
    void /* unknown type, empty encoding */ backgroundMediaInfo;
    void /* unknown type, empty encoding */ autoPlayDuration;
    void /* unknown type, empty encoding */ playlistType;
    void /* unknown type, empty encoding */ dismissOnEnd;
    void /* unknown type, empty encoding */ metadataTimeout;
    void /* unknown type, empty encoding */ metadataFadeInTime;
    void /* unknown type, empty encoding */ waitForUserInitiatedPlaybackStart;
    void /* unknown type, empty encoding */ isVideoOnly;
    void /* unknown type, empty encoding */ hostMetadataView;
    void /* unknown type, empty encoding */ playbackDidBegin;
    void /* unknown type, empty encoding */ initialMediaLoaded;
    void /* unknown type, empty encoding */ indexDidChange;
    void /* unknown type, empty encoding */ onClosePressed;
    void /* unknown type, empty encoding */ metadataContentHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMediaController;
    void /* unknown type, empty encoding */ interactionManager;
    void /* unknown type, empty encoding */ playbackTimer;
    void /* unknown type, empty encoding */ volumeObserver;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ boundaryObserver;
    void /* unknown type, empty encoding */ currentSizeClass;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ _contentAspectRatio;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLoad;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(BOOL)a0;

@end
