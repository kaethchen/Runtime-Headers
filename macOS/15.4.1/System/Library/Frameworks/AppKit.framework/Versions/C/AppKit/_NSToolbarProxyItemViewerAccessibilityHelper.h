@interface _NSToolbarProxyItemViewerAccessibilityHelper : _NSToolbarItemViewerAccessibilityHelper {
    id _realElement;
}

- (void)dealloc;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilityTitleAttribute;
- (id)accessibilityValueAttribute;
- (id)realElement;
- (BOOL)showsAccessibilityDescriptionInIconOnlyMode;

@end
