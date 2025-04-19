@class NSViewController, NSTextField;

@interface AMSUISpyglassViewController : NSViewController

@property (retain) NSTextField *noAccountLabel;
@property (retain) NSViewController *wrapperController;
@property (getter=isVisible) BOOL visible;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillLayout;
- (void)createViewWithAccounts:(id)a0;

@end
