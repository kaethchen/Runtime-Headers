@interface NSAccessibilitySegment : NSAccessibilityIndexedMockUIElement

+ (id)segmentWithIndex:(long long)a0 parent:(id)a1;

- (id)accessibilityActionDescription:(id)a0;
- (void)_accessibilityPerformClickAction:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityFocusedAttribute;
- (id)accessibilityIdentifierAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilityValueAttribute;
- (id)initWithIndex:(long long)a0 parent:(id)a1;
- (id)segmentedCell;

@end
