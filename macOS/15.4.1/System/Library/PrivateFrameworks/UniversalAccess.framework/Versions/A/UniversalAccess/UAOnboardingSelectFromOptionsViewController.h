@class NSString, UAOnboardingSelectFromOptionsFeature;

@interface UAOnboardingSelectFromOptionsViewController : UAOnboardingViewController <UAOnboardingOptionsDelegate>

@property (nonatomic) double imageInset;
@property (nonatomic) double imageRadius;
@property (nonatomic) BOOL allowCompression;
@property (retain, nonatomic) UAOnboardingSelectFromOptionsFeature *feature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithFeature:(id)a0;
- (void)_setupView;
- (void)_clearBorders;
- (void)_optionSelected:(id)a0;

@end
