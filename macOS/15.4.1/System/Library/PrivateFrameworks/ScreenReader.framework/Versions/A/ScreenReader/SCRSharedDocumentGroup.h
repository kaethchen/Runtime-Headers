@interface SCRSharedDocumentGroup : SCRGroup

- (BOOL)_moveToNextPageInForwardDirection:(BOOL)a0;
- (id)firstChildForFocusing;
- (BOOL)handleReachingBoundaryForEvent:(id)a0 forward:(BOOL)a1 request:(id)a2;
- (BOOL)isContainerElement;
- (BOOL)isSectionView;
- (BOOL)moveDownWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)moveFirstWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)moveLastWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)moveUpWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)shouldFocusOntoChild:(id)a0;

@end
