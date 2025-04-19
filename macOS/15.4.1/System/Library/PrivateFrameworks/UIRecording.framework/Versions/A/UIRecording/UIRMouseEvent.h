@interface UIRMouseEvent : UIREvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })location;
- (id)topLevelUIElement;
- (id)actionNames;
- (id)childrenStack;
- (id)baseLevelUIElement;
- (struct __CGEvent { } *)cgEventToPostToProcess:(id)a0 withLastEvent:(id)a1 withLastCGEvent:(struct __CGEvent { } *)a2 error:(id *)a3;
- (id)descriptionFormatString;
- (BOOL)hasElementPosition;
- (BOOL)hasSameChildrenStackAsEvent:(id)a0;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0 withAccessibilityElement:(id)a1;
- (struct CGPoint { double x0; double x1; })positionWithElement:(id)a0;
- (id)processTitle;
- (BOOL)uiElementInMenuBar;

@end
