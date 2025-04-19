@class NSArray;

@interface SCRGroup : SCRMapElement {
    NSArray *_previousSelectionUIElements;
}

- (void).cxx_destruct;
- (void)addActionDescription:(id)a0 toRequest:(id)a1;
- (void)setPreviousSelectionUIElements:(id)a0;
- (BOOL)alwaysAllowDrag;
- (BOOL)_supportsAlternateUIAction;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)canNavigateToChildren;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (long long)groupBehavior;
- (BOOL)includeChildrenActions;
- (BOOL)isContainerElement;
- (BOOL)moveToBookmarkInDirection:(long long)a0 withEvent:(id)a1 request:(id)a2;
- (BOOL)needToRebuildChildren;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(BOOL)a1;
- (id)previousSelectionUIElements;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)shouldTrackKeyboardOnFocusInto;

@end
