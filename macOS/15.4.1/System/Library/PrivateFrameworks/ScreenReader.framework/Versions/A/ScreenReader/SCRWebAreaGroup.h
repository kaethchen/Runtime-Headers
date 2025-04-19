@interface SCRWebAreaGroup : SCRMapElement

- (id)statusDescription;
- (BOOL)shouldMap;
- (id)_addBusyStatusDescriptionToStatusIfNeeded:(id)a0;
- (BOOL)_addContainerSummaryToRequest:(id)a0;
- (BOOL)_navigateInDirection:(id)a0 request:(id)a1 forward:(BOOL)a2 horizontal:(BOOL)a3 forceWrapping:(BOOL)a4 allowSuperToHandle:(BOOL *)a5;
- (void)addElementSummaryToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (id)childInAXOrderForward:(BOOL)a0 horizontal:(BOOL)a1 visibleOnly:(BOOL)a2 wrapped:(BOOL *)a3 didHitBoundary:(BOOL *)a4 startElement:(id)a5;
- (id)firstChildForFocusing;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)isGestureContainerElement;
- (id)lastChildForFocusing;
- (BOOL)needToRebuildChildren;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)prepareArrayToFocusInto;
- (BOOL)shouldMapElement:(id)a0;
- (BOOL)shouldPromoteForMovingUIElement:(id)a0;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (id)visibleChildrenDescriptionIgnoringElements:(id)a0;

@end
