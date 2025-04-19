@class NSImage, NSTimer, NSDate;

@interface LUIProgressBar : NSView {
    NSImage *_emptyLeftCap;
    NSImage *_emptyMiddle;
    NSImage *_emptyRightCap;
    NSImage *_fullLeftCap;
    NSImage *_fullMiddle;
    NSImage *_fullRightCap;
    NSTimer *_updateTimer;
    float _value;
    float _minValue;
    float _maxValue;
    float _currentValue;
    float _step;
    int _progressBarStyle;
    BOOL _drawsBackground;
    BOOL _animates;
    id /* block */ _animationCompleteBlock;
    NSDate *_endDate;
}

@property (readonly, getter=isIndeterminate) BOOL indeterminate;

- (void)dealloc;
- (void).cxx_destruct;
- (float)value;
- (void)setValue:(float)a0;
- (float)maxValue;
- (float)minValue;
- (void)setMaxValue:(float)a0;
- (void)setMinValue:(float)a0;
- (BOOL)drawsBackground;
- (void)_commonInit;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (id)accessibilityValueAttribute;
- (id)accessibilityValueDescription;
- (BOOL)animates;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setAnimates:(BOOL)a0;
- (void)setDrawsBackground:(BOOL)a0;
- (void)sizeToFit;
- (void)_updateCurrentValue:(id)a0;
- (int)progressBarStyle;
- (void)resetValue;
- (void)setAnimationCompleteCallback:(id /* block */)a0;
- (void)setProgressBarStyle:(int)a0;

@end
