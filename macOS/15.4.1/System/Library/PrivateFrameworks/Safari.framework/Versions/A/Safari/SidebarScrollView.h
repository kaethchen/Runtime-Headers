@protocol SidebarScrollViewAccessibilityDelegate;

@interface SidebarScrollView : ScrollViewPlus

@property (weak, nonatomic) id<SidebarScrollViewAccessibilityDelegate> accessibilityDelegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityContents;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_accessibilityElements:(id)a0 withDelegateChildren:(id)a1;

@end
