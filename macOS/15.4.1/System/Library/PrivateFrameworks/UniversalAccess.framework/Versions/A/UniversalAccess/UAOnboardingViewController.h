@class UAOnboardingFeature;

@interface UAOnboardingViewController : NSViewController

@property (retain, nonatomic) UAOnboardingFeature *feature;

+ (id)_bundle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)constrainToFillBuddyContentView;

@end
