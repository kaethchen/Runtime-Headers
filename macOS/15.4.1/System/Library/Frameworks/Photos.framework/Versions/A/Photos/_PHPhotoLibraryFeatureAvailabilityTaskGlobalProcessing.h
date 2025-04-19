@interface _PHPhotoLibraryFeatureAvailabilityTaskGlobalProcessing : PHPhotoLibraryFeatureAvailabilityTask

- (void)executeWithCompletionHandler:(id /* block */)a0;
- (void)_addHighlightProcessingToAvailabilityStatus:(id)a0;
- (void)_updateFeatureAvailabilityForAvailabilityStatus:(id)a0;
- (BOOL)addAnalysisStateToAvailabilityStatus:(id)a0 error:(id *)a1;

@end
