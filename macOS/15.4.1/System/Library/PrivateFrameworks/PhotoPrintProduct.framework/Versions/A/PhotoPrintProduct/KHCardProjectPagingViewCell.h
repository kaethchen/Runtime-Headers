@class UXImageView, NSMutableArray;

@interface KHCardProjectPagingViewCell : KHProjectPagingViewCell

@property (readonly, nonatomic) UXImageView *decorationImageView;
@property (retain, nonatomic) NSMutableArray *orientationConstraints;

+ (struct CGSize { double x0; double x1; })contentViewSizeForLayouts:(id)a0 layoutScale:(double)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_setupDecorationImagesForProjectLayout:(id)a0;
- (void)_teardownAccessibility;
- (void)_updateOverlayConstraintsForProjectLayout:(id)a0;
- (id)canvasLayoutForProjectLayouts:(id)a0;
- (void)configureAccessoryButton:(id)a0 forLayout:(id)a1 atIndex:(unsigned long long)a2;
- (void)configureDecorations;
- (void)updateDecorationsForProjectLayouts:(id)a0;

@end
