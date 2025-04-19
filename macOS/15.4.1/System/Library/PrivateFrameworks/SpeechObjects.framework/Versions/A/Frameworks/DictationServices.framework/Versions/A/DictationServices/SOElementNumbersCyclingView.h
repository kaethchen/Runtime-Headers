@class NSArray, NSMutableArray, SO_AXElementItemStyleProvider;

@interface SOElementNumbersCyclingView : SO_AXCyclingView

@property (retain, nonatomic) NSMutableArray *containers;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL didUpdateItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeScreenArea;
@property (retain, nonatomic) SO_AXElementItemStyleProvider *styleProvider;

+ (id)badgeViewWithNumber:(unsigned long long)a0 arrowOrientation:(long long)a1;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithInterval:(double)a0;
- (void)_arrangeNumberViews:(id)a0 withinContainer:(id)a1;
- (void)_reloadViews;
- (id)viewsInCycle;

@end
