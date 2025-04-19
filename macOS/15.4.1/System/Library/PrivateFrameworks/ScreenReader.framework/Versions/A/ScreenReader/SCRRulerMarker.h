@class AXFUIElement;

@interface SCRRulerMarker : SCRElement {
    AXFUIElement *_rulerUIElement;
    struct { unsigned char isHorizontal : 1; unsigned char isOrientationKnown : 1; } _srrFlags;
}

- (void).cxx_destruct;
- (id)typeDescription;
- (float)maxValue;
- (float)minValue;
- (id)valueDescription;
- (BOOL)isInteractive;
- (BOOL)_isHorizontal;
- (BOOL)increment:(float)a0;
- (id)_rulerUIElement;
- (long long)brailleLineType;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)_currentValueDescription;
- (void)_openTabStopSheet;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)decrement:(float)a0;
- (BOOL)deleteTabStopCallbackWithRequest:(id)a0;
- (BOOL)deleteTabStopWithRequest:(id)a0;
- (long long)groupBehavior;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)handleTaggedOperationWithEvent:(id)a0 request:(id)a1;
- (BOOL)handleUntaggedOperationWithEvent:(id)a0 request:(id)a1;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)interactDownBigWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageupWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)isControlElement;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;

@end
