@class CSKHeaderView;

@interface CSKHeaderViewController : NSViewController

@property (weak, nonatomic) CSKHeaderView *headerView;
@property (weak, nonatomic) CSKHeaderView *headerExtendedView;
@property (nonatomic) BOOL showsExtendedView;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_commonInit;
- (void)viewDidLoad;
- (void)_swapHeaderViews;
- (void)_swapView:(id)a0 withView:(id)a1;
- (void)extendedHeaderExtendActionButtonDidClick:(id)a0;
- (void)headerExtendActionButtonDidClick:(id)a0;

@end
