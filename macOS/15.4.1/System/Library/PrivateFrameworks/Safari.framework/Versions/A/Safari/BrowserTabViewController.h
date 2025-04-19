@class NSViewController, BrowserTabViewItem;

@interface BrowserTabViewController : NSViewController

@property (readonly, weak, nonatomic) BrowserTabViewItem *tabViewItem;
@property (retain, nonatomic) NSViewController *contentViewController;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)_updateViewHierarchy;
- (id)initWithTabViewItem:(id)a0;

@end
