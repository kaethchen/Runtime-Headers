@class NSMutableString, SCRElement;

@interface SCRTextField : SCRStandardText {
    NSMutableString *_content;
    SCRElement *_suggestionsMenuElement;
    long long _cachedInvalidStatus;
}

@property (nonatomic) unsigned char _isTextFieldWithIncrementor;
@property (nonatomic) BOOL _isPasscodeDisplayBox;
@property (nonatomic) BOOL _registeredSuggestionsMenuDestroyedNotification;
@property (nonatomic) BOOL isStatic;
@property (nonatomic) BOOL isSearchField;
@property (nonatomic) BOOL isSecureTextField;

- (void)dealloc;
- (void).cxx_destruct;
- (id)value;
- (id)typeDescription;
- (id)stringForRange:(id)a0;
- (BOOL)isEditable;
- (BOOL)isDisabled;
- (id)valueDescription;
- (BOOL)isClickable;
- (id)statusDescription;
- (id)helpDescription;
- (unsigned long long)numberOfCharacters;
- (BOOL)isStaticText;
- (unsigned long long)cachedNumberOfCharacters;
- (void)clearCachedValue;
- (id)_interactableChildrenToTheRight;
- (BOOL)_hasContentChangedWithNewValue:(id)a0;
- (id)_attributedStringForUIElementRange;
- (void)_elementWasCreated:(id)a0;
- (BOOL)_handleTextContentChange;
- (id)_interactableChildrenToTheLeft;
- (void)_invalidInputChanged:(id)a0;
- (BOOL)_isDescendantOfWebArea;
- (id)_newTextValue;
- (unsigned long long)_numberOfCharactersForSecureText;
- (BOOL)_registerSharedFocusUIElement:(id)a0 createdUIElement:(id)a1;
- (void)_resetCursorFromTextChange;
- (BOOL)_shouldGenerateFallbackLinkedUIElement;
- (BOOL)_shouldIgnoreEvent:(id)a0;
- (void)_suggestionMenuWasDestroyed:(id)a0;
- (void)addElementSummaryToRequest:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addTextBoundryToRequest:(id)a0 edge:(long long)a1;
- (BOOL)addTextSelectionDescriptionToRequest:(id)a0;
- (void)addValueToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (id)attributedValueDescription;
- (struct __AXTextMarker { } *)axTextMarkerRefForIndex:(unsigned long long)a0;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)defersKeyboardFocusUntilEditingStarts;
- (void)echoContentChange;
- (id)getIncrementorChild;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)interactableChildren;
- (BOOL)isControlElement;
- (BOOL)isSearchOrSecureText;
- (BOOL)isTextFieldWithIncrementor;
- (id)linkedUIElementsAllowFallback:(BOOL)a0;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)readContentUsingCallback;
- (void)readCurrentStyleInfo:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (id)shortInstruction;
- (BOOL)shouldOutputClickableState;
- (id)titleDescription;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;

@end
