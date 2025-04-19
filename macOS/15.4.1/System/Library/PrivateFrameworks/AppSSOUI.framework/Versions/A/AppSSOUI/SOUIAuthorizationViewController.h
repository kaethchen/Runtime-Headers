@class NSLayoutConstraint, NSArray, NSViewController;
@protocol SOUIAuthorizationViewControllerDelegate;

@interface SOUIAuthorizationViewController : NSViewController {
    NSViewController *_extensionViewController;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSArray *_extensionConstraints;
}

@property (weak) id<SOUIAuthorizationViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_updateConstraints;
- (void)loadView;
- (void)preferredContentSizeDidChangeForViewController:(id)a0;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)initWithExtensionViewController:(id)a0 hints:(id)a1;

@end
