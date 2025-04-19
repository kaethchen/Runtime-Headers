@class AXFUIElement;

@interface SCRScrollBar : SCRElement {
    BOOL _isVertical;
    AXFUIElement *_incrementUIElement;
    AXFUIElement *_decrementUIElement;
    AXFUIElement *_incrementPageUIElement;
    AXFUIElement *_decrementPageUIElement;
    AXFUIElement *_valueIndicatorUIElement;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)decrement;
- (BOOL)increment;
- (BOOL)end;
- (BOOL)isVertical;
- (long long)orientation;
- (double)percentage;
- (BOOL)home;
- (void)setPercentage:(double)a0;
- (BOOL)isInteractive;
- (long long)brailleLineType;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)highlightTarget;
- (id)_decrementPageUIElement;
- (id)_decrementUIElement;
- (id)_defaultLocalizedStringForCommandKey:(id)a0;
- (void)_handleScroll:(id)a0;
- (id)_incrementPageUIElement;
- (id)_incrementUIElement;
- (BOOL)allowBuildChildren;
- (BOOL)decrementPage;
- (long long)groupBehavior;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)incrementPage;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)isControlElement;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)shouldNavigate;

@end
