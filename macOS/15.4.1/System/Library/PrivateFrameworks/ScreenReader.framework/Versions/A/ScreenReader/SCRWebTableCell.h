@class NSArray, SCRElement;

@interface SCRWebTableCell : SCRMapElement <SCRCellElementProtocol> {
    unsigned long long _childIndex;
    NSArray *_stitchedTextElements;
    long long _childrenCount;
    SCRElement *_readContentsElement;
    long long _cachedChildIndex;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (unsigned long long)columnIndex;
- (BOOL)isSelected;
- (unsigned long long)rowIndex;
- (BOOL)requiresInteraction;
- (BOOL)hasChildren;
- (id)spanInfo;
- (id)onlyChild;
- (void)_setChildIndex:(long long)a0;
- (long long)brailleLineType;
- (id)coordinatesInfo;
- (unsigned long long)columnSpanCount;
- (id)highlightTarget;
- (long long)_childIndex;
- (BOOL)_isInTable;
- (void)addContentToRequest:(id)a0 visibleOnly:(BOOL)a1;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (void)addItemDescriptionForEndInteractionToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)allowInteractableElementFeedback;
- (BOOL)allowMappingIfZeroSize;
- (void)appendSortOrderStatusDescription:(id)a0;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (BOOL)canWrapWhileNavigating;
- (id)cellChildrenValueDescriptionsIncludingCaption:(BOOL)a0 updatingMutableVariants:(id)a1;
- (id)childInAXOrderForward:(BOOL)a0 horizontal:(BOOL)a1 visibleOnly:(BOOL)a2 wrapped:(BOOL *)a3 didHitBoundary:(BOOL *)a4 startElement:(id)a5;
- (id)childrenInReadContentsOrder;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (id)columnHeaderDescription;
- (BOOL)containsStitchedText;
- (BOOL)defersKeyboardHelpCommandsToParent;
- (id)emptyCellDescription;
- (void)endFocus;
- (id)firstChildForFocusing;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (void)forgetReadContentsElement;
- (id)fullNameDescription;
- (long long)groupBehavior;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (id)itemDescriptionForEcho;
- (id)lastChildForFocusing;
- (BOOL)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)needToRebuildChildren;
- (id)onlyChildForFocusingIntoInArray:(id)a0;
- (id)parentTable;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)prepareArrayToFocusInto;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)a0;
- (id)readContentsElement;
- (unsigned long long)readContentsElementCount;
- (void)recordStateDueToInvalidFocusedChild;
- (void)restoreStateDueToInvalidFocusedChild:(id)a0;
- (id)rowHeaderDescription;
- (unsigned long long)rowSpanCount;
- (BOOL)shouldIncludeInItemChooser;
- (BOOL)shouldInterceptUpShiftEvent;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (id)stitchedTextElements;
- (id)titleDescription;

@end
