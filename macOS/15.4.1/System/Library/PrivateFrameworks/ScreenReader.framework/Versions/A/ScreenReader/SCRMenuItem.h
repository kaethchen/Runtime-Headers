@class AXFUIElement;

@interface SCRMenuItem : SCRMapElement {
    struct CGPoint { double x; double y; } _cachedMidPoint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uiElementLock;
}

@property (retain, setter=setUIElement:) AXFUIElement *uiElement;

- (id)description;
- (id)typeDescription;
- (BOOL)hasSubmenu;
- (BOOL)isSelected;
- (id)valueDescription;
- (id)statusDescription;
- (id)defaultActionName;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)_hasInteractiveElementsInArray:(id)a0;
- (BOOL)parentIsMenubar;
- (void)_addKeyboardShortcutToRequest:(id)a0;
- (void)_addString:(id)a0 toRequest:(id)a1 category:(id)a2 variants:(id)a3;
- (id)_containerOfInteractiveDescendants;
- (BOOL)_hasInteractiveDescendants;
- (BOOL)_hasNavigableChildrenInArray:(id)a0;
- (BOOL)_isInlinePalette;
- (void)addElementSummaryToRequest:(id)a0;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (void)addItemDescriptionForCommand:(id)a0 toRequest:(id)a1 event:(id)a2;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (id)contextualHelpToSpeak;
- (unsigned long long)directInteractionArrowCaptureMask;
- (void)endFocus;
- (BOOL)focusIntoMenuWithRequest:(id)a0;
- (BOOL)gestureTrackingMovesSelectionToVOC;
- (long long)groupBehavior;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)handleReadValueChangeCallbackForEvent:(id)a0 request:(id)a1;
- (BOOL)hasNavigableChildren;
- (void)highlightWithScrolling:(BOOL)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)insideOfDescriptionForContextualHelp;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)isMenuBarItem;
- (BOOL)isSubMenuVisible;
- (BOOL)itemDescriptionHasChanged;
- (BOOL)monitorItemDescriptionChanges;
- (void)outputChildrenSummary:(id)a0;
- (id)shortInstruction;
- (id)shortcutSelectionElements;
- (BOOL)synchVOCursorToKeyboard:(id)a0;
- (id)titleDescription;

@end
