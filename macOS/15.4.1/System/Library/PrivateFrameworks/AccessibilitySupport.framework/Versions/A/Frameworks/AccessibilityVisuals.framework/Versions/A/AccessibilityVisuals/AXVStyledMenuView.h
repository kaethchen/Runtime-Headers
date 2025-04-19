@class NSArray, AXVStyledMenuTargetView;

@interface AXVStyledMenuView : AXVView

@property (retain, nonatomic) AXVStyledMenuTargetView *_targetView;
@property (retain, nonatomic) NSArray *menuItems;
@property (nonatomic) double menuItemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } menuItemSize;
@property (nonatomic) long long displayStyle;
@property (nonatomic) struct CGPoint { double x; double y; } menuTargetOrigin;

- (void).cxx_destruct;
- (void)_updateLayout;
- (void)_setupTargetViewIfNeeded;
- (void)_updateCircularLayout;
- (void)_updateListLayout;
- (void)_updateMenuItem:(id)a0 withOrigin:(struct CGPoint { double x0; double x1; })a1;

@end
