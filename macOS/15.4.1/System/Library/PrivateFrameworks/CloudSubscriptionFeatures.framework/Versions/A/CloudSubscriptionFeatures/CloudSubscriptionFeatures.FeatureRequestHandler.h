@interface CloudSubscriptionFeatures.FeatureRequestHandler : NSObject <CloudSubscriptionFeatures.FeaturesServiceRequest> {
    void /* unknown type, empty encoding */ taskLimiters;
    void /* unknown type, empty encoding */ geoCache;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ availabilityClient;
    void /* unknown type, empty encoding */ deviceCapabilities;
    void /* unknown type, empty encoding */ tapToRadarPoster;
    void /* unknown type, empty encoding */ telemetryProvider;
    void /* unknown type, empty encoding */ gmsIsAvailable;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearCacheAndNotify;
- (void)getTicketForFeature:(id)a0 completion:(id /* block */)a1;
- (void)clearCFUGateWithFeature:(id)a0 completion:(id /* block */)a1;
- (void)clearCFUWithId:(id)a0 completion:(id /* block */)a1;
- (void)clearTicketCacheAndNotify;
- (void)getFeatureEligibilityFor:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void)getSharedAlbumsStatusWithCompletion:(id /* block */)a0;
- (void)getTicketStatusForFeature:(id)a0 completion:(id /* block */)a1;
- (void)getTicketStatusFromCacheForFeature:(id)a0 completion:(id /* block */)a1;
- (void)gmOptInToggleWithCompletion:(id /* block */)a0;
- (void)performInternalValidationForFeature:(id)a0 completion:(id /* block */)a1;
- (void)postCFUIfEligibleWithFeature:(id)a0 completion:(id /* block */)a1;
- (void)requestFeatureWithId:(id)a0 ignoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestGeoClassificationFor:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;
- (void)revalidateCFU;
- (void)signupForWaitlistWithFeatureID:(id)a0 completion:(id /* block */)a1;
- (void)waitlistStatusWithFeatureID:(id)a0 completion:(id /* block */)a1;

@end
