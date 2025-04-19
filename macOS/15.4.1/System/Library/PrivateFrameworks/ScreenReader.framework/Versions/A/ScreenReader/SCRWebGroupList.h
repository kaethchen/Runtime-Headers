@interface SCRWebGroupList : SCRGroup

- (void)addContentToRequest:(id)a0 visibleOnly:(BOOL)a1;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (BOOL)shouldPromoteUIElement:(id)a0;

@end
