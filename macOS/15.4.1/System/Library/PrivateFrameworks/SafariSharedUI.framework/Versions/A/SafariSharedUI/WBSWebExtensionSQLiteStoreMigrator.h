@class NSURL, NSUserDefaults, NSArray;

@interface WBSWebExtensionSQLiteStoreMigrator : NSObject {
    NSUserDefaults *_userDefaults;
    NSURL *_safariContainerSettingsDirectoryURL;
    NSArray *_storeFileNameMappings;
    NSURL *_safariWebExtensionSettingsDirectoryURLForDefaultProfile;
    NSURL *_webKitWebExtensionSettingsDirectoryURLForDefaultProfile;
    NSURL *_safariProfilesDirectoryURL;
    NSURL *_webKitProfilesDirectoryURL;
}

- (void).cxx_destruct;
- (void)_initialize;
- (id)initWithUserDefaults:(id)a0 safariContainerSettingsDirectoryURL:(id)a1;
- (void)migrateSQLiteStorageToWebKitIfNecessary;
- (BOOL)_anyWebKitSQLiteStoresExistInFolder:(id)a0;
- (void)_copySQLiteStoresFromSafariExtensionFolder:(id)a0 toWebKitExtensionFolder:(id)a1;
- (BOOL)_copySafariSQLiteStoreAndAssociatedFiles:(id)a0 toWebKitSQLiteStore:(id)a1 webKitWebExtensionFolder:(id)a2;
- (void)_deleteLegacySafariWebExtensionDataForDefaultProfile;
- (void)_deleteLegacySafariWebExtensionDataForNamedProfiles;
- (void)_migrateAllSafariSQLiteStoresToWebKit;
- (void)_migrateExtensionSQLiteStoresForDefaultProfile;
- (void)_migrateExtensionSQLiteStoresForNamedProfileFolderURL:(id)a0;
- (void)_migrateExtensionSQLiteStoresForNamedProfiles;
- (void)_removeDirectories:(id)a0;

@end
