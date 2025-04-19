@class NSString, KHThemeDetailContainerView, KHThemeDetailView, KHThemeProvider;
@protocol KHThemeDetailViewControllerDataSource, KHThemeDetailViewControllerDelegate;

@interface KHThemeDetailViewController : UXViewController <CAAnimationDelegate> {
    KHThemeDetailContainerView *_containerView;
}

@property (retain, nonatomic) KHThemeDetailView *themeDetailView;
@property (retain, nonatomic) KHThemeProvider *themeProvider;
@property (weak, nonatomic) id<KHThemeDetailViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<KHThemeDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)_closeThemeDetailViewController:(id)a0;
- (void)_configureThemeDetailView:(id)a0 forThemeProvider:(id)a1;
- (void)_showSimilar:(id)a0;

@end
