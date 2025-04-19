@interface _PHPhotoLibraryFeatureAvailabilityTaskMemoryCreation : PHPhotoLibraryFeatureAvailabilityTask

- (void)executeWithCompletionHandler:(id /* block */)a0;
- (void)_updateFeatureAvailabilityForAvailabilityStatus:(id)a0;
- (id)initWithFeature:(unsigned long long)a0 photoLibrary:(id)a1 availabilityConfig:(id)a2;

@end
