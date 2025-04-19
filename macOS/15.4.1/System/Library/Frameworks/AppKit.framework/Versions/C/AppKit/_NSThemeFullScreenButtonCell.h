@interface _NSThemeFullScreenButtonCell : NSButtonCell

- (BOOL)_hasRolloverContentArt;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleDescriptionAttribute;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityTitleAttribute;
- (unsigned long long)bezelStyle;
- (void)drawBezelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (long long)interiorBackgroundStyle;

@end
