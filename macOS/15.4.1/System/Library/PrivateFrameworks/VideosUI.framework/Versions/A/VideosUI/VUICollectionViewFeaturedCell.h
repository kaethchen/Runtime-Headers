@class VUICollectionViewFeaturedView;

@interface VUICollectionViewFeaturedCell : VUIBaseCollectionViewCell

@property (retain, nonatomic) VUICollectionViewFeaturedView *featuredView;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_commonInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
