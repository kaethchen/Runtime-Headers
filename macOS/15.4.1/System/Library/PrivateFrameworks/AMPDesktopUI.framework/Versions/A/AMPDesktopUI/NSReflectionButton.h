@class NSObject, ViewSpyPropsController;

@interface NSReflectionButton : NSButton

@property (weak, nonatomic) ViewSpyPropsController *targetSpy;
@property (weak, nonatomic) NSObject *targetObject;

- (id)init;
- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)clicked:(id)a0;

@end
