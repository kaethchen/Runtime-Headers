@class NSArray, VSIdentityProvider, VSAccountChannelsCenter, NSOperationQueue, NSDictionary, VSPersistentStorage, VSAppSettingsViewModel, UIViewController, VSAccountChannels, VSRestrictionsCenter;

@interface VSAppSettingsFacade : NSObject

@property (copy, nonatomic) NSDictionary *appSections;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter;
@property (retain, nonatomic) VSAccountChannels *accountChannels;
@property (copy, nonatomic) NSArray *knownAppBundles;
@property (copy, nonatomic) NSArray *unredeemedVouchers;
@property (nonatomic) BOOL needsUpdateApps;
@property (nonatomic) int registrationToken;
@property (retain, nonatomic) VSAppSettingsViewModel *mvpdAppSettingsViewModel;
@property (nonatomic) BOOL needsPresentationOfMVPDAppInstallPromptIfAvailable;
@property (retain, nonatomic) UIViewController *mvpdInstallPromptPresentingViewController;
@property (retain, nonatomic) Class appsOperationClass;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (nonatomic) BOOL hasChannelApps;
@property (retain, nonatomic) VSAccountChannelsCenter *accountChannelsCenter;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateApps;
- (id)initWithStorage:(id)a0 restrictionsCenter:(id)a1;
- (id)initWithStorage:(id)a0 restrictionsCenter:(id)a1 accountChannelsCenter:(id)a2 appsOperationClass:(Class)a3;
- (void)presentMVPDAppInstallPromptFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setNeedsUpdateApps;
- (BOOL)shouldShowMVPDAppInstallPrompt;
- (BOOL)shouldShowMVPDAppInstallPromptFromViewController:(id)a0;
- (void)updateDecidedApps;
- (id)viewModelsForAppDescriptions:(id)a0 bundleByBundleID:(id)a1 vouchersForProvider:(id)a2 restrictionsCenter:(id)a3 privacyFacade:(id)a4;
- (id)viewModelsForAvailableAppDescriptions:(id)a0 subscribedAppDescriptions:(id)a1 andNonChannelAppDescriptions:(id)a2;

@end
