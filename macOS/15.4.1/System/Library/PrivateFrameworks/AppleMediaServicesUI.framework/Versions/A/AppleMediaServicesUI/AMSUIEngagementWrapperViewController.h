@class NSViewController;

@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController

@property (copy) id /* block */ dismissBlock;
@property (readonly) NSViewController *viewController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setup;
- (void)loadView;
- (id)initWithViewController:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_setupContentSize;
- (BOOL)isInViewServiceProcess;
- (void)updateContentOverlayInsetsOnTraitCollectionChange;

@end
