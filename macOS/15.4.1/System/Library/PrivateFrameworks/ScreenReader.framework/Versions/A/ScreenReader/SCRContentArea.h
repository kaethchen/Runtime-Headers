@interface SCRContentArea : SCRTextField

@property (nonatomic) BOOL supportsAccessibilityTextInsertionAndDeletion;

- (id)typeDescription;
- (void)_selectionDidChange:(id)a0;
- (BOOL)isKeyboardChild;
- (id)_adjustCategoryOrderArray:(id)a0;
- (void)_moveToChildElement:(id)a0 request:(id)a1;
- (void)_sendBrailleLineWithCurrentSelectionForRange:(id)a0;
- (void)_updateFocusedChildFromSelectionChange;
- (void)addElementSummaryToRequest:(id)a0;
- (void)addItemDescriptionForEndInteractionToRequest:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)addItemNameContentToRequest:(id)a0;
- (BOOL)canNavigateToChildren;
- (id)currentSelectionElement;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)keyboardHandler:(id)a0 request:(id)a1;
- (BOOL)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToNextChildElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToPreviousChildElementWithEvent:(id)a0 request:(id)a1;
- (void)prepareBrailleItemDescriptionForRequest:(id)a0 hasBrailleFocus:(BOOL)a1;
- (void)setFocusedChild:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;

@end
