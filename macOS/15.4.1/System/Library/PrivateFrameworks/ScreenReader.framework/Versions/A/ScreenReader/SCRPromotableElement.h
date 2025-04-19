@interface SCRPromotableElement : SCRMapElement

@property (nonatomic) BOOL handlingBeginFocus;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)shouldMap;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)highlightTarget;
- (void)addItemDescriptionForCommand:(id)a0 toRequest:(id)a1 event:(id)a2;
- (void)addToHistory;
- (BOOL)allowFocusThroughSingleChild;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (BOOL)canWrapWhileNavigating;
- (void)endFocus;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)shouldThrottleNavigationEvent:(id)a0;

@end
