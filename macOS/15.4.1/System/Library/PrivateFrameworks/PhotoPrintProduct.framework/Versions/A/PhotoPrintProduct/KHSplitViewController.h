@class NSArray, NSMutableArray, NSLayoutConstraint;
@protocol KHSplitViewControllerDelegate;

@interface KHSplitViewController : UXViewController {
    NSLayoutConstraint *_masterConstraintWidth;
    NSLayoutConstraint *_detailConstraintRight;
    NSLayoutConstraint *_detailConstraintLeft;
    NSLayoutConstraint *_detailConstraintWidth;
    NSLayoutConstraint *_connectionConstraint;
}

@property (nonatomic) unsigned long long displayState;
@property (readonly, nonatomic) double currentSplitPosition;
@property (readonly, nonatomic) NSMutableArray *addedConstraints;
@property (copy, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) id<KHSplitViewControllerDelegate> delegate;
@property (nonatomic) double splitPosition;
@property (nonatomic) double splitWidth;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_updateConstraintForLayout;
- (void)addContainedController:(id)a0;
- (void)removeContainedController:(id)a0;
- (void)setDetailViewController:(id)a0 animated:(BOOL)a1;
- (void)setDisplayState:(unsigned long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setMasterViewController:(id)a0 animated:(BOOL)a1;

@end
