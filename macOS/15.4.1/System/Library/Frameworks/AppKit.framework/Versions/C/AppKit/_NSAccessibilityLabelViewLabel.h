@interface _NSAccessibilityLabelViewLabel : NSAccessibilityIndexedMockUIElement

+ (id)labelWithIndex:(long long)a0 parent:(id)a1;

- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityValueAttribute;

@end
