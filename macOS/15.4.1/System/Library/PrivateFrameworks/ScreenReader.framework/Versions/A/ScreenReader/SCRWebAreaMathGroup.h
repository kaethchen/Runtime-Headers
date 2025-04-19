@class AXFUIElement;

@interface SCRWebAreaMathGroup : SCRWebAreaGroup {
    BOOL _useDollarCodeForDescription;
    AXFUIElement *_selectedUIElement;
}

- (void).cxx_destruct;
- (id)roleDescription;
- (BOOL)shouldMap;
- (BOOL)allowStatusEcho;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_brailleNemethSelectionRangeForDescription:(id)a0 uiElement:(id)a1;
- (void)addBrailleMathDescriptionToRequest:(id)a0 withSelectedPosition:(id)a1;
- (void)addItemDescriptionForInteractionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)allowTypeEcho;
- (void)autoDrillAddBorderCrossIfNecessary:(long long)a0 request:(id)a1 oldFocusedElement:(id)a2;
- (id)brailleCategoryOrderArray;
- (long long)groupBehavior;
- (id)mathType;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;

@end
