@class NSArray, NSView;

@interface GKContiguousContainerView : NSView

@property (nonatomic) BOOL vertical;
@property (nonatomic) BOOL applyOrthogonalConstraints;
@property (retain, nonatomic) NSArray *replaceableConstraints;
@property (nonatomic) NSView *baselineView;
@property (nonatomic) double overlap;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;

+ (id)containerForViewsFontsLeadings:(id)a0 options:(long long)a1;
+ (id)containerViewForViews:(id)a0 overlap:(double)a1 vertical:(BOOL)a2;
+ (id)containerViewForViews:(id)a0 overlap:(double)a1 vertical:(BOOL)a2 applyOrthogonalConstraints:(BOOL)a3;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)viewForBaselineLayout;
- (void)_addContiguousSubviews:(id)a0;
- (void)replaceSubviews:(id)a0;

@end
