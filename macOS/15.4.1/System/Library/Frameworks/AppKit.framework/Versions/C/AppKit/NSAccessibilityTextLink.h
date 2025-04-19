@interface NSAccessibilityTextLink : NSAccessibilityMockUIElement {
    struct _NSRange { unsigned long long location; unsigned long long length; } _characterRange;
}

+ (id)linkWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 parent:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)accessibilityActionDescription:(id)a0;
- (id)_parentAttributedString;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (BOOL)accessibilityIsURLAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityTitleAttribute;
- (id)accessibilityURLAttribute;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRange;
- (id)initWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 parent:(id)a1;

@end
