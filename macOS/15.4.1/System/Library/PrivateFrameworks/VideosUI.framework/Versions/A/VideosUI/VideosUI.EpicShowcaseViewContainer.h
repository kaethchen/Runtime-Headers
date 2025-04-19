@interface VideosUI.EpicShowcaseViewContainer : VUIBaseView <VideosUI.ChevronIndicatorHost, VideosUI.CollectionChevronIndicatorViewDelegate> {
    void /* unknown type, empty encoding */ carouselView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ leadingIndicator;
    void /* unknown type, empty encoding */ trailingIndicator;
    void /* unknown type, empty encoding */ lastViewWidth;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)chevronIndicatorOf:(long long)a0 kind:(id)a1;
- (void)scrollPageFrom:(id)a0 for:(long long)a1;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
