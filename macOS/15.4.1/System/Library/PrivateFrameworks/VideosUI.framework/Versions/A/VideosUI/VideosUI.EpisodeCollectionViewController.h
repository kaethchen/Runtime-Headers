@interface VideosUI.EpisodeCollectionViewController : VideosUI.VUIViewController <VideosUI.CollectionChevronIndicatorViewDelegate, VideosUI.ChevronIndicatorHost, VideosUI.VUICollectionViewContextMenuDelegate, VideosUI.VUICollectionViewHoverDelegate, VideosUI.VUIScrollViewDelegate, VideosUI.VUICollectionViewAXDelegate, VideosUI.VUICollectionViewDelegate> {
    void /* unknown type, empty encoding */ viewImpressioner;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ currentSnapshot;
    void /* unknown type, empty encoding */ cachedPrototypeCell;
    void /* unknown type, empty encoding */ cachedPrototypeCellMetrics;
    void /* unknown type, empty encoding */ cachedPrototypeLastWidth;
    void /* unknown type, empty encoding */ contextMenuInteractor;
    void /* unknown type, empty encoding */ leadingIndicator;
    void /* unknown type, empty encoding */ trailingIndicator;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)chevronIndicatorOf:(long long)a0 kind:(id)a1;
- (void)scrollPageFrom:(id)a0 for:(long long)a1;
- (void)vuiCollectionView:(id)a0 didEndDisplaying:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 didSelectItemAt:(id)a1;
- (void)vuiCollectionView:(id)a0 didSelectItemByAXAt:(id)a1;
- (BOOL)vuiCollectionView:(id)a0 shouldHoverItemAt:(id)a1;
- (void)vuiCollectionView:(id)a0 willDisplay:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 at:(id)a3;
- (double)vuiCollectionViewHoverDelayDuration:(id)a0 at:(id)a1;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)a0;
- (void)vuiScrollViewDidScroll:(id)a0;
- (void)vuiShowContextMenu:(id)a0 event:(id)a1 at:(id)a2;
- (void)vui_loadView;
- (void)vui_viewDidLayoutSubviews;

@end
