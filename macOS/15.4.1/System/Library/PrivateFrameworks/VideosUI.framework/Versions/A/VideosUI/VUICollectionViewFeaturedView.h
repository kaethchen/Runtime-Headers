@class NSView;

@interface VUICollectionViewFeaturedView : VUIBaseView

@property (retain, nonatomic) NSView *imageView;
@property (retain, nonatomic) NSView *overlayView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
