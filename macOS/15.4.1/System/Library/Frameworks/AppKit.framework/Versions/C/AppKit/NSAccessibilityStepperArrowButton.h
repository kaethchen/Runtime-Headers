@interface NSAccessibilityStepperArrowButton : NSAccessibilityMockUIElement {
    BOOL _increments;
}

+ (id)decrementButtonWithParent:(id)a0;
+ (id)incrementButtonWithParent:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)increments;
- (id)initWithIncrements:(BOOL)a0 parent:(id)a1;

@end
