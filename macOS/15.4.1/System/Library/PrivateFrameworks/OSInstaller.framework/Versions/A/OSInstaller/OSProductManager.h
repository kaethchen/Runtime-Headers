@class SKDisk, NSString, NSArray, NSMutableDictionary, PKMutableProduct, NSMutableArray, PKPackageSourceManager, PKDownloader;

@interface OSProductManager : NSObject {
    PKPackageSourceManager *_sourceManager;
    PKMutableProduct *_mutableProduct;
    NSMutableArray *_allProducts;
    NSMutableDictionary *_attributes;
    int _maxValidInstallDistance;
    NSArray *_downloaderPackages;
    id _downloaderDelegate;
    PKDownloader *_downloader;
    NSMutableDictionary *_retryCountByPackageRef;
}

@property (retain) SKDisk *productDisk;
@property (retain) NSString *productPath;
@property (retain) NSString *seedingProgramForTarget;

+ (id)defaultProductManager;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)productVersion;
- (id)productIdentifier;
- (void)packageDownloader:(id)a0 didDownloadInvalidDataForPackageReference:(id)a1;
- (void)packageDownloader:(id)a0 didFailOnPackageReference:(id)a1 withError:(id)a2;
- (void)packageDownloader:(id)a0 didFinishPackageReference:(id)a1 localPackageReference:(id)a2;
- (BOOL)packageDownloader:(id)a0 shouldRetryFailedPackageReference:(id)a1 previousError:(id)a2;
- (id)sourceManager;
- (void)setMaximumValidInstallDistance:(int)a0;
- (BOOL)_checkAndSetProductVersioning:(id)a0;
- (id)_requiredPackageReferencesFromIdentifiersAndVersions:(id)a0 clearingInvalidation:(BOOL)a1 missingPackages:(id *)a2;
- (void)_startDownloadingNeededPackagesAndNotify:(BOOL)a0;
- (void)_tryAlternateSourceInvalidatingPackageReference:(id)a0 reason:(int)a1 error:(id)a2;
- (BOOL)addProduct:(id)a0 distance:(int)a1;
- (id)attributesDictionary;
- (BOOL)automationFileIsSafeWithError:(id *)a0;
- (id)automationFilePath;
- (id)automationFilePathIfSafe;
- (BOOL)downloadPackagesToMutableProduct:(id)a0 withDelegate:(id)a1;
- (unsigned long long)downloadSizeForPackageReferences:(id)a0 allRemoteURLs:(BOOL *)a1;
- (BOOL)flushAttributesDictionary;
- (id)iaLogPath;
- (int)maximumValidInstallDistance;
- (id)mutableProduct;
- (id)mutableProductPath;
- (void)packageDownloader:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)packageDownloader:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (BOOL)packageReferenceHasValidInstallDistance:(id)a0;
- (BOOL)pastPointOfNoReturn;
- (void)pauseDownload;
- (BOOL)removeMutableProduct;
- (id)requiredPackageReferencesFromIdentifiersAndVersions:(id)a0;
- (id)requiredPackageReferencesFromIdentifiersAndVersions:(id)a0 missingPackages:(id *)a1;
- (void)resumeDownload;
- (BOOL)setMutableProductPath:(id)a0 error:(id *)a1;
- (void)setPastPointOfNoReturn:(BOOL)a0;

@end
