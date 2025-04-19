@interface W5FeatureAvailability : NSObject

+ (BOOL)isInternalBuild;
+ (id)_featureAvailabilityDefaults;
+ (BOOL)diagnosticsModeEnabled;

@end
