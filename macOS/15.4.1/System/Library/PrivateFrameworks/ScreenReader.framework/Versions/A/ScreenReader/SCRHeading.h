@interface SCRHeading : SCRMapElement

- (id)typeDescription;
- (id)children;
- (BOOL)isInteractive;
- (void)setKeyboardFocus:(BOOL)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (long long)groupBehavior;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)readContentsElement;
- (BOOL)readyToHaveKeyboardFocus;
- (BOOL)shouldAllowAutoFocusInto;
- (BOOL)shouldSpeakFocusedOnlyChild;

@end
