@class PLLibraryServicesManager;

@interface PLFeatureAvailabilityTransitionDelegate : NSObject <PLFeatureAvailabilityTransitionDelegate> {
    PLLibraryServicesManager *_lsm;
}

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)searchUIFeatureBecameAvailable:(id)a0;
- (void)_availability:(id)a0 feature:(id)a1 didTransition:(BOOL)a2;
- (void)availability:(id)a0 feature:(id)a1 didTransition:(BOOL)a2;
- (void)memoriesCreationBecameAvailable:(id)a0;

@end
