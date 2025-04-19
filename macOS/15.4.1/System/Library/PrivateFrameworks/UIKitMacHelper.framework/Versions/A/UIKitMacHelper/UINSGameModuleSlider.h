@class NSArray, NSString;

@interface UINSGameModuleSlider : UINSGameModuleDigitizer {
    NSString *_fingerKey;
    long long _keyCodeDecrease;
    long long _keyCodeIncrease;
    BOOL _isTouching;
    BOOL _isDecreasePressed;
    BOOL _isIncreasePressed;
    struct CGPoint { double x; double y; } _normalizedLocationCurrent;
}

@property struct CGPoint { double x; double y; } normalizedLocationMin;
@property struct CGPoint { double x; double y; } normalizedLocationMax;
@property double speed;
@property (copy) NSArray *keyCodes;

+ (id)name;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)configuration;
- (void)reset;
- (id)initWithConfiguration:(id)a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)_resetSliderDefaults;
- (void)_updateVirtualTouch;
- (void)logAnalyticsPayload:(id)a0;

@end
