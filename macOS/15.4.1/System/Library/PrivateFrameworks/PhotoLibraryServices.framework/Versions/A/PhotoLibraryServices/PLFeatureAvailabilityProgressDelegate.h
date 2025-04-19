@class PLLibraryServicesManager;

@interface PLFeatureAvailabilityProgressDelegate : NSObject <PLFeatureAvailabilityProgressDelegate> {
    PLLibraryServicesManager *_lsm;
}

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)featureAvailability:(id)a0 updateProgressForFeature:(id)a1;

@end
