@interface _TtCC19ModelCatalogRuntime20CatalogServiceServer6Server : NSObject <ModelCatalog.CatalogServicesProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ shouldBypassAvailabilitySecureCheck;
    void /* unknown type, empty encoding */ sideloadURL;
    void /* unknown type, empty encoding */ catalogIndex;
    void /* unknown type, empty encoding */ subscriptionManager;
    void /* unknown type, empty encoding */ variantResolverMappings;
    void /* unknown type, empty encoding */ assetLockProvider;
    void /* unknown type, empty encoding */ resourceReadinessProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)hasEnoughStorageForGenerativeExperiencesEssentialResourcesWith:(id /* block */)a0;
- (void)acquireCoherenceTokenWithIdentifiers:(id)a0 with:(id /* block */)a1;
- (void)availableUseCasesWith:(id /* block */)a0;
- (void)donateSafetyFailureWithSafetyFailure:(id)a0 with:(id /* block */)a1;
- (void)generativeExperiencesEssentialResourcesReadyWith:(id /* block */)a0;
- (void)regulatoryDomainsWith:(id /* block */)a0;
- (void)releaseResourceWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)releaseResourcesWithRequestKey:(id)a0 with:(id /* block */)a1;
- (void)removeSideloadWithResource:(id)a0 with:(id /* block */)a1;
- (void)removeSideloadWithResourceBundle:(id)a0 with:(id /* block */)a1;
- (void)requestResourceWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)requestResourcesWithRequestKey:(id)a0 with:(id /* block */)a1;
- (void)resourceBundleContainerWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)resourceBundleContainersWith:(id /* block */)a0;
- (void)resourceContainerWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)resourceContainersWith:(id /* block */)a0;
- (void)resourceInformationWithIdentifier:(id)a0 with:(id /* block */)a1;
- (void)sideloadWithResource:(id)a0 with:(id /* block */)a1;
- (void)sideloadWithResourceBundle:(id)a0 with:(id /* block */)a1;
- (void)siriResourceAvailabilityWith:(id /* block */)a0;
- (void)supportedArgumentsFor:(id)a0 with:(id /* block */)a1;
- (void)useCaseResourceAvailabilityBy:(id)a0 with:(id /* block */)a1;

@end
