@interface SCRCollectionItem : SCRGroup

@property (readonly, nonatomic) BOOL _collectionItemShouldDeferMovementToSection;

- (id)roleDescription;
- (id)onlyChild;
- (id)_collectionItemSection;
- (BOOL)allowFocusThroughSingleChild;
- (void)autoDrillAddBorderCrossIfNecessary:(long long)a0 request:(id)a1 oldFocusedElement:(id)a2;
- (BOOL)includeChildrenActions;
- (BOOL)moveOutWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)setSingleSelectionWithRequest:(id)a0;
- (BOOL)shouldAutoSyncKeyboardFocus;
- (BOOL)toggleMultipleSelectionWithRequest:(id)a0;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;

@end
