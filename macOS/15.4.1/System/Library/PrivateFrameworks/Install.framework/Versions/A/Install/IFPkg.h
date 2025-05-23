@class NSLock, NSString, NSArray, NSMutableDictionary, NSDictionary, IFInstallPlan, NSBundle, NSMutableArray, IFUpgradeHints;

@interface IFPkg : PFModule {
    NSBundle *_bundle;
    struct _BOMBom { } *_bom;
    struct _BOMBomEnumerator { } *_bomEnum;
    NSLock *_fileEnumeratorLock;
    NSDictionary *_descriptionDictionary;
    NSMutableDictionary *_actionTranslator;
    NSString *_archivePath;
    NSString *_bomPath;
    NSArray *_resourceCache;
    NSArray *_localizationCompatibilityCache;
    BOOL _lookedForHints;
    IFUpgradeHints *_hints;
    BOOL _lookedForBundleVersions;
    NSDictionary *_bundleVersions;
    BOOL _lookedForCustomFileVersionsDict;
    NSDictionary *_customFileVersionsDict;
    BOOL _lookedForBundleRelocations;
    NSMutableArray *_dependencies;
    BOOL _hasPatch;
    BOOL _bomBuffered;
    BOOL _localizedScriptCompatibilityMode;
    IFInstallPlan *_installPlan;
    NSArray *_searchModules;
}

+ (id)moduleName;
+ (id)_receiptCacheForVolume:(id)a0;
+ (id)packageFileTypes;
+ (BOOL)pantherReceiptCompatibiliy:(id)a0 withObject:(id)a1;
+ (BOOL)receiptExistsForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2;
+ (id)receiptIdentifiersForVolume:(id)a0;
+ (id)receiptInfoForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2;
+ (id)receiptModuleForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2 error:(id *)a3;

- (void)dealloc;
- (id)description;
- (id)name;
- (id)identifier;
- (id)version;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)skipDescendents;
- (id)dependencies;
- (id)title;
- (id)_bundle;
- (int)capabilities;
- (id)information;
- (int)_runTask:(id)a0;
- (BOOL)validateContents:(id *)a0;
- (float)_packageVersion;
- (void)_addLocatorSearches:(id)a0 toInstallPlan:(id)a1;
- (id)_architecturesForBom:(struct _BOMBom { } *)a0;
- (id)_archivePath;
- (id)_availableArchitectures;
- (void)releaseFileData;
- (id)_descriptionDictionary;
- (void)_addActionsForIFPkgCmponentsToPlan:(id)a0 andSearches:(id)a1;
- (BOOL)_addBundleVersionCheckingToPlan:(id)a0;
- (struct _BOMBom { } *)_bom;
- (id)_bomPath;
- (id)_buildPathForPackage:(id)a0 componentDirectory:(id)a1 andParentPath:(id)a2;
- (void)_convertToNewStyle:(id)a0 andValue:(id)a1 inDictionary:(id)a2;
- (id)_expandPackageList:(id)a0;
- (BOOL)_isMetapackage;
- (void)_loadBom:(id)a0;
- (BOOL)_loadBundle:(id)a0 error:(id *)a1;
- (BOOL)_loadComponent;
- (void)_loadPackageVersionFile:(id)a0;
- (void)_loadVersionPlist:(id)a0;
- (id)_locateResource:(id)a0 extension:(id)a1 localization:(id)a2;
- (void)_normalizeFlagTypes:(id)a0;
- (void)_normalizeToNewStyle:(id)a0 andValue:(id)a1 inDictionary:(id)a2;
- (id)_parseNewPackageListWithDirectory:(id)a0;
- (id)_parseOldPackageListWithDirectory:(id)a0;
- (id)_parseOldStyleForLanguage:(id)a0;
- (void)_parseSizesFileIntoDictionary:(id)a0;
- (id)_pathForArchiveItemWithExtension:(id)a0 altExtension:(id)a1;
- (id)_pathForItem:(id)a0 withExtension:(id)a1;
- (id)_readDescriptionDictionaryForLanguage:(id)a0;
- (id)_requirementsFromInfoDictionary:(BOOL *)a0;
- (id)_resourceIsDocument:(id)a0 localization:(id)a1;
- (id)_resourceNamed:(id)a0 localization:(id)a1;
- (id)_runCheckTool:(id)a0 withContextDictionary:(id)a1 localization:(id)a2;
- (id)_scriptArgumentsForItem:(id)a0 withContext:(id)a1;
- (void)_setBomPath:(id)a0;
- (void)_setDescriptionObject:(id)a0 forKey:(id)a1;
- (void)_setInfoDictionary:(id)a0 error:(id *)a1;
- (id)_taskEnvironmentForItem:(id)a0 context:(id)a1;
- (id)_taskForAction:(id)a0 argumentsKey:(id)a1 environmentKey:(id)a2 context:(id)a3;
- (id)_taskForExtraction:(id)a0 alternateLocation:(id)a1 destination:(id)a2 planLocation:(id)a3;
- (void)_unloadBom;
- (id)alternateSourceLocation;
- (id)catalogInfo;
- (id)createReceipt:(id)a0 withPlan:(id)a1;
- (int)extractPayloadFiles:(struct __CFArray { } *)a0 toDirectory:(id)a1;
- (int)extractPayloadToDirectory:(id)a0;
- (int)extractPayloadWithPlan:(id)a0 toDirectory:(id)a1;
- (struct _BOMFSObject { } *)fileAtPath:(const char *)a0;
- (BOOL)hasAction:(id)a0;
- (BOOL)initFileEnumerator;
- (id)installPlan;
- (struct _BOMFSObject { } *)nextFile;
- (id)objectForKey:(id)a0 localization:(id)a1;
- (void)resetFileEnumerator;
- (id)runAction:(id)a0 withContextDictionary:(id)a1 localization:(id)a2;
- (id)searchDefinitions;
- (id)taskForAction:(id)a0 withContextDictionary:(id)a1;
- (id)taskForExtraction:(id)a0;
- (id)taskForExtraction:(struct __CFArray { } *)a0 toDirectory:(id)a1;
- (id)taskForExtractionWithPlan:(id)a0 toDirectory:(id)a1;
- (id)taskToCreateReceipt:(id)a0 withPlan:(id)a1;
- (struct _BOMBom { } *)thinArchitectures:(id)a0 withBom:(struct _BOMBom { } *)a1 atPath:(char *)a2;
- (BOOL)validateContents:(id *)a0 deepscan:(BOOL)a1;
- (BOOL)verifyDirectoryForPath:(id)a0 withCreating:(BOOL)a1 andAttributes:(id)a2;

@end
