@class NSArray, NSString;

@interface UINSGameModuleJoystick : UINSGameModuleDigitizer {
    struct CGPoint { double x; double y; } _touchVector;
    NSString *_fingerKey;
    BOOL _isTouching;
    BOOL _isUpPressed;
    BOOL _isLeftPressed;
    BOOL _isDownPressed;
    BOOL _isRightPressed;
}

@property struct CGPoint { double x; double y; } normalizedLocation;
@property double radius;
@property (copy) NSArray *keyCodes;
@property (readonly) long long keyCodeUp;
@property (readonly) long long keyCodeLeft;
@property (readonly) long long keyCodeDown;
@property (readonly) long long keyCodeRight;

+ (id)name;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)configuration;
- (void)reset;
- (id)initWithConfiguration:(id)a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)_resetJoystickDefaults;
- (void)_updateVirtualTouch;
- (void)logAnalyticsPayload:(id)a0;

@end
