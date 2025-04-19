@interface VideosUI.VUICarouselView : VUIBaseView <VideosUI.VUIScrollViewDelegate, VideosUI.VUICollectionViewDelegate, NSCollectionViewDataSource> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ isInfiniteScrollEnabled;
    void /* unknown type, empty encoding */ itemCountMultiplier;
    void /* unknown type, empty encoding */ currentCarouselIndex;
    void /* unknown type, empty encoding */ lastViewWidth;
    void /* unknown type, empty encoding */ instance;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)vuiCollectionView:(id)a0 didEndDisplaying:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 didSelectItemAt:(id)a1;
- (void)vuiCollectionView:(id)a0 willDisplay:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 at:(id)a3;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)a0;
- (void)vuiScrollViewDidScroll:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
