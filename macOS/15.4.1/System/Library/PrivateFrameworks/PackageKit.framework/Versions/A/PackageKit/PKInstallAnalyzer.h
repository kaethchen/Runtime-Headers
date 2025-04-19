@class PKInstallRequest, NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray;

@interface PKInstallAnalyzer : NSObject {
    PKInstallRequest *_installRequest;
    NSMutableDictionary *_maskPathsByPackageSpecifier;
    NSMutableDictionary *_skipComponentsByPackageSpecifier;
    NSMutableSet *_obsoletedFiles;
    NSMutableSet *_obsoletedFileReferences;
    NSMutableSet *_potentiallyObsoleteDirectoryReferences;
    NSMutableSet *_potentiallyObsoleteDirectories;
    NSMutableSet *_atomicallyObsoleteBundles;
    NSMutableSet *_truncateBeforeObsoletingFiles;
    NSMutableArray *_deferredInstallPaths;
    NSMutableArray *_registrationPaths;
    NSMutableArray *_contentCachingPaths;
    NSMutableArray *_pathsToCambriaTranslate;
    long long _kextPathCount;
    long long _systemLibraryCount;
    long long _prebootFilesCount;
    long long _xpcCachePathCount;
    NSDictionary *_bundlePathToComponentMap;
    NSMutableDictionary *_bundleIdentToXATTRMap;
    NSMutableDictionary *_defaultPathByBundleIdentifier;
    NSMutableDictionary *_actualPathByBundleIdentifier;
    NSMutableDictionary *_versionByBundleIdentifier;
    NSMutableDictionary *_downgradePathByBundleIdentifier;
    NSMutableArray *_topBundleIdentifiers;
    NSMutableArray *_actualFileInstallPaths;
}

- (void)dealloc;

@end
