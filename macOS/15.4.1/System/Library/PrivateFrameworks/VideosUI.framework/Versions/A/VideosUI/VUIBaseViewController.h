@interface VUIBaseViewController : NSViewController

- (void)loadView;
- (void)updateViewConstraints;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillLayout;
- (BOOL)isViewInTopMostVisibleViewController;

@end
