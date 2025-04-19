@class NSString;

@interface NSAccessibilityImageMockUIElement : NSAccessibilityIndexedMockUIElement {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    NSString *_description;
    NSString *_help;
}

- (void)dealloc;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySizeAttribute;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithParent:(id)a0 index:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 description:(id)a3 help:(id)a4;

@end
