@interface VideosUI.RoomBannerCollectionViewCell : VUIBaseCollectionViewCell <VUINSNavigationBarVisibilityThresholdProviding> {
    void /* unknown type, empty encoding */ imageViewModel;
    void /* unknown type, empty encoding */ roomBannerLayout;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ bannerImage;
    void /* unknown type, empty encoding */ descriptionView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)visibilityThreshold;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
