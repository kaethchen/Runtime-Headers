@class NSArray, NSDictionary, _GCGamepadEventImpl, NSObject, LeftThumbstickState;
@protocol OS_dispatch_queue, OS_dispatch_source, GCKeyboardControllerWindowManager;

@interface GCKeyboardAndMouseEmulatedController : GCController {
    id<GCKeyboardControllerWindowManager> _windowManager;
    NSDictionary *_mapping;
    NSDictionary *_buttons;
    float _mouseReleaseTime;
    float _mouseSensitivityLow;
    float _mouseSensitivityHigh;
    BOOL _mouseThumbstick;
    float keyboardRampValue;
    float _keyboardFalloffValue;
    BOOL _immediateLeftThumbstickMode;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSArray *_leftThumbstickSensitivity;
    LeftThumbstickState *_leftThumbstickState;
    NSObject<OS_dispatch_source> *_leftThumbstickTimer;
    struct CGPoint { double x; double y; } _leftThumbstickValue;
    NSObject<OS_dispatch_source> *_mouseIdleTimer;
    _Atomic BOOL _dirtyPointer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _rightThumbstickLock;
    struct CGPoint { double x; double y; } _rightThumbstickValue;
    _GCGamepadEventImpl *_event;
}

@property (nonatomic) int emulatedControllerMapping;
@property (nonatomic) unsigned long long mouseSensitivity;

- (void).cxx_destruct;
- (void)setDevices:(id)a0;
- (id)tryReadPropertiesFromLocalFiles;
- (id)elementForInput:(long long)a0;
- (long long)eventInputForName:(id)a0;
- (float)findDeltaFor:(float)a0;
- (id)initEmulatedControllerWithMapping:(int)a0 windowManager:(id)a1;
- (id)nameForEventInput:(long long)a0;
- (id)readButtonsInfoFromLocalFiles;
- (id)readConfigFromLocalFiles;
- (id)readLeftThumbstickSensitivityFromLocalFiles;
- (void)remapControlsWith:(id)a0;
- (void)renameButtonForInput:(long long)a0 withKey:(id)a1;
- (void)setupButtons;
- (void)setupConfig;
- (void)setupLeftThumbstickSensitivity;
- (void)startLeftThumbstickTimer;
- (void)startMouseIdleTimer;
- (void)updateWithKeyKey:(long long)a0 down:(BOOL)a1;

@end
