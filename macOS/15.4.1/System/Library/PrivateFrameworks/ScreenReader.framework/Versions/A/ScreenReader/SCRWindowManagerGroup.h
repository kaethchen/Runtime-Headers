@interface SCRWindowManagerGroup : SCRGroup

- (BOOL)moveToAdjacentSiblingElementMovingForward:(BOOL)a0 withEvent:(id)a1 request:(id)a2;
- (id)promoteChildren:(id)a0;
- (BOOL)shouldAutoFocusOnChildren;
- (BOOL)shouldMoveToSibling;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;

@end
