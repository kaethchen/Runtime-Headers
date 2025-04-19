@interface VideosUI.SportsCanonicalBannerCell : VUIBaseCollectionViewCell <VUINSNavigationBarVisibilityThresholdProviding> {
    void /* unknown type, empty encoding */ bannerViewModel;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ isReloadingAfterSwiftUIHeightChange;
    void /* unknown type, empty encoding */ uberBackgroundView;
    void /* unknown type, empty encoding */ uberBackgroundImageViewModel;
    void /* unknown type, empty encoding */ fallbackBackgroundImageViewModel;
    void /* unknown type, empty encoding */ previousViewSize;
    void /* unknown type, empty encoding */ accessibilityPreviouslyEnabled;
    void /* unknown type, empty encoding */ newBannerView;
    void /* unknown type, empty encoding */ currentBannerWidth;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bannerPresenter;
    void /* unknown type, empty encoding */ scoreboardUpdateTimer;
    void /* unknown type, empty encoding */ scoreboardUpdateRequest;
    void /* unknown type, empty encoding */ scoreboardUpdateRequestCancellable;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)visibilityThreshold;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellWillBeDisplayed;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;

@end
