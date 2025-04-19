@class NSBox, NSView, NSString, PPSpecifierTableViewController, AOSUISpyglassBaseViewController;

@interface AOSUISpyglassPaneViewController : AOSUISpyglassBaseViewController <PPSpecifierTableViewControllerDelegate>

@property (weak) NSView *topView;
@property (weak) NSBox *detailView;
@property (retain, nonatomic) AOSUISpyglassBaseViewController *topViewController;
@property (retain, nonatomic) PPSpecifierTableViewController *tableViewController;
@property (weak) NSView *infoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)didSelectSpecifier:(id)a0 tableViewController:(id)a1;
- (BOOL)shouldSelectSpecifier:(id)a0 tableViewController:(id)a1;

@end
