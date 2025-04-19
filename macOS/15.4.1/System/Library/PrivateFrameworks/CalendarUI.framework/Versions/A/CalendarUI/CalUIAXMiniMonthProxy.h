@class NSView;
@protocol CalUIAXMiniMonthProxyDelegate;

@interface CalUIAXMiniMonthProxy : NSAccessibilityElement

@property (weak) NSView<CalUIAXMiniMonthProxyDelegate> *delegate;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)accessibilityChildren;
- (long long)accessibilityColumnCount;
- (id)accessibilityFocusedUIElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (long long)accessibilityRowCount;
- (id)accessibilitySelectedChildren;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityWindow;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityOrderedByRow;
- (id)axChildren;
- (id)axSelectedChildren;

@end
