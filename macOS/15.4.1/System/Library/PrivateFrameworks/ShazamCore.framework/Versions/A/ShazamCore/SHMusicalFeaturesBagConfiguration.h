@class NSDictionary, AMSPromise;

@interface SHMusicalFeaturesBagConfiguration : NSObject

@property (readonly) NSDictionary *configuration;
@property (readonly) AMSPromise *amsPromise;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)initWithPromise:(id)a0;
- (unsigned long long)availableModelsForClientIdentifier:(id)a0;
- (double)minimumDurationInSecondsForClientIdentifier:(id)a0;

@end
