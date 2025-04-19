@interface NSAccessibilityReparentingCellProxy : NSAccessibilityReparentingProxy

- (id)accessibilityBoundsForRangeAttributeForParameter:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityLineForIndexAttributeForParameter:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRangeForLineAttributeForParameter:(id)a0;
- (id)accessibilityRangeForPositionAttributeForParameter:(id)a0;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilitySizeAttribute;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityVisibleCharacterRangeAttribute;
- (id)accessibilityWindowAttribute;
- (BOOL)hasEditor;

@end
