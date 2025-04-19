@interface SCRRadioButton : SCRButton {
    long long _type;
}

- (void)dealloc;
- (id)typeDescription;
- (BOOL)isSelected;
- (id)valueDescription;
- (BOOL)isInteractive;
- (BOOL)isTab;
- (BOOL)canHandleValueChange;
- (id)descriptionForContextualHelp;
- (void)echoValueChangeToRequest:(id)a0;
- (void)handleParentGroupValueChange:(id)a0;
- (BOOL)ignoreValueChangeAfterAction;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)isControlElement;
- (BOOL)isRadioButton;
- (id)itemDescriptionForEcho;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (id)shortInstruction;
- (id)siblingTabUIElements;
- (BOOL)tabOrDrillInShouldTempDisableQuickNav;
- (id)titleElement;
- (BOOL)wantsAutoFocusIn;

@end
