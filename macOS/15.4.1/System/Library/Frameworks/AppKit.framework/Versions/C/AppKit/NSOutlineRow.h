@interface NSOutlineRow : NSTableRow

- (id)_accessibilityChildrenWithIndexes:(id)a0;
- (BOOL)_accessibilityDisplaysDisclosureTriangleForRow:(long long)a0;
- (long long)_childrenCount;
- (long long)_outlineTableColumnIndex;
- (id)accessibilityAttributeNames;
- (id)accessibilityDisclosedByRowAttribute;
- (id)accessibilityDisclosedRowsAttribute;
- (id)accessibilityDisclosingAttribute;
- (id)accessibilityDisclosureLevelAttribute;
- (BOOL)accessibilityHasOutlineColumnMockGroupForRow:(long long)a0 column:(long long)a1;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (BOOL)accessibilityIsDisclosedByRowAttributeSettable;
- (BOOL)accessibilityIsDisclosedRowsAttributeSettable;
- (BOOL)accessibilityIsDisclosingAttributeSettable;
- (BOOL)accessibilityIsDisclosureLevelAttributeSettable;
- (BOOL)accessibilityPerformShowAlternateUI;
- (BOOL)accessibilityPerformShowDefaultUI;
- (id)accessibilityRoleAttribute;
- (void)accessibilitySetDisclosingAttribute:(id)a0;
- (id)accessibilitySubroleAttribute;
- (BOOL)isAccessibilityAlternateUIVisible;

@end
