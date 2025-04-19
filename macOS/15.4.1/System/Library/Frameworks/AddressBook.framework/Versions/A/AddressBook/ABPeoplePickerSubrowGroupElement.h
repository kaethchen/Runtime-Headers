@class ABPeoplePickerTableView;

@interface ABPeoplePickerSubrowGroupElement : NSObject

@property (retain) id parent;
@property (weak) ABPeoplePickerTableView *tableView;
@property long long row;

- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityFocusedAttribute;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHelpAttribute;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsParentAttributeSettable;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilitySizeAttribute;
- (id)accessibilitySizeOfChild:(id)a0;
- (id)accessibilityWindowAttribute;
- (struct CGSize { double x0; double x1; })_accessibilitySizeOfChild:(id)a0;
- (id)accessibilitySelectedAttributeOfChild:(id)a0;
- (void)accessibilitySetSelectedAttributeOfChild:(id)a0 toValue:(id)a1;
- (id)initWithParent:(id)a0 tableView:(id)a1 row:(long long)a2;

@end
