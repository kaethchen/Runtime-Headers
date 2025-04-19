@class NSArray, NSMutableArray, SO_AXElementItemStyleProvider;

@interface SO_AXElementNamesCyclingView : SO_AXCyclingView

@property (retain, nonatomic) NSMutableArray *containers;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL didUpdateItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeScreenArea;
@property (retain, nonatomic) SO_AXElementItemStyleProvider *styleProvider;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithInterval:(double)a0;
- (void)_adjustLabelPositionForView:(id)a0 toAvoidCollidingWithView:(id)a1;
- (void)_arrangeNameViews:(id)a0 withinContainer:(id)a1;
- (void)_reloadViews;
- (id)viewsInCycle;

@end
