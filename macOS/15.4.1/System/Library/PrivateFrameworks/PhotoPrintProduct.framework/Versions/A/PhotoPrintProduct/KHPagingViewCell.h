@class UXViewController, NSString, NSMutableDictionary, UXView, NSArray, KHScrollView, KHSelectionManager;

@interface KHPagingViewCell : UXCollectionViewCell <KHScrollViewDelegate, CALayerDelegate, KHSelectionObserver> {
    BOOL _isRootCellClass;
    struct CGPoint { double x; double y; } _scaledContentOffset;
    struct CGPoint { double x; double y; } _scaledScrollPoint;
}

@property (readonly, nonatomic) NSMutableDictionary *contentInsets;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } layoutInsets;
@property (readonly, nonatomic) UXView *documentView;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *layouts;
@property (readonly, nonatomic) NSArray *availableLayouts;
@property (readonly, nonatomic) KHScrollView *scrollView;
@property (readonly, nonatomic) UXView *scrollContentView;
@property (readonly, nonatomic) UXView *topAccessoryView;
@property (readonly, nonatomic) UXView *bottomAccessoryView;
@property (retain, nonatomic) KHSelectionManager *selectionManager;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double minimumLayoutScale;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double liveZoomScale;
@property (nonatomic) double zoomScale;
@property (nonatomic) BOOL adjustingContentInset;
@property (nonatomic) BOOL zoomingToRectForTextEditing;
@property (nonatomic) BOOL zoomingEnabled;
@property (readonly, nonatomic) double minimumZoomScale;
@property (readonly, nonatomic) double layoutScale;
@property (readonly, nonatomic) UXView *selectionView;
@property (weak, nonatomic) UXViewController *parentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentViewSizeForLayouts:(id)a0 layoutScale:(double)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)accessibilityValueDescription;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void)deselectAll;
- (void)resetZoom;
- (void)didBecomeActive;
- (void)didBecomeInactive;
- (void)scrollViewWillStartLiveMagnify:(id)a0;
- (void)setLayoutScale:(double)a0;
- (void)applyDisplayFilter:(id)a0;
- (void)applyLiveZoomScale;
- (void)didChangeLayoutScale;
- (void)liveZoomToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)notifyLiveZoomScaleChange;
- (void)prepareForLiveZoom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForLayout:(id)a0;
- (void)removeContentInsetForKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })safeRectForZoomScale:(double)a0;
- (void)scrollViewDidEndLiveMagnify:(id)a0;
- (void)scrollViewDidMagnify:(id)a0;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0 forKey:(id)a1;
- (void)setMinMagnification:(double)a0 maxMagnification:(double)a1;
- (BOOL)shouldBeginInteractiveTransitionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateContentInset;
- (double)zoomScaleForSelection:(id)a0;

@end
