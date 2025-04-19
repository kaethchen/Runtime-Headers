@interface FI_TViewController : NSViewController {
    BOOL _callingLoadView;
    BOOL _loadingFromNib;
    BOOL _isViewConfigured;
}

- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setView:(id)a0;
- (BOOL)_viewControllerSupports10_10Features;
- (void)awakeFromNib;
- (void)loadView;
- (id)nibBundle;
- (BOOL)applyExtraKeyboardShortcuts:(id)a0;
- (void)configureView;
- (void)initCommon;
- (id)initWithNibName:(id)a0;
- (id)viewNoLoad;

@end
