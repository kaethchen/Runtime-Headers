@interface SCRComboBox : SCRTextField {
    BOOL _isPasswordSuggestionComboBox;
}

- (id)typeDescription;
- (id)defaultActionName;
- (BOOL)isComboBox;
- (void)_elementWasDestroyed:(id)a0;
- (BOOL)addLinkedUIElementDescriptionToRequest:(id)a0;
- (BOOL)canHandleEchoContentChange;
- (BOOL)canHandleTextSelectionChange;
- (BOOL)canHandleTextValueChange;
- (BOOL)canHandleValueChange;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)isControlElement;
- (BOOL)isPasswordSuggestionComboBox;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;

@end
