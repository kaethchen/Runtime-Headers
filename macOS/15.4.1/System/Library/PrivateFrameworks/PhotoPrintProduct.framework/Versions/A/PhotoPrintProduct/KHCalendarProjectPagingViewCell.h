@class UXImageView, NSMutableArray;

@interface KHCalendarProjectPagingViewCell : KHProjectPagingViewCell

@property (readonly, nonatomic) UXImageView *openWireImageView;
@property (readonly, nonatomic) UXImageView *closedWireImageView;
@property (readonly, nonatomic) UXImageView *topHoleImageView;
@property (readonly, nonatomic) UXImageView *bottomHoleImageView;
@property (retain, nonatomic) NSMutableArray *wireHeightConstraints;

+ (struct CGSize { double x0; double x1; })contentViewSizeForLayouts:(id)a0 layoutScale:(double)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)canvasLayoutForProjectLayouts:(id)a0;
- (void)configureAccessoryButton:(id)a0 forLayout:(id)a1 atIndex:(unsigned long long)a2;
- (void)configureDecorations;
- (void)selectionManager:(id)a0 didAddSelections:(id)a1;
- (void)updateDecorationsForProjectLayouts:(id)a0;

@end
