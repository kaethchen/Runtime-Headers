@interface SCRHandle : SCRMapElement {
    long long _movementOffset;
}

- (BOOL)isInteractive;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)descriptionForSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (BOOL)_moveByOffset:(long long)a0 vertically:(BOOL)a1 request:(id)a2;
- (void)addAdditionalElementSummaryToRequest:(id)a0;
- (long long)groupBehavior;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)isAdjustable;

@end
