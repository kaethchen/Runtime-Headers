@class NSArray, NSDictionary, NSURL, NSData, NSString;

@interface MIPlaceholderConstructor : NSObject

@property (nonatomic) unsigned long long placeholderType;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSDictionary *infoPlistContent;
@property (retain, nonatomic) NSData *installUUID;
@property (retain, nonatomic) NSData *installSessionUUID;
@property (copy, nonatomic) NSDictionary *entitlements;
@property (copy, nonatomic) NSArray *appExtensionPlaceholderConstructors;
@property (copy, nonatomic) NSArray *embeddedWatchAppPlaceholderConstructors;
@property (copy, nonatomic) NSArray *embeddedAppClipPlaceholderConstructors;
@property (nonatomic) BOOL preserveFullInfoPlist;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL performPlaceholderInstallActions;
@property (readonly, nonatomic) BOOL isLaunchProhibited;
@property (readonly, nonatomic) MIPlaceholderConstructor *firstNetworkExtension;
@property (nonatomic) BOOL includeWatchAppPlaceholders;
@property (nonatomic) BOOL includeAppClipPlaceholders;
@property (nonatomic) BOOL basicIOSPlaceholderForWatchOSLessThanSix;

+ (id)_infoPlistKeysToLoad;

- (void).cxx_destruct;
- (BOOL)_loadInfoPlistContentWithError:(id *)a0;
- (BOOL)_writeInfoPlistToPlaceholder:(id)a0 substitutingIconContent:(id)a1 withError:(id *)a2;
- (BOOL)_constructPlaceholdersForDirectory:(id)a0 itemsWithPathExtension:(id)a1 appendingToArray:(id)a2 bundleType:(unsigned long long)a3 error:(id *)a4;
- (BOOL)_copyInfoPlistLoctableToPlaceholder:(id)a0 error:(id *)a1;
- (BOOL)_copyStringsToPlaceholder:(id)a0 onlyDirectories:(BOOL)a1 error:(id *)a2;
- (id)_entitlementsForPath:(id)a0 error:(id *)a1;
- (id)_initWithSource:(id)a0 byPreservingFullInfoPlist:(BOOL)a1 forBundleType:(unsigned long long)a2 error:(id *)a3;
- (BOOL)_introspectWithError:(id *)a0;
- (BOOL)_materializeConstructors:(id)a0 intoBundle:(id)a1 error:(id *)a2;
- (BOOL)_populateAppExtensionPlaceholderConstructorsWithError:(id *)a0;
- (BOOL)_populateEmbeddedAppClipPlaceholderConstructorsWithError:(id *)a0;
- (BOOL)_populateEmbeddedWatchAppPlaceholderConstructorsWithError:(id *)a0;
- (BOOL)_transferAndUpdateInstallSessionIDsToPlaceholder:(id)a0 error:(id *)a1;
- (BOOL)_writeIconToPlaceholder:(id)a0 infoPlistIconContent:(id *)a1 error:(id *)a2;
- (id)initWithSource:(id)a0 byPreservingFullInfoPlist:(BOOL)a1 error:(id *)a2;
- (BOOL)materializeIntoBundleDirectory:(id)a0 error:(id *)a1;

@end
