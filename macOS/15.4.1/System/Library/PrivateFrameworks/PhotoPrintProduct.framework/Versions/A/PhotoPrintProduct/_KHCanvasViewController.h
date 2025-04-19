@class UXView, KHSelectionManager, NSArray, KHSelectionViewController, NSString, KHCanvasLayout, NSMutableArray, NSMutableSet, KHThemeConfiguration, KHLayout;

@interface _KHCanvasViewController : UXViewController <KHCanvasLayoutDelegate, KHLayoutViewControllerDelegate> {
    BOOL _keyController;
}

@property (readonly, nonatomic) KHThemeConfiguration *themeConfiguration;
@property (readonly, nonatomic) KHLayout *currentLayout;
@property (retain, nonatomic) KHSelectionViewController *selectionViewController;
@property (retain, nonatomic) NSMutableArray *internalLayoutViewControllers;
@property (retain, nonatomic) NSMutableSet *addedConstraints;
@property (nonatomic, getter=isKeyController) BOOL keyController;
@property (retain, nonatomic) KHSelectionManager *selectionManager;
@property (readonly, nonatomic) UXView *selectionView;
@property (retain, nonatomic) KHCanvasLayout *canvasLayout;
@property (readonly, nonatomic) NSArray *layoutViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)removeFromParentViewController;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)willStartAnimation;
- (void)_setupSelection;
- (void)didEndAnimation;
- (id)currentThemeForLayoutViewController:(id)a0;
- (id)initWithCanvasLayout:(id)a0;
- (id)layoutViewControllerForSelection:(id)a0;
- (id)layoutViewForLayout:(id)a0;
- (id)selectionManagerForLayoutViewController:(id)a0;
- (BOOL)selectionViewController:(id)a0 shouldAddSelection:(id)a1;
- (id)spacingViewForCanvasLayout:(id)a0;
- (id)viewControllerForLayout:(id)a0;

@end
