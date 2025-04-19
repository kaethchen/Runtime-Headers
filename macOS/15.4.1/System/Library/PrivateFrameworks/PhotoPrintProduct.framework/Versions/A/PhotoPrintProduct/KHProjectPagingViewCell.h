@class _KHCanvasViewController, NSButton;

@interface KHProjectPagingViewCell : KHPagingViewCell

@property (retain, nonatomic) _KHCanvasViewController *canvasViewController;
@property (readonly, nonatomic) NSButton *leadingAccessoryButton;
@property (readonly, nonatomic) NSButton *trailingAccessoryButton;

+ (struct CGSize { double x0; double x1; })contentViewSizeForLayouts:(id)a0 layoutScale:(double)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)selectionView;
- (void)didBecomeActive;
- (void)didBecomeInactive;
- (void)setLayouts:(id)a0;
- (void)_cleanupCell;
- (void)_pageSelected:(id)a0;
- (void)_setAccessoryState:(long long)a0 forSelection:(id)a1;
- (id)canvasLayoutForProjectLayouts:(id)a0;
- (void)configureAccessoryButton:(id)a0 forLayout:(id)a1 atIndex:(unsigned long long)a2;
- (void)configureDecorations;
- (void)didChangeLayoutScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForLayout:(id)a0;
- (void)selectionManager:(id)a0 didAddSelections:(id)a1;
- (void)selectionManager:(id)a0 didRemoveSelections:(id)a1;
- (void)updateDecorationsForProjectLayouts:(id)a0;
- (double)zoomScaleForSelection:(id)a0;

@end
