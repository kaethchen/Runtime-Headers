@class NSString;

@interface CalUIAXScrollView : NSScrollView

@property BOOL accessibiltyIgnoredForNodeAndChildren;
@property BOOL accessibiltyIgnoredForNode;
@property (retain) NSString *axRoleDescription;

- (id)init;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (BOOL)isAccessibilityElement;

@end
