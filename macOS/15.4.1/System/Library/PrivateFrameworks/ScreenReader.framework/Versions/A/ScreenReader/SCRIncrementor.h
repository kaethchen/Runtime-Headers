@class AXFUIElement;

@interface SCRIncrementor : SCRElement {
    AXFUIElement *_incrementUIElement;
    AXFUIElement *_decrementUIElement;
}

- (void).cxx_destruct;
- (id)maxValue;
- (id)minValue;
- (id)valueDescription;
- (BOOL)isInteractive;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (long long)brailleLineType;
- (id)_decrementUIElement;
- (id)_incrementUIElement;
- (BOOL)allowBuildChildren;
- (BOOL)canHandleValueChange;
- (long long)groupBehavior;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)isControlElement;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;

@end
