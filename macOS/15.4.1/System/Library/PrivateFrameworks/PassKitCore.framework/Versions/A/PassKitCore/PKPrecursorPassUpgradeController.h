@class PKIdentityProofingConfiguration, NSArray, NSString, PKPassUpgradePrecursorPassRequest, PKOSVersionRequirement, PKSecureElementPass, PKPaymentWebService;
@protocol PKPrecursorPassUpgradeControllerDelegate;

@interface PKPrecursorPassUpgradeController : NSObject {
    PKSecureElementPass *_pass;
    PKPaymentWebService *_webService;
    BOOL _hasLoadedConfiguration;
    NSArray *_seids;
    NSString *_deviceClass;
    PKOSVersionRequirement *_deviceVersion;
    PKIdentityProofingConfiguration *_currentProofingConfiguration;
}

@property (weak, nonatomic) id<PKPrecursorPassUpgradeControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *devicePrecursorRequests;
@property (readonly, nonatomic) PKPassUpgradePrecursorPassRequest *devicePrimaryPrecursorRequest;

- (id)init;
- (void).cxx_destruct;
- (void)_carKeyDescriptionFor:(id)a0 completion:(id /* block */)a1;
- (void)_fetchProofingStatusWithCompletion:(id /* block */)a0;
- (void)_genericReProvisionDescriptionFor:(id)a0 completion:(id /* block */)a1;
- (void)_issuerAppDescriptionFor:(id)a0 completion:(id /* block */)a1;
- (void)_loadConfigurationIfNeeded;
- (void)_proofingDescriptionFor:(id)a0 completion:(id /* block */)a1;
- (id)initWithPass:(id)a0 webService:(id)a1;
- (void)mockIdentityPrecursorPassUpgradeRequestDescriptions:(id /* block */)a0;
- (void)reloadPrecursorRequests;
- (void)requestDescriptionFor:(id)a0 completion:(id /* block */)a1;

@end
