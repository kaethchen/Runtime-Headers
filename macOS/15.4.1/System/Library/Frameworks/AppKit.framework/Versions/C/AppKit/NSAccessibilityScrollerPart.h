@interface NSAccessibilityScrollerPart : NSAccessibilityMockUIElement {
    unsigned long long _partCode;
}

+ (id)partWithCode:(unsigned long long)a0 parent:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilitySetValueAttribute:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityValueAttribute;
- (id)initWithPartCode:(unsigned long long)a0 parent:(id)a1;
- (unsigned long long)partCode;

@end
