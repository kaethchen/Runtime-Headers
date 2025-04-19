@class NSMenuExtra;

@interface NSMenuExtraAccessibilityElement : NSAccessibilityElement {
    NSMenuExtra *_menuExtra;
}

- (id)accessibilityChildren;
- (id)accessibilityFocusedUIElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformCancel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (id)accessibilitySubrole;
- (id)accessibilityTitle;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityValue;
- (id)accessibilityWindow;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityFocused;
- (BOOL)isAccessibilitySelected;
- (void)setAccessibilitySelected:(BOOL)a0;
- (id)initWithMenuExtra:(id)a0;

@end
