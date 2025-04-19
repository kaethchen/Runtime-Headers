@class NSString, SCRElement;

@interface SCRSlider : SCRMapElement {
    long long _orientation;
    SCRElement *_valueIndicator;
}

@property (copy, nonatomic) NSString *valueDescriptionAtLastValueChange;
@property (nonatomic) unsigned char echoState;
@property (nonatomic) BOOL _handlingValueChangeNotification;

- (void)dealloc;
- (id)description;
- (float)floatValue;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)decrement;
- (BOOL)increment;
- (id)maxValue;
- (id)minValue;
- (BOOL)end;
- (long long)orientation;
- (BOOL)home;
- (id)valueDescription;
- (id)statusDescription;
- (BOOL)isInteractive;
- (long long)brailleLineType;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)highlightTarget;
- (id)_defaultLocalizedStringForCommandKey:(id)a0;
- (void)_handleInteractionChangeWithRequest:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)_hasMultipleIndicators;
- (BOOL)_isBackwardNavigationCommand:(id)a0;
- (void)addElementSummaryToRequest:(id)a0;
- (BOOL)allowBuildChildren;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)canHandleValueChange;
- (BOOL)decrementLarge;
- (BOOL)decrementSmall;
- (BOOL)decrementWithPercentage:(double)a0;
- (void)delayOutputValueDescription;
- (unsigned long long)directInteractionArrowCaptureMask;
- (void)echoValueChangeToRequest:(id)a0;
- (long long)groupBehavior;
- (void)handleAttributeChange:(id)a0;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)handleReadValueChangeCallbackForEvent:(id)a0 request:(id)a1;
- (BOOL)handleRotorAdjustWithEvent:(id)a0 direction:(long long)a1 request:(id)a2;
- (BOOL)incrementLarge;
- (BOOL)incrementSmall;
- (BOOL)incrementWithPercentage:(double)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (id)interactionValueDescription;
- (BOOL)isAdjustable;
- (BOOL)isControlElement;
- (id)itemDescriptionForEcho;
- (BOOL)listenForValueChangeWithoutKeyboardFocus;
- (double)maxFloatValue;
- (double)minFloatValue;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (double)percentValue;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)shouldFocusOntoChild:(id)a0;
- (id)summaryTypeDescription;

@end
