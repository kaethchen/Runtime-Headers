@interface SCRSection : _SCRCollectionSectionBase

- (id)onlyChild;
- (unsigned long long)indexOfElement:(id)a0;
- (BOOL)_moveToContentSibling:(id)a0;
- (void)addItemDescriptionForEndInteractionToRequest:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)childrenShouldAddIndexToDescription;
- (unsigned long long)directInteractionArrowCaptureMask;
- (id)elementToSpeakAfterMove;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)moveOutWithEvent:(id)a0 request:(id)a1;
- (BOOL)needToRebuildChildren;
- (unsigned long long)numberOfChildren:(BOOL)a0;
- (void)setBrailleLineWithFocusedElement:(id)a0 forceRebuild:(BOOL)a1;
- (BOOL)setSingleSelectionWithRequest:(id)a0;
- (id)uiElementForAccessibilitySelectedChildren;

@end
