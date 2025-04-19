@protocol GKSignInViewControllerMacDelegate;

@interface GKSignInViewControllerMac : NSViewController

@property (weak) id<GKSignInViewControllerMacDelegate> delegate;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
