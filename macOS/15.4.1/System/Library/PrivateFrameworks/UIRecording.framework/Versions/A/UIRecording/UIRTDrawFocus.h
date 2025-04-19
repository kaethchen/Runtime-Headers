@class NSString, NSWindow, NSDictionary;

@interface UIRTDrawFocus : NSObject {
    NSWindow *_focusWindow;
    NSWindow *_actionsWindow;
    NSString *_selectedAction;
    NSDictionary *_focusAttributes;
    int _selectedActionIndex;
}

+ (id)initialValues;

- (void)clear;
- (id)selectedAction;
- (void)setSelectedAction:(id)a0;
- (void)removeFocus;
- (id)focusAttributes;
- (id)_createActionsWindowForUIElement:(struct __AXUIElement { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForUIElementSize:(struct CGSize { double x0; double x1; })a0 position:(struct CGPoint { double x0; double x1; })a1 coachMarkKind:(int)a2;
- (void)_setFocusAttributes:(id)a0;
- (void)_setFocusForUIElement:(struct __AXUIElement { } *)a0;
- (void)createHighlightWindow:(struct __AXUIElement { } *)a0;
- (void)drawFocusAroundElement:(struct __AXUIElement { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusBounds;
- (void)hideActionsWindow;
- (void)selectNextAction;
- (void)showActionsWindow;

@end
