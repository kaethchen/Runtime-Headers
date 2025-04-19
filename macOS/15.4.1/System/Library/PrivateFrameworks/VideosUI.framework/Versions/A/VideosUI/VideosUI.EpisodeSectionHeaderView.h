@interface VideosUI.EpisodeSectionHeaderView : NSView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ buttonView;
    void /* unknown type, empty encoding */ viewLayout;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
