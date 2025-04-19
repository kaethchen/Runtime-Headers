@class NSSlider, NSTextField;

@interface UINSGameModuleJoystickViewController : UINSGameModuleConfigViewController

@property (weak) NSTextField *keyUp;
@property (weak) NSTextField *keyLeft;
@property (weak) NSTextField *keyRight;
@property (weak) NSTextField *keyDown;
@property (weak) NSSlider *radius;

- (id)init;
- (void).cxx_destruct;
- (void)save:(id)a0;

@end
