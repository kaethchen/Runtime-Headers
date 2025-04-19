@interface SCRSplitter : SCRElement {
    BOOL _isVertical;
    double _previousValue;
    double _previousValuePercentage;
    long long _precisionUsedForValue;
}

- (id)typeDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)isVertical;
- (id)statusDescription;
- (BOOL)isInteractive;
- (id)_maxValue;
- (id)_minValue;
- (BOOL)_increment;
- (BOOL)_end;
- (id)axDescription;
- (BOOL)_decrementSmall;
- (BOOL)_incrementSmall;
- (long long)brailleLineType;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)_decrementLarge;
- (BOOL)_incrementLarge;
- (BOOL)_decrement;
- (BOOL)_decrementWithPercentage:(double)a0;
- (BOOL)_home;
- (BOOL)_incrementWithPercentage:(double)a0;
- (id)_valueDescriptionForElementSummary;
- (double)_valuePercentage;
- (void)addElementSummaryToRequest:(id)a0;
- (void)appendDisabledStatusDescription:(id)a0;
- (BOOL)canHandleValueChange;
- (BOOL)canNavigateToChildren;
- (unsigned long long)directInteractionArrowCaptureMask;
- (void)echoValueChangeToRequest:(id)a0;
- (long long)groupBehavior;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)handleRotorAdjustWithEvent:(id)a0 direction:(long long)a1 request:(id)a2;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)isAdjustable;
- (BOOL)isControlElement;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;

@end
