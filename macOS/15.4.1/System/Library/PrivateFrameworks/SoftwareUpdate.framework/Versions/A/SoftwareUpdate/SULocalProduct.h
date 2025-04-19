@class SUProduct, NSString, NSDictionary, NSMutableSet, NSURL;

@interface SULocalProduct : SUProduct {
    NSString *_productPath;
    NSDictionary *_packageReferences;
    NSMutableSet *_mustCloseAppsToInstallProduct;
    NSURL *_altDistPackageURL;
}

@property (retain) SUProduct *remoteProduct;

- (void)dealloc;
- (id)_localPackageReferenceFromDistribution:(id)a0;
- (id)distributionEnvironment;
- (id)distributionEvaluationMetainfo;
- (id)distributionPath;
- (BOOL)hasInstallablePackages;
- (id)initWithProduct:(id)a0 productPath:(id)a1 error:(id *)a2;
- (unsigned long long)installSize;
- (id)invalidPackageRefsInProductDirectory;
- (BOOL)isCompletelyDownloaded;
- (id)mustCloseAppsToInstallProduct;
- (id)orderedPackageSpecifiersToInstall;
- (id)outdatedExtraPackageReferences;
- (id)packageReferenceForPackageIdentifier:(id)a0;
- (id)personalizedManifestsPath;
- (id)productPath;
- (int)restartAction;
- (unsigned long long)sizeAlreadyDownloaded;
- (id)systemImagePackage;

@end
