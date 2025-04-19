@class NSString;

@interface NSAccessibilityMockUIElement : NSAccessibilityElement {
    NSString *_role;
    NSString *_subrole;
    id _parent;
}

+ (id)elementWithRole:(id)a0 subrole:(id)a1 parent:(id)a2;
+ (id)elementWithRole:(id)a0 parent:(id)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedAttribute;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHelpAttribute;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityHorizontalUnitDescriptionAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsParentAttributeSettable;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilitySizeAttribute;
- (id)accessibilitySubroleAttribute;
- (BOOL)accessibilitySupportsOverriddenAttributes;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityVerticalUnitDescriptionAttribute;
- (id)accessibilityWindowAttribute;
- (id)initWithRole:(id)a0 parent:(id)a1;
- (id)initWithRole:(id)a0 subrole:(id)a1 parent:(id)a2;

@end
