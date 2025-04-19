@class _EXHostViewController;

@interface EXAppExtensionBrowserViewController : NSViewController

@property (readonly) _EXHostViewController *hostViewController;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (void)beginHosting;

@end
