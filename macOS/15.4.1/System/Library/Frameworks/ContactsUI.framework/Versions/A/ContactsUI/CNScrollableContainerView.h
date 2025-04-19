@class NSScrollView, CNScrollViewOccluderController, CNOccluderView, NSView;

@interface CNScrollableContainerView : NSView

@property (retain, nonatomic) NSScrollView *scrollView;
@property (retain, nonatomic) CNOccluderView *topOccluder;
@property (retain, nonatomic) CNOccluderView *bottomOccluder;
@property (retain, nonatomic) CNScrollViewOccluderController *occluderController;
@property (retain, nonatomic) NSView *containedView;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void).cxx_destruct;
- (id)initWithContainedView:(id)a0 shouldFlipClipView:(BOOL)a1;
- (void)setupConstraints;
- (void)setupViewHierarchy;

@end
