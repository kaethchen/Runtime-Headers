@class NSString, BKUIDeviceImageView, BKMesaSecureIntentProvider;

@interface BuddySecureIntentClientView : OBTemplateView <SecureIntentClientView>

@property (retain, nonatomic) BKUIDeviceImageView *deviceImageView;
@property (weak, nonatomic) BKMesaSecureIntentProvider *secureIntentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)showInitialUI;
- (void)showRetryOnErrorUI;

@end
