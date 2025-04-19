@class NSString, NSSliderAccessory, NSView, NSSlider, _NSSliderTouchBarItemView;
@protocol NSUserInterfaceCompression;

@interface NSSliderTouchBarItem : NSTouchBarItem <NSSliderAccessoryContainer> {
    NSView *_view;
    id _autounbinder;
    NSString *_customizationLabel;
}

@property (readonly) BOOL _hasStepBehaviorContext;
@property double value;
@property double minimumValue;
@property double maximumValue;
@property double incrementValue;
@property (readonly) NSSliderAccessory *minimumValueAccessory;
@property (readonly) NSSliderAccessory *maximumValueAccessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) _NSSliderTouchBarItemView *_sliderItemView;
@property (readonly) NSView<NSUserInterfaceCompression> *view;
@property (retain) NSSlider *slider;
@property double doubleValue;
@property double minimumSliderWidth;
@property double maximumSliderWidth;
@property (copy) NSString *label;
@property (retain) NSSliderAccessory *minimumValueAccessory;
@property (retain) NSSliderAccessory *maximumValueAccessory;
@property double valueAccessoryWidth;
@property (weak) id target;
@property SEL action;
@property (copy) NSString *customizationLabel;

+ (id)keyPathsForValuesAffecting_hasStepBehaviorContext;

- (oneway void)release;
- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (Class)preferredPopoverTransposerClass;
- (id)_autounbinder;
- (void)_incrementValue:(BOOL)a0;
- (void)_itemViewDidCancelTracking;
- (void)_itemViewDidEndTracking;
- (void)_itemViewWillBeginTracking;
- (void)_loadViewIfNecessary;
- (void)_sliderDidChange:(id)a0;
- (id)makePressAndHoldTransposerWithSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 destinationContentView:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (long long)preferredPopoverTransposerPriority;
- (void)sendAction;

@end
