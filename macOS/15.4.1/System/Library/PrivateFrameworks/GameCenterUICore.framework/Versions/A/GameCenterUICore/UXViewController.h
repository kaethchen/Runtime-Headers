@class NSString, GKUITheme, UXNavigationController, NSVisualEffectView, UXNavigationItem, NSView;

@interface UXViewController : NSViewController

@property (readonly, retain, nonatomic) GKUITheme *theme;
@property (retain, nonatomic) NSVisualEffectView *backgroundView;
@property (weak, nonatomic) UXNavigationController *navigationController;
@property (retain, nonatomic) UXNavigationItem *navigationItem;
@property (weak, nonatomic) NSView *initialFirstResponder;
@property (copy, nonatomic) NSString *subtitle;
@property (retain) UXViewController *presentedViewController;
@property (nonatomic) BOOL automaticallyAdjustsScrollViewInsets;

+ (id)_gkKeyWindowRootViewController;
+ (id)keyPathsForValuesAffectingTheme;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)presentError:(id)a0;
- (void)presentError:(id)a0 modalForWindow:(id)a1 delegate:(id)a2 didPresentSelector:(SEL)a3 contextInfo:(void *)a4;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)backButtonTitle;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)backButtonImage;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_gkPresentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 dismissHandler:(id /* block */)a3;
- (id)_gkPresentConfirmationAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 block:(id /* block */)a3 cancelAction:(id /* block */)a4;
- (void)removeBackgroundVisualEffectView;
- (id)standardBackButtonImage;
- (void)_willBeginSheet;
- (void)_didBeginSheet;
- (void)_didEndSheet;
- (id)_gkPresentAlertForError:(id)a0 title:(id)a1 defaultMessage:(id)a2;
- (id)_gkPresentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2;
- (id)_gkPresentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 dismissHandler:(id /* block */)a3 presentationCompletionHandler:(id /* block */)a4;
- (void)_willEndSheet;
- (void)attachTitleToView;
- (void)attachTitleToViewWithSubtitle:(BOOL)a0;

@end
