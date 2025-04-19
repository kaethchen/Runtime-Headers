@interface BOSPackageAnalyzer : NSObject

+ (id)sharedAnalyzer;

- (id)_brainBundleFromPackageInfos:(id)a0;
- (id)_brainBundleFromSpecifiers:(id)a0;
- (id)_chooseBrainBundleComponentFromComponents:(id)a0;
- (id)_chooseUpdateBundleComponentFromComponents:(id)a0;
- (id)_firmwareBundleComponentsOfType:(long long)a0 inPackageInfos:(id)a1;
- (id)_firmwareBundleComponentsOfType:(long long)a0 inSpecifiers:(id)a1;
- (id)_updateBundleFromPackageInfos:(id)a0;
- (id)_updateBundleFromSpecifiers:(id)a0;
- (id)chooseBrainAndUpdateBundleFromPackageInfos:(id)a0 withRequest:(id)a1;
- (id)chooseBrainAndUpdateBundleFromSpecifiers:(id)a0 withRequest:(id)a1;

@end
