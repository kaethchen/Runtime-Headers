@interface NSAccessibilityReparentingProxy : NSAccessibilityProxy {
    id _realElement;
    id _fauxParent;
}

+ (id)proxyFor:(id)a0 fauxParent:(id)a1;

- (void)dealloc;
- (id)description;
- (id)accessibilityParentAttribute;
- (id)initWithElement:(id)a0 fauxParent:(id)a1;
- (id)realElement;

@end
