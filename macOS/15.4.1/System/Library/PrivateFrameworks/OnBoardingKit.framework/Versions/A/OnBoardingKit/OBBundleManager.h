@class NSString;

@interface OBBundleManager : NSObject

@property (retain, nonatomic) NSString *overrideBundleSearchPath;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)bundleWithIdentifier:(id)a0;
- (id)allBundles;
- (id)_allLinkBundles;
- (id)_allPrivacyBundles;
- (id)_bundleSearchPath;
- (id)_bundleWithIdentifier:(id)a0 usingSearchPath:(id)a1 includePlaceholder:(BOOL)a2 isLinkBundle:(BOOL)a3 isReplacementBundle:(BOOL)a4;
- (id)_bundlesInSearchPath:(id)a0 withBundleCreationBlock:(id /* block */)a1;
- (BOOL)_isPreconditionSatisfiedForReplacementBundle:(id)a0;
- (void)_modifyBundles:(id)a0 asNecessaryWithReplacementBundles:(id)a1;
- (id)_providersByBundleNames;
- (id)_subarrayHavingPreconditionSatisfiedOfReplacementBundles:(id)a0;
- (id)allReplacementBundles;
- (id)bundlesWithIdentifiers:(id)a0;
- (id)orderedPrivacyBundles;
- (id)orderedPrivacyBundlesWithInclusionOptions:(unsigned long long)a0;
- (id)privacyLinkBundleForBundles:(id)a0;
- (id)privacyLinkBundleForIdentifiers:(id)a0;

@end
