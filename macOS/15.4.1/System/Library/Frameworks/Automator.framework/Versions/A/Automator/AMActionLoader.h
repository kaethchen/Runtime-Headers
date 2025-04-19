@interface AMActionLoader : NSObject

@property (class, readonly, nonatomic) AMActionLoader *sharedActionLoader;

+ (id)coreTypesBundle;
+ (id)displayNameAtPathWithCaching:(id)a0;

- (Class)classForActionWithBundle:(id)a0 error:(id *)a1;
- (BOOL)_loadBundleIfNeeded:(id)a0 returningClass:(Class *)a1 shouldLoadASOCScripts:(BOOL *)a2 error:(id *)a3;
- (id)resolvedIconURLForActionBundle:(id)a0;
- (BOOL)_appleSignedBundleRequiresOutOfProcessLoaderForNonLoaderProcess:(id)a0;
- (BOOL)_bundleRequiresOutOfProcessActionLoader:(id)a0;
- (BOOL)_bundleRequiresOutOfProcessActionLoaderForCurrentProcess:(id)a0;
- (BOOL)_bundleRequiresOutOfProcessLoaderForAppleSignedProcess:(id)a0;
- (BOOL)_bundleRequiresOutOfProcessLoaderForNonLoaderProcess:(id)a0;
- (BOOL)_validateBundle:(id)a0 error:(id *)a1;
- (id)actionWithBundle:(id)a0 error:(id *)a1;
- (id)actionWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionWithPropertyList:(id)a0 error:(id *)a1;
- (id)actionWithURL:(id)a0 error:(id *)a1;
- (BOOL)blacklistAllowsLoadingOfActionWithIdentifier:(id)a0;
- (id)bundleForActionWithPropertyList:(id)a0;
- (id)bundleForActionWithURL:(id)a0 error:(id *)a1;
- (BOOL)bundleShouldBeTreatedAsThirdParty:(id)a0;
- (id)cachingDictionaryForActionBundle:(id)a0;
- (id)definitionForActionWithBundle:(id)a0;
- (void)generateLocalizedApplicationNamesForDefinition:(id)a0 fromBundle:(id)a1;
- (void)generateLocalizedCategoryNamesForDefinition:(id)a0 fromBundle:(id)a1;
- (void)generateLocalizedKeywordsForDefinition:(id)a0 fromBundle:(id)a1;
- (id)loadedBundleForActionWithBundleIdentifier:(id)a0;
- (id)validateActionResourcesForAction:(id)a0 withResourceDictionary:(id)a1;
- (id)validateApplicationResourcesForAction:(id)a0 withResourceDictionary:(id)a1;
- (id)validateFileResourcesForAction:(id)a0 withResourceDictionary:(id)a1;
- (id)validateLicenseResourcesForAction:(id)a0 withResourceDictionary:(id)a1;
- (id)validateWarningActionsForAction:(id)a0;
- (id)validationErrorsForActionResourcesWithAction:(id)a0;

@end
