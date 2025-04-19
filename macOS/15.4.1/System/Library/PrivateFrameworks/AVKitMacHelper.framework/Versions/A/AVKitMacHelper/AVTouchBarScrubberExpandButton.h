@interface AVTouchBarScrubberExpandButton : NSButton {
    double _minValue;
    double _maxValue;
    double _currentValue;
}

@property double minValue;
@property double maxValue;
@property double currentValue;
@property (readonly) double normalizedCurrentValue;

+ (Class)cellClass;

@end
