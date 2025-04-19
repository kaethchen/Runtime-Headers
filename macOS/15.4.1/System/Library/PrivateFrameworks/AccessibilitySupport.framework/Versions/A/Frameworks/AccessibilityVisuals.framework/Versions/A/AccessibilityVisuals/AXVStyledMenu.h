@class NSArray, AXVStyledMenuView;

@interface AXVStyledMenu : NSObject

@property (retain, nonatomic) AXVStyledMenuView *_view;
@property (retain, nonatomic) NSArray *menuItems;
@property (nonatomic) double menuItemSpacing;
@property (nonatomic) struct CGSize { double x0; double x1; } menuItemSize;
@property (nonatomic) long long displayStyle;
@property (readonly, nonatomic) AXVStyledMenuView *menuView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } menuViewFrame;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)_addToWindow;
- (void)setMenuTargetOrigin:(struct CGPoint { double x0; double x1; })a0;

@end
