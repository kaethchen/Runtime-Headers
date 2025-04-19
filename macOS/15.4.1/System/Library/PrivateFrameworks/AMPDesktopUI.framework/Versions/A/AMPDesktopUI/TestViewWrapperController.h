@class NSViewController;

@interface TestViewWrapperController : NSViewController

@property (retain, nonatomic) NSViewController *testController;

- (void).cxx_destruct;
- (void)loadView;

@end
