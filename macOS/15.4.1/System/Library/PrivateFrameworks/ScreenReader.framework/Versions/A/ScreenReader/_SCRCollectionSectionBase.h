@interface _SCRCollectionSectionBase : SCRList

- (BOOL)_collectionShouldFocusThroughSingleChild;
- (BOOL)_moveToContentSibling:(id)a0;
- (BOOL)_moveToContentSiblingAbove;
- (BOOL)_moveToContentSiblingBelow;
- (BOOL)_moveToFirstContentSibling;
- (BOOL)_moveToLastContentSibling;
- (BOOL)_moveToNextContentSibling;
- (BOOL)_moveToPreviousContentSibling;
- (BOOL)_shouldUseCollectionSpecificFocusBehavior;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (BOOL)handleLayoutChangeWithInfo:(id)a0;
- (void)handleSelectionChange:(id)a0;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)shouldPromoteForMovingUIElement:(id)a0;
- (long long)unpromotableDescendantsCount;

@end
