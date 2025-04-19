@interface SCRSeparatorDockItem : SCRSlider

- (id)typeDescription;
- (BOOL)decrement;
- (BOOL)increment;
- (id)maxValue;
- (id)minValue;
- (id)valueDescription;
- (BOOL)isInteractive;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)decrementLarge;
- (BOOL)decrementSmall;
- (BOOL)decrementWithPercentage:(double)a0;
- (long long)groupBehavior;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)incrementLarge;
- (BOOL)incrementSmall;
- (BOOL)incrementWithPercentage:(double)a0;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (id)interactionValueDescription;
- (double)maxFloatValue;
- (double)minFloatValue;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)supportsMaxFloatValue;
- (BOOL)supportsMinFloatValue;

@end
