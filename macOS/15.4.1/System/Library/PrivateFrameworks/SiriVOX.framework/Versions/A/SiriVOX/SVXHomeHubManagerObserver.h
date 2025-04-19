@class SVXQueuePerformer, SVXRemoraVirtualDeviceManager, SVXPlatformDependenciesTracker;

@interface SVXHomeHubManagerObserver : NSObject {
    SVXQueuePerformer *_mainQueuePerformer;
    SVXRemoraVirtualDeviceManager *_remoraVirtualDeviceManager;
    SVXPlatformDependenciesTracker *_platformDependenciesTracker;
}

- (void).cxx_destruct;
- (id)initWithRemoraVirtualDeviceManager:(id)a0 platformDependenciesTracker:(id)a1;

@end
