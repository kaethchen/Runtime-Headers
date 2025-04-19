@interface VideosUI.MediaShowcaseViewController : VUIBaseViewController <VideosUI.VUICollectionViewAXDelegate, VideosUI.VUICollectionViewHoverDelegate> {
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ pageViewModels;
    void /* unknown type, empty encoding */ mediaInfoIndexOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mediaShowcaseConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMediaController;
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerControlsView;
    void /* unknown type, empty encoding */ initialMediaLoaded;
    void /* unknown type, empty encoding */ horizontalStackViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientLayer;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ shouldSetupTitleView;
    void /* unknown type, empty encoding */ isTabbarOrSidebarFirstChild;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLoad;
- (void)vuiCollectionView:(id)a0 didSelectItemByAXAt:(id)a1;
- (BOOL)vuiCollectionView:(id)a0 shouldHoverItemAt:(id)a1;
- (double)vuiCollectionViewHoverDelayDuration:(id)a0 at:(id)a1;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillDisappear:(BOOL)a0;

@end
