@class LUI2StatusViewController, LUI2ImageViewController, LUI2BackgroundViewController, LUI2MultiWindowController;

@interface LUI2ClassroomLockController : NSObject

@property (readonly) LUI2MultiWindowController *multiWindowController;
@property (readonly) LUI2BackgroundViewController *backgroundViewController;
@property (readonly) LUI2ImageViewController *imageViewController;
@property (readonly) LUI2StatusViewController *statusViewController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setupClassroomLockController;

@end
