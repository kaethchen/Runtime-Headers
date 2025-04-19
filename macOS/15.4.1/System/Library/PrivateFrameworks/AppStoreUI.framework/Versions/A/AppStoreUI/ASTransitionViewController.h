@class NSVisualEffectView, NSViewController;

@interface ASTransitionViewController : NSViewController

@property (retain, nonatomic) NSViewController *currentViewController;
@property (readonly, nonatomic) NSVisualEffectView *effectView;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (id)initWithViewController:(id)a0;
- (void)transitionToViewController:(id)a0;

@end
