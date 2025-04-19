@class NSToolbarItemViewer;

@interface _NSToolbarItemViewerAccessibilityHelper : NSObject {
    NSToolbarItemViewer *_toolbarItemViewer;
    long long _configuration;
}

+ (id)accessibilityHelperForToolbarItemViewer:(id)a0;

- (void)dealloc;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilityTitleAttribute;
- (id)accessibilityValueAttribute;
- (id)initWithToolbarItemViewer:(id)a0;

@end
