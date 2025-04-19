@class SCRElement;

@interface SCRWebAreaBookendGroup : SCRElement <SCRWebElementAutoDrillAndAnnounceNavigationProtocol> {
    long long _childIndex;
    SCRElement *_readContentsElement;
}

+ (void)addStartBookendDescription:(id)a0 toRequest:(id)a1;

- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)isInteractive;
- (void)_setChildIndex:(long long)a0;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (void)scrollToElement;
- (long long)_childIndex;
- (BOOL)_isVideoWithSource;
- (void)_rebuildElementOnSameLevel;
- (void)_setReadContentsElement:(id)a0;
- (BOOL)_treatAsEmptyGroup;
- (void)addBorderCrossedDescriptionToRequest:(id)a0 forDirection:(long long)a1;
- (void)addContentToRequest:(id)a0 visibleOnly:(BOOL)a1;
- (void)addEndBookendToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addStartBookendToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (BOOL)canWrapWhileNavigating;
- (id)childInAXOrderForward:(BOOL)a0 horizontal:(BOOL)a1 visibleOnly:(BOOL)a2 wrapped:(BOOL *)a3 didHitBoundary:(BOOL *)a4 startElement:(id)a5;
- (id)childrenInReadContentsOrder;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (void)endFocus;
- (id)firstChildForFocusing;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)focusOntoAutoDrillAndAnnouceWebElement:(id)a0;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (void)forgetReadContentsElement;
- (long long)groupBehavior;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)isDepthLevelElement;
- (id)lastChildForFocusing;
- (void)moveToElement:(id)a0 withEvent:(id)a1 allowAutoFocusToChildren:(BOOL)a2;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)needToRebuildChildren;
- (id)prepareArrayToFocusInto;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)a0;
- (id)readContentsElement;
- (unsigned long long)readContentsElementCount;
- (void)restoreStateDueToInvalidFocusedChild:(id)a0;
- (void)setFocusedChild:(id)a0;
- (BOOL)shouldMapElement:(id)a0;
- (BOOL)shouldNavigate;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (id)titleDescription;
- (BOOL)webElementSuperInteractDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractUpWithEvent:(id)a0 request:(id)a1;

@end
