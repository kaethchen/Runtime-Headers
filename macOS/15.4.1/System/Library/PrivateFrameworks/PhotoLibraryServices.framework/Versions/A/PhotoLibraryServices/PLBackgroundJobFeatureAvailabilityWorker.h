@interface PLBackgroundJobFeatureAvailabilityWorker : PLBackgroundJobWorker

@property (class, readonly) double minimumSecondsBetweenJobs;

+ (id)_criteriaToUse;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (BOOL)_featureAvailabilityIsStale:(id)a0 inLibrary:(id)a1;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
