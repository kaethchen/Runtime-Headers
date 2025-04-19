@class NSTextField, NSViewController, NSBox, NSView, NSLayoutConstraint, NSStackView, NSMutableArray;
@protocol ASNavigationControllerDelegate;

@interface ASNavigationController : NSViewController {
    NSTextField *_titleTextField;
    NSStackView *_rightBarStackView;
    NSBox *_separator;
    NSView *_navigationBarView;
    NSView *_paddingView;
    NSView *_navigationContentView;
    NSLayoutConstraint *_paddingHeightLessThanOrEqualConstraint;
    NSLayoutConstraint *_paddingHeightEqualConstraint;
    NSMutableArray *_viewControllerStack;
    BOOL _needsSmoothAnimationMomentaryToggle;
    NSView *_customTitleView;
}

@property (weak) id<ASNavigationControllerDelegate> delegate;
@property (readonly, nonatomic) NSViewController *topViewController;

- (void).cxx_destruct;
- (void)loadView;
- (void)_prepareForSmoothAnimation;
- (void)_removeViewController:(id)a0;
- (void)_showBarItemsOfViewController:(id)a0 animated:(BOOL)a1;
- (void)_showViewController:(id)a0 animated:(BOOL)a1;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setCustomTitleView:(id)a0;

@end
