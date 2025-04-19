@class NSPathControlItem;

@interface NSAccessibilityPathComponent : NSAccessibilityIndexedMockUIElement {
    NSPathControlItem *_pathItem;
}

+ (id)pathComponentWithPathControlItem:(id)a0 index:(long long)a1 parent:(id)a2;

- (void)dealloc;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (BOOL)accessibilityIsURLAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityURLAttribute;
- (id)accessibilityValueAttribute;
- (id)initWithPathControlItem:(id)a0 index:(long long)a1 parent:(id)a2;
- (id)pathComponentCell;
- (id)pathItem;

@end
