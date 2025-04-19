@class SCRElement;

@interface SCRWebDomList : SCRElement <SCRWebElementAutoDrillAndAnnounceNavigationProtocol> {
    SCRElement *_firstNavigableElement;
    SCRElement *_lastNavigableElement;
    long long _childIndex;
    SCRElement *_readContentsElement;
}

+ (void)addWebListDescription:(id)a0 toRequest:(id)a1;

- (void).cxx_destruct;
- (id)roleDescription;
- (BOOL)isInteractive;
- (void)_setChildIndex:(long long)a0;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (void)scrollToElement;
- (void)_appendListItemIndexIfNeeded:(id)a0 oldFocusedChild:(id)a1;
- (long long)_childIndex;
- (void)_rebuildElementOnSameLevel;
- (void)_setReadContentsElement:(id)a0;
- (void)addContentToRequest:(id)a0 visibleOnly:(BOOL)a1;
- (void)addEndBookendToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemDescriptionForSearchToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addStartBookendToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (BOOL)canWrapWhileNavigating;
- (id)childInAXOrderForward:(BOOL)a0 horizontal:(BOOL)a1 visibleOnly:(BOOL)a2 wrapped:(BOOL *)a3 didHitBoundary:(BOOL *)a4 startElement:(id)a5;
- (id)childrenInReadContentsOrder;
- (BOOL)childrenShouldAddIndexToDescription;
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
- (BOOL)isContentList;
- (BOOL)isDepthLevelElement;
- (BOOL)isDescriptionList;
- (BOOL)isMenu;
- (BOOL)isWebDomList;
- (id)lastChildForFocusing;
- (void)moveToElement:(id)a0 withEvent:(id)a1 allowAutoFocusToChildren:(BOOL)a2;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)needToRebuildChildren;
- (id)prepareArrayToFocusInto;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)a0;
- (id)readContentsElement;
- (unsigned long long)readContentsElementCount;
- (void)setFocusedChild:(id)a0;
- (BOOL)shouldMapElement:(id)a0;
- (BOOL)shouldNavigate;
- (BOOL)shouldPromoteUIElement:(id)a0;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)trackElementWithGestureEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)webElementSuperInteractUpWithEvent:(id)a0 request:(id)a1;

@end
