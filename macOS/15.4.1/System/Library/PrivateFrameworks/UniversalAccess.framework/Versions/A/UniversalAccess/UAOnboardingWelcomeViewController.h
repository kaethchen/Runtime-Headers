@class NSButton, UAOnboardingWelcomeFeature, UAOnboardingWelcomeCategoryViewController;
@protocol WelcomeViewControllerDelegate;

@interface UAOnboardingWelcomeViewController : UAOnboardingViewController

@property (retain, nonatomic) NSButton *_visionButtonOverlay;
@property (retain, nonatomic) NSButton *_motorButtonOverlay;
@property (retain, nonatomic) NSButton *_hearingButtonOverlay;
@property (retain, nonatomic) NSButton *_cognitiveButtonOverlay;
@property (retain, nonatomic) UAOnboardingWelcomeFeature *feature;
@property (retain, nonatomic) UAOnboardingWelcomeCategoryViewController *visionCategoryViewController;
@property (retain, nonatomic) UAOnboardingWelcomeCategoryViewController *hearingCategoryViewController;
@property (retain, nonatomic) UAOnboardingWelcomeCategoryViewController *motorCategoryViewController;
@property (retain, nonatomic) UAOnboardingWelcomeCategoryViewController *cognitiveCategoryViewController;
@property (weak, nonatomic) id<WelcomeViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)_setup;
- (void)viewDidLoad;
- (id)initWithFeature:(id)a0;
- (void)_cognitiveButtonPressed;
- (void)_hearingButtonPresed;
- (void)_motorButtonPressed;
- (void)_visionButtonPressed;
- (void)addButtonOverlay:(id)a0 toViewController:(id)a1;
- (void)updateCheckmarksForCompletedCategories:(id)a0;

@end
