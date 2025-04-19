@protocol UnifiedTabBarAccessibilityElementDelegate;

@interface UnifiedTabBarAccessibilityElement : NSAccessibilityElement

@property (weak) id<UnifiedTabBarAccessibilityElementDelegate> delegate;

- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityLabel;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRole;
- (id)accessibilitySubrole;
- (id)accessibilityValue;
- (id)initWithDelegate:(id)a0 accessibilityFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 accessibilityLabel:(id)a2 accessibilityIndex:(unsigned long long)a3;

@end
