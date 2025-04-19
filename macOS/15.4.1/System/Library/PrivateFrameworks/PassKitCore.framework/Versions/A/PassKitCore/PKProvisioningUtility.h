@class PKPaymentWebService;
@protocol PKProvisioningUtilityDataHelper;

@interface PKProvisioningUtility : NSObject {
    PKPaymentWebService *_destinationWebService;
    PKPaymentWebService *_managingWebService;
}

@property (weak, nonatomic) id<PKProvisioningUtilityDataHelper> dataProvider;

- (id)init;
- (void).cxx_destruct;
- (void)requestProvisioning:(id)a0 completion:(id /* block */)a1;
- (void)_downloadAndIngestPassesFoPasses:(id)a0 response:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 ingestionProperties:(id)a3 sid:(id)a4 completion:(id /* block */)a5;
- (void)_requestProvisioning:(id)a0 externalizedAuth:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 downloadPasses:(BOOL)a3 resolveEnableRequirements:(BOOL)a4 onStartPassDownload:(id /* block */)a5 sid:(id)a6 completion:(id /* block */)a7;
- (void)_updateRequirementsRequestForSuperEasyProvisioning:(id)a0 sid:(id)a1 completion:(id /* block */)a2;
- (void)downloadAndIngestPassForPassURL:(id)a0 deviceCredential:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 ingestionProperties:(id)a3 sid:(id)a4 completion:(id /* block */)a5;
- (void)downloadAndIngestPassesForResponse:(id)a0 cloudStoreCoordinatorDelegate:(id)a1 ingestionProperties:(id)a2 sid:(id)a3 completion:(id /* block */)a4;
- (void)downloadMoreInfoItemsFrom:(id)a0 metadata:(id)a1 sid:(id)a2 completion:(id /* block */)a3;
- (void)ingestProvisioningPassData:(id)a0 cloudStoreCoordinatorDelegate:(id)a1 moreInfoURLs:(id)a2 ingestionProperties:(id)a3 sid:(id)a4 completion:(id /* block */)a5;
- (id)initWithDestinationWebService:(id)a0 managingWebService:(id)a1;
- (void)nonceWithSID:(id)a0 completion:(id /* block */)a1;
- (void)requestEligibility:(id)a0 sid:(id)a1 completion:(id /* block */)a2;
- (void)requestProvisioning:(id)a0 externalizedAuth:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 onStartPassDownload:(id /* block */)a3 completion:(id /* block */)a4;
- (void)requestProvisioning:(id)a0 externalizedAuth:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 onStartPassDownload:(id /* block */)a3 sid:(id)a4 requireZoneCreationSuccess:(BOOL)a5 completion:(id /* block */)a6;
- (void)requestProvisioning:(id)a0 sid:(id)a1 completion:(id /* block */)a2;
- (void)requestRequirements:(id)a0 sid:(id)a1 completion:(id /* block */)a2;
- (void)updateProvisioningRequestForEnableRequirements:(id)a0 externalizedAuth:(id)a1 sid:(id)a2 completion:(id /* block */)a3;

@end
