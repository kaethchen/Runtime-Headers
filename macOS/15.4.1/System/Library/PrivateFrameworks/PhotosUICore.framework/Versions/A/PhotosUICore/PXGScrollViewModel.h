@interface PXGScrollViewModel : PXObservable <PXGMutableScrollViewModel>

@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (readonly, nonatomic) long long scrollRegime;
@property (readonly, nonatomic) long long scrollDecelerationRate;
@property (readonly, nonatomic) BOOL clipsToBounds;
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator;
@property (readonly, nonatomic) BOOL showsVerticalScrollIndicator;
@property (readonly, nonatomic) BOOL alwaysBounceHorizontal;
@property (readonly, nonatomic) BOOL alwaysBounceVertical;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } horizontalScrollIndicatorInsets;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } verticalScrollIndicatorInsets;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } hitTestContentInsets;
@property (readonly, nonatomic) BOOL draggingPerformsScroll;
@property (readonly, nonatomic) BOOL transfersScrollToContainer;
@property (readonly, nonatomic) double horizontalInterPageSpacing;
@property (readonly, nonatomic) unsigned long long changesOptions;

- (id)description;
- (id)init;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setClipsToBounds:(BOOL)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setAlwaysBounceHorizontal:(BOOL)a0;
- (void)setAlwaysBounceVertical:(BOOL)a0;
- (void)setHorizontalScrollIndicatorInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setShowsHorizontalScrollIndicator:(BOOL)a0;
- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (void)setVerticalScrollIndicatorInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)didEndChangeHandling;
- (void)performChanges:(id /* block */)a0 options:(unsigned long long)a1;
- (void)setDraggingPerformsScroll:(BOOL)a0;
- (void)setHitTestContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setHorizontalInterPageSpacing:(double)a0;
- (void)setScrollDecelerationRate:(long long)a0;
- (void)setScrollRegime:(long long)a0;
- (void)setTransfersScrollToContainer:(BOOL)a0;
- (void)stopScrolling;

@end
