@class NSArray, NSString, NSData, NSDictionary;

@interface DMCObliterationShelter : NSObject

@property (nonatomic) BOOL hasConfigFile;
@property (copy, nonatomic) NSArray *languageStrings;
@property (copy, nonatomic) NSString *localeString;
@property (retain, nonatomic) NSData *wifiProfileData;
@property (retain, nonatomic) NSData *mdmProfileData;
@property (retain, nonatomic) NSDictionary *cloudConfigurationDetails;
@property (nonatomic) BOOL isSupervised;

- (id)init;
- (void).cxx_destruct;
- (BOOL)clear;
- (BOOL)preserveWithError:(id *)a0;
- (BOOL)retrieveWithError:(id *)a0;
- (void)migrateAllFiles;
- (id)_allPathsToClear;
- (id)_cloudConfigProfilePath_retrieve;
- (id)_cloudConfigProfilePath_stash;
- (id)_configurationDictionaryPath_retrieve;
- (id)_configurationDictionaryPath_stash;
- (id)_containerMetadataPlistPath_stash;
- (BOOL)_createDirectoryAtPathIfNeeded:(id)a0 error:(id *)a1;
- (id)_generateConfigurationDictionary;
- (id)_mdmProfilePath_retrieve;
- (id)_mdmProfilePath_stash;
- (void)_postConfigChangedNotification;
- (id)_retrievalDirectoryPath;
- (id)_stashDirectoryPath;
- (id)_wifiProfilePath_retrieve;
- (id)_wifiProfilePath_stash;
- (id)generateExclusionPaths;

@end
