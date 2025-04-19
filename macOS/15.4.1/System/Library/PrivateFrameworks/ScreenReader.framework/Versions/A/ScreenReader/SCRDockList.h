@class NSString, NSMutableArray;

@interface SCRDockList : SCRList {
    BOOL _isTabDock;
    NSMutableArray *_dockItemsReorderList;
    NSString *_startingDockItemEquivalenceTag;
    NSString *_endingDockItemEquivalenceTag;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)isStack;
- (void)_delayedEchoCurrentSelection;
- (BOOL)_handleDockItemReorder:(id)a0;
- (BOOL)_moveFirstInDockWithEvent:(id)a0 request:(id)a1;
- (BOOL)_moveLastInDockWithEvent:(id)a0 request:(id)a1;
- (void)_updateDockItemsReorderList;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)childrenShouldAddIndexToDescription;
- (void)echoCurrentSelectionWithQueueID:(id)a0 interruptsRequests:(BOOL)a1 excludingIdentifiers:(id)a2;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)handleReadContentsCallbackForEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (void)handleSelectionChange:(id)a0;
- (BOOL)handleTaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)shouldSynchVOCursorToSelectionChange;
- (BOOL)startWindowContentFeedback:(id)a0;
- (void)synchVOCursorToSelectedUIElement:(id)a0;
- (BOOL)tabDockSelectionChanged;

@end
