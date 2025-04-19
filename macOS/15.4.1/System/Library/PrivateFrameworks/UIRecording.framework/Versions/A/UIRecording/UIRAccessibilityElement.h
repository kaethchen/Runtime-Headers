@class NSString;

@interface UIRAccessibilityElement : NSObject {
    struct __AXUIElement { } *_ref;
    NSString *_name;
}

+ (id)accessibilityElementWithEventRecordsStack:(id)a0 forProcess:(id)a1 error:(id *)a2;

- (id)name;
- (void)setName:(id)a0;
- (id)parent;
- (struct CGSize { double x0; double x1; })size;
- (id)attributeNames;
- (id)children;
- (struct CGPoint { double x0; double x1; })position;
- (id)title;
- (id)valueForAttribute:(id)a0;
- (struct __AXUIElement { } *)ref;
- (void)setRef:(struct __AXUIElement { } *)a0;
- (id)valuesForAttribute:(id)a0;
- (id)actionNames;
- (id)descriptionForAction:(id)a0;
- (struct CGPoint { double x0; double x1; })centerPosition;
- (id)childMatchingRecord:(id)a0;

@end
