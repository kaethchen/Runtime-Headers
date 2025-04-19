@protocol SidebarSearchFieldDelegate;

@interface SidebarSearchField : NSSearchField

@property (weak, nonatomic) id<SidebarSearchFieldDelegate> sidebarSearchFieldDelegate;
@property (weak, nonatomic) id accessibilityOverrideParent;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilityParent;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_sidebarSearchFieldInit;

@end
