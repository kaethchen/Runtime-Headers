@class NSFormatter, NSString, _NSStepperTouchBarItemView;

@interface NSStepperTouchBarItem : NSTouchBarItem {
    _NSStepperTouchBarItemView *_stepperView;
}

@property (readonly) NSFormatter *formatter;
@property double maxValue;
@property double minValue;
@property double increment;
@property double value;
@property (weak) id target;
@property SEL action;
@property (copy) NSString *customizationLabel;

+ (id)stepperTouchBarItemWithIdentifier:(id)a0 drawingHandler:(id /* block */)a1;
+ (id)stepperTouchBarItemWithIdentifier:(id)a0 formatter:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)view;
- (void)_commonStepperViewSetUp:(id)a0;
- (void)_configureAsGraphicalStepperWithDrawingHandler:(id /* block */)a0;
- (void)_configureAsTextualStepperWithFormatter:(id)a0;
- (void)_stepperValueDidChange:(id)a0;

@end
