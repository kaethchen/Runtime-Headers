@class NSTableView, NSLayoutConstraint;

@interface _MKTableViewControllerRootView : _MKUIViewControllerRootView {
    BOOL _performedInitialTableReload;
}

@property (readonly, nonatomic) NSLayoutConstraint *heightConstraint;
@property (weak, nonatomic) NSTableView *tableView;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (double)tableViewTotalHeight;
- (void)updateTableHeightConstraintAnimated:(BOOL)a0;

@end
