@interface VideosUI.CastBannerCollectionViewCell : VUIBaseCollectionViewCell <VUINSNavigationBarVisibilityThresholdProviding> {
    void /* unknown type, empty encoding */ castBannerLayout;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ attributionTextView;
    void /* unknown type, empty encoding */ descriptionView;
    void /* unknown type, empty encoding */ monogramView;
    void /* unknown type, empty encoding */ cachedSize;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ gradientLayerView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)visibilityThreshold;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
