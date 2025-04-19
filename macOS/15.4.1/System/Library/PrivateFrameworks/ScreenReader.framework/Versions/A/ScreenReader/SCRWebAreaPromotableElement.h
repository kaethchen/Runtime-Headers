@class NSArray, SCRElement;

@interface SCRWebAreaPromotableElement : SCRPromotableElement {
    unsigned long long _childIndex;
    SCRElement *_readContentsElement;
    NSArray *_stitchedTextElements;
    long long _childrenCount;
}

- (void).cxx_destruct;
- (id)children:(BOOL)a0;
- (void)_setChildIndex:(long long)a0;
- (long long)brailleLineType;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (void)_addFirstChildDescription:(id)a0 itemCount:(long long)a1 toRequest:(id)a2;
- (BOOL)_autoDrillShouldAnnounceBorderCross;
- (long long)_childIndex;
- (id)_itemCountOutputAfterFirstChildDescription:(long long)a0;
- (void)_setReadContentsElement:(id)a0;
- (void)_updateChildrenCountAndStitchedText;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)allowMappingIfZeroSize;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (BOOL)canWrapWhileNavigating;
- (id)childAtIndex:(unsigned long long)a0 visibleOnly:(BOOL)a1;
- (id)childInAXOrderForward:(BOOL)a0 horizontal:(BOOL)a1 visibleOnly:(BOOL)a2 wrapped:(BOOL *)a3 didHitBoundary:(BOOL *)a4 startElement:(id)a5;
- (id)childrenInReadContentsOrder;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (BOOL)containsStitchedText;
- (BOOL)defersKeyboardHelpCommandsToParent;
- (id)firstChildForFocusing;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (void)forgetReadContentsElement;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (unsigned long long)indexOfElement:(id)a0 visibleOnly:(BOOL)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)isGestureContainerElement;
- (id)lastChildForFocusing;
- (BOOL)moveFirstWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)moveLastWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)needToRebuildChildren;
- (unsigned long long)numberOfChildren:(BOOL)a0;
- (id)prepareArrayToFocusInto;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)a0;
- (id)readContentsElement;
- (unsigned long long)readContentsElementCount;
- (BOOL)shouldIncludeInItemChooser;
- (BOOL)shouldMapElement:(id)a0;
- (BOOL)shouldPromoteForMovingUIElement:(id)a0;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (id)stitchedTextElements;
- (id)visibleChildrenDescriptionIgnoringElements:(id)a0;

@end
