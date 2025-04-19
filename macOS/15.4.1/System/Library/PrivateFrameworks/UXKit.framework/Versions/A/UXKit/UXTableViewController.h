@class UXTableView;
@protocol UXTableViewDelegate;

@interface UXTableViewController : UXCollectionViewController

@property (readonly, nonatomic) id<UXTableViewDelegate> tableViewDelegate;
@property (readonly, nonatomic) UXTableView *tableView;

+ (Class)collectionViewClass;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithStyle:(long long)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidLayoutSubviews;
- (void)_updateContentInsetFromLayoutGuides;
- (void)didUpdateLayoutGuides;
- (id)preferredFirstResponder;

@end
