@class GCController, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCGamepad : GCPhysicalInputProfile <NSSecureCoding> {
    GCControllerDirectionPad *_dpad;
    GCControllerButtonInput *_button0;
    GCControllerButtonInput *_button1;
    GCControllerButtonInput *_button2;
    GCControllerButtonInput *_button3;
    GCControllerButtonInput *_leftShoulder;
    GCControllerButtonInput *_rightShoulder;
    GCControllerButtonInput *_buttonMenu;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GCControllerButtonInput *buttonMenu;
@property (readonly, weak, nonatomic) GCController *controller;
@property (copy, nonatomic) id /* block */ valueChangedHandler;
@property (readonly, nonatomic) GCControllerDirectionPad *dpad;
@property (readonly, nonatomic) GCControllerButtonInput *buttonA;
@property (readonly, nonatomic) GCControllerButtonInput *buttonB;
@property (readonly, nonatomic) GCControllerButtonInput *buttonX;
@property (readonly, nonatomic) GCControllerButtonInput *buttonY;
@property (readonly, nonatomic) GCControllerButtonInput *leftShoulder;
@property (readonly, nonatomic) GCControllerButtonInput *rightShoulder;

- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)productCategory;
- (id)button0;
- (id)button2;
- (id)button1;
- (id)button3;
- (void)_legacy_handleEvent:(struct __IOHIDEvent { } *)a0;
- (void)_triggerValueChangedHandlerForElement:(id)a0 queue:(id)a1;
- (void)_triggerValueChangedHandlerForElements:(id)a0 queue:(id)a1;
- (BOOL)allowsRotation;
- (BOOL)reportsAbsoluteDpadValues;
- (id)saveSnapshot;
- (void)setAllowsRotation:(BOOL)a0;
- (void)setReportsAbsoluteDpadValues:(BOOL)a0;

@end
