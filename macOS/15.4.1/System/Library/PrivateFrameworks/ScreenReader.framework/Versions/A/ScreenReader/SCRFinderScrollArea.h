@class NSArray, SCRElement;

@interface SCRFinderScrollArea : SCRScrollArea {
    BOOL _isDesktop;
    SCRElement *_iconContainer;
    NSArray *_previousSelectionUIElements;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (id)iconContainer;
- (id)containerDescription;
- (BOOL)isWindow;
- (BOOL)isMain;
- (void)setIsMain:(BOOL)a0;
- (void)setPreviousSelectionUIElements:(id)a0;
- (BOOL)syncKBFocusToVOCursorWithOutputRequest:(id)a0 playSound:(BOOL)a1 withSelection:(BOOL)a2;
- (BOOL)canHandleSelectedChildrenChange;
- (BOOL)isFinderDesktop;
- (BOOL)_moveFirstInDesktopWithEvent:(id)a0 request:(id)a1;
- (BOOL)_moveLastInDesktopWithEvent:(id)a0 request:(id)a1;
- (id)_newIconContainer;
- (void)addItemDescriptionToRequest:(id)a0;
- (BOOL)addKeyboardSelectionSummaryToRequest:(id)a0;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (BOOL)canStopInteracting;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (void)echoCurrentSelectionWithQueueID:(id)a0 interruptsRequests:(BOOL)a1 excludingIdentifiers:(id)a2;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)focusOntoUIElement:(id)a0 withScrolling:(BOOL)a1 withSelection:(BOOL)a2;
- (void)handleSelectionChange:(id)a0;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)linkedUIElementsForChild:(id)a0;
- (void)makeFrontmost:(id)a0;
- (void)makeKeyElement;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (id)previousSelectionUIElements;
- (void)setFocusedChild:(id)a0;
- (void)setIsInteracting:(BOOL)a0;
- (void)setKeyboardChild:(id)a0;
- (BOOL)startWindowContentFeedback:(id)a0;
- (BOOL)synchKeyboardToVOCursor:(id)a0;
- (id)uiElementToObserveSelectionChange;
- (id)uiSelectedChildrenElements;

@end
