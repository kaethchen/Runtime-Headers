@interface SCRProgressIndicator : SCRElement {
    double _lastValueChangedTime;
}

- (id)typeDescription;
- (id)maxValue;
- (id)minValue;
- (id)statusDescription;
- (BOOL)_isBusyIndicator;
- (id)_valueForPercentFormatter;
- (BOOL)canHandleValueChange;
- (void)echoValueChangeToRequest:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)listenForValueChangeWithoutKeyboardFocus;

@end
