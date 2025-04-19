@interface SADeviceInfo : NSObject

- (id)init;
- (id)systemLocale;
- (id)build;
- (id)productType;
- (id)osType;
- (int)buildType;
- (id)trialExperiment;
- (id)currentCountry;
- (id)prefixStoreVersion;

@end
