@interface UINSGameModuleTilt : UINSGameModuleMotion {
    struct { double w; double x; double y; double z; } _quaternion;
    BOOL _is_A_pressed;
    BOOL _is_D_pressed;
    BOOL _is_W_pressed;
    BOOL _is_S_pressed;
}

@property struct { double w; double x; double y; double z; } neutralQuaternion;
@property double sensitivity;
@property double rate;
@property double pitchMax;
@property double yawMax;

+ (id)name;

- (id)init;
- (id)configuration;
- (void)reset;
- (id)initWithConfiguration:(id)a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)_animateToTarget;
- (void)_resetTiltDefaults;
- (void)applyUserDefaults;
- (void)setVirtualMotionDevice:(id)a0;

@end
