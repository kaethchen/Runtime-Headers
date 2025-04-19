@interface NSAccessibilityIndexedMockUIElement : NSAccessibilityMockUIElement {
    long long _index;
}

+ (id)elementWithRole:(id)a0 index:(long long)a1 parent:(id)a2;
+ (id)elementWithRole:(id)a0 subrole:(id)a1 index:(long long)a2 parent:(id)a3;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)index;
- (id)accessibilityParentViewAndGetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)associatedAccessibilityLabel;
- (id)initWithRole:(id)a0 index:(long long)a1 parent:(id)a2;
- (id)initWithRole:(id)a0 subrole:(id)a1 index:(long long)a2 parent:(id)a3;
- (void)setAssociatedAccessibilityLabel:(id)a0;

@end
