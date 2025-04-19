@class ASCLockupView;

@interface SearchUILockupViewContainer : NUIContainerBoxView

@property (retain, nonatomic) ASCLockupView *lockupView;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)tlk_updateForAppearance:(id)a0;
- (id)initWithLockupView:(id)a0;

@end
