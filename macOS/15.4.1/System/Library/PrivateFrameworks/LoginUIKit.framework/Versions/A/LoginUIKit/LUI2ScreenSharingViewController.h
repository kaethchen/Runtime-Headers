@interface LUI2ScreenSharingViewController : LUI2ViewController

@property BOOL registered;

- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)_updateContentView;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)_setupContentView;
- (BOOL)_shouldSuppressObservedMessage;

@end
