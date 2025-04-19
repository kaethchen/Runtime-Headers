@class NSString, NSImage;

@interface MUIAppleIntelligenceOnboardingViewController : OBTemplateContainerViewController

@property (class, readonly, nonatomic) NSString *welcomeTitle;
@property (class, readonly, nonatomic) NSString *continueButtonTitle;
@property (class, readonly, nonatomic) NSImage *welcomeImage;

+ (id)_imageWithName:(id)a0;
+ (id)_symbolImageWithName:(id)a0;
+ (long long)currentAppleIntelligenceOnboardingState;

- (id)init;
- (void)addBulletListItems;
- (void)continueOnboarding:(id)a0;
- (id)makeTemplateView;

@end
