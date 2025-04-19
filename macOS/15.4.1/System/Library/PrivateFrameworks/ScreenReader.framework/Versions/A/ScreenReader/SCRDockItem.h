@interface SCRDockItem : SCRButton {
    unsigned long long _dockListIndex;
}

- (BOOL)isEnabled;
- (id)typeDescription;
- (BOOL)isSelected;
- (id)statusDescription;
- (void)_jumpToStacks;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addItemStatusToRequest:(id)a0;
- (unsigned long long)dockListIndex;
- (double)dropWaitTime;
- (BOOL)gestureTrackingMovesSelectionToVOC;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)makeFrontmost:(id)a0;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (unsigned int)windowIdentifierAndTopLevelUIElement:(id *)a0;

@end
